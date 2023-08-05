
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *Createlist(int n) {
    if (n == 0)return NULL;
    struct ListNode *head, *node;
    node = head = (struct ListNode *) malloc(sizeof(struct ListNode));
    node->next = NULL;
    scanf("%d", &node->data);
    if (n == 1)return head;
    for (int i = 1; i < n; i++) {
        head = (struct ListNode *) malloc(sizeof(struct ListNode));
        head->next = node;
        scanf("%d", &head->data);
        node = head;
    }
    return head;
}

struct ListNode *Del_absrepeat(struct ListNode **head);

void Printlist(struct ListNode *head);

int main() {
    freopen("../c.in", "r", stdin);
    struct ListNode *head = NULL, *head2 = NULL;
    int n;
    scanf("%d", &n);
    head = Createlist(n);
    printf("ԭʼ����");
    Printlist(head);

    head2 = Del_absrepeat(&head);
    printf("ɾ���ظ���������");
    Printlist(head);

    printf("��ɾ���Ľ����ɵ�����");
    Printlist(head2);
    return 0;
}

void Printlist(struct ListNode *head) {
    struct ListNode *p;
    for (p = head; p != NULL; p = p->next)
        printf("%d ", p->data);
    printf("\n");
}

/* ����������д�� */
int mem[99999];

struct ListNode *Del_absrepeat(struct ListNode **head) {
    struct ListNode *header, *prev, *failedHead = NULL, *failed;
    header = prev = *head;
    for (struct ListNode *node = header; node != NULL; node = node->next) {
        int index = abs(node->data);
        if (mem[index] > 0) {
            if (failedHead == NULL) {
                failedHead = (struct ListNode *) malloc(sizeof(struct ListNode));
                failedHead->data = node->data;
                failed = failedHead;
            } else {
                failed->next = (struct ListNode *) malloc(sizeof(struct ListNode));
                failed = failed->next;
                failed->data = node->data;
            }

            prev->next = node->next;
        } else
            prev = node;
        mem[index]++;
    }
    failed->next = NULL;
    return failedHead;

}