#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ListNode {
    int num;
    struct ListNode *next;
}Node;

Node *createlist(){
    struct ListNode *head, *node;
    head = node = NULL;
    int count;
    scanf("%d", &count);
    for (int i = 0; i < count; i++) {
        int tempNum;
        scanf("%d", &tempNum);
        struct ListNode *temp = (struct ListNode *) malloc(sizeof(struct ListNode));
        temp->num = tempNum;
        if (head == NULL) {
            head = node = temp;
            continue;
        }
        node->next = temp;
        node = node->next;
    }
    if (node)
        node->next = NULL;
    return head;
} /*根据用户输入的整数n，创建具有n个结点的单链表。裁判实现，细节不表*/
Node *deletelink(Node *head, int i);
void display(Node *L){
    struct ListNode *p = L;
    while (p) {
        printf("%d ", p->num);
        p = p->next;
    }
    printf("\n");
}/*输出链表结点的数据域。裁判实现，细节不表*/

int main(void)
{
    freopen("../c.in", "r", stdin);
    Node  *head;
    int i;
    head = createlist();
    scanf("%d",&i);
    head = deletelink(head, i);
    display(head);
    return 0;
}
/* 请在这里填写答案 */
Node *deletelink(Node *head, int i){
    if (i == 1)
    {
        head = head->next;
        return head;
    }
    Node *node, *prev;
    prev = head;
    node = head->next;
    for (int j = 2; node != NULL; node = node->next, ++j) {
        if(j!=i) {
            prev = node;
            continue;
        }
        prev->next = node->next;
        return head;
    }
    printf("error\n");
    return head;
}