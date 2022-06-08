#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist();

struct ListNode *deleteeven(struct ListNode *head);

void printlist(struct ListNode *head) {
    struct ListNode *p = head;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main() {
    freopen("../c.in", "r", stdin);
    struct ListNode *head;

    head = createlist();
    head = deleteeven(head);
    printlist(head);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *createlist() {
    struct ListNode *node, *head = NULL;
    for (int i; scanf("%d", &i) && i != -1;) {
        struct ListNode *temp = (struct ListNode *) malloc(sizeof(struct ListNode));
        temp->data = i;
        temp->next = NULL;
        if (head == NULL) {
            node = head = temp;
            continue;
        }
        node->next = temp;
        node = node->next;
    }
    return head;
}

struct ListNode *deleteeven(struct ListNode *head) {
    for (; head != NULL && head->data % 2 == 0; head = head->next);
    if (head == NULL)
        return head;
    struct ListNode *node = head->next, *prev = head;
    for (; node != NULL; node = node->next) {
        if (node->data % 2 != 0) {
            prev = node;
            continue;
        }
        prev->next = node->next;
    }
    return head;
}