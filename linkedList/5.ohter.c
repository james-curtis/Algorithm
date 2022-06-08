
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *Createlist(int n);

struct ListNode *Del_absrepeat(struct ListNode **head);

void Printlist(struct ListNode *head);

int main() {
    freopen("../c.in", "r", stdin);
    struct ListNode *head = NULL, *head2 = NULL;
    int n;
    scanf("%d", &n);
    head = Createlist(n);
    printf("原始链表：");
    Printlist(head);

    head2 = Del_absrepeat(&head);
    printf("删除重复结点的链表：");
    Printlist(head);

    printf("被删除的结点组成的链表：");
    Printlist(head2);
    return 0;
}

void Printlist(struct ListNode *head) {
    struct ListNode *p;
    for (p = head; p != NULL; p = p->next)
        printf("%d ", p->data);
    printf("\n");
}

/* 请在这里填写答案 */
struct ListNode *Createlist(int n) {
    struct ListNode *head = (struct ListNode *) malloc(sizeof(struct ListNode));
    struct ListNode *temp = head;
    head->next = NULL;
    for (int i = 0; i < n; i++) {
        struct ListNode *new = (struct ListNode *) malloc(sizeof(struct ListNode));
        scanf("%d", &new->data);
        new->next = temp->next;
        temp->next = new;
    }
    if (n == 0)return NULL;
    return head->next;
}

struct ListNode *Del_absrepeat(struct ListNode **head) {
    struct ListNode *p1 = *head, *head2 = NULL, *p2, *p3, *p4;
    int i, j, f;
    *head = NULL;
    i = 0;
    while (p1) {
        i++;
        if (i != 1) {
            p2 = *head;
            f = 0;
            for (j = 1; j < i; j++) {
                if ((p1->data == p2->data) || (p1->data + p2->data == 0)) {
                    if (head2 == NULL) head2 = p1;
                    else p3->next = p1;
                    p3 = p1;
                    f = 1;
                    break;
                }
                p2 = p2->next;
            }
            if (f == 0) {
                p4->next = p1;
                p4 = p1;
            }
        } else {
            *head = p1;
            p4 = p1;
        }
        p1 = p1->next;
    }
    if (head2)p3->next = NULL;
    if (head)p4->next = NULL;
    return head2;
}
