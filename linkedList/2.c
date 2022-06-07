// 在这里给出函数被调用进行测试的例子。例如：
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stu
{
    char name[20];
    int no;
    struct stu *next;
};

int myCreate(struct stu *head, int m);
void show(struct stu *head);
struct stu *myIndex(struct stu *head, char *s);
int myDel(struct stu *head, char *s);

int main()
{
    freopen("../c.in", "r", stdin);
    struct stu head;
    struct stu *p;
    char name[20];
    int m;
    scanf("%d", &m);             // 输入m，代表结点个数
    if (myCreate(&head, m) == 1) //如果创建成功
    {
        printf("created...\n");
        show(&head);       //显示所有结点的信息
        scanf("%s", name); //输入要查找的姓名
        if ((p = myIndex(&head, name)) != NULL)
        { //如果找到了显示信息
            printf("%s %d\n", p->name, p->no);
        }
        else
            printf("not found.\n");
        scanf("%s", name); //输入要删除的姓名
        if (myDel(&head, name) == 1)
            printf("deleted.\n");
        else
            printf("not found.\n");
    }
    else
        printf("create failure.");
    return 0;
}

/* 请在这里填写答案 */
typedef struct stu s;
int myCreate(struct stu *head, int m)
{
    if (m == 0)
        return 0;

    s *node, *prev;
    node = prev = head;
    for (int i = 0; i < m; i++)
    {
        int result = scanf("%s %d", node->name, &node->no);
        if(result == EOF || result != 2)return 0;
        node->next = (s *)malloc(sizeof(s));
        prev = node;
        node = node->next;
    }
    prev->next = NULL;
    return 1;
}
void show(struct stu *head)
{
    for (s *node = head; node != NULL; node = node->next)
    {
        printf("%s %d\n", node->name, node->no);
    }
}
struct stu *myIndex(struct stu *head, char *s)
{
    for (struct stu *node = head; node != NULL; node = node->next)
    {
        if (strcmp(node->name, s) == 0)
        {
            // printf("%s %d\n", node->name, node->no);
            return node;
        }
    }
    return NULL;
}

int myDel(struct stu *head, char *s)
{
    struct stu *node, *prev;
    for (node = prev = head; node != NULL; node = node->next)
    {
        if (strcmp(node->name, s) == 0)
        {
            prev->next = node->next;
            return 1;
        }
        prev = node;
    }
    return 0;
}