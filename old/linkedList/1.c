// 在这里给出函数被调用进行测试的例子。例如：
#include <stdio.h>
#include <stdlib.h>

struct stu
{
    char name[20];
    int no;
    struct stu *next;
};
struct stu *create();
void show(struct stu *p)
{
    while (p)
    {
        printf("%s %d\n", p->name, p->no);
        p = p->next;
    }
}
int main()
{
    freopen("../c.in", "r", stdin);
    struct stu *p = NULL;
    p = create();
    show(p);
    return 0;
}

/* 请在这里填写答案 */
typedef struct stu s;
struct stu *create()
{
    int len;
    scanf("%d", &len);
    s *head, *node, *prev;
    head = node = prev = (s *)malloc(sizeof(s));
    for (int i = 0; i < len; i++)
    {
        scanf("%s %d", node->name, &node->no);
        node->next = (s *)malloc(sizeof(s));
        prev = node;
        node = node->next;
    }
    prev->next = NULL;
    return head;
}