#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();

struct ListNode *deletem(struct ListNode *L, int m);

void printlist(struct ListNode *L) {
    struct ListNode *p = L;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main() {
    freopen("../c.in", "r", stdin);
    int m;
    struct ListNode *L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *readlist() {
    struct ListNode *head, *node;
    head = node = NULL;
    for (int i = 0; scanf("%d", &i) && i != -1;) {
        struct ListNode *temp = (struct ListNode *) malloc(sizeof(struct ListNode));
        temp->data = i;
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
}

struct ListNode *deletem(struct ListNode *L, int m) {
    struct ListNode *node, *prev;
    //先移动头指针
    for (; L != NULL && L->data == m; L = L->next);

    for (node = prev = L; node != NULL; node = node->next) {
        if (node->data == m) {
            prev->next = node->next;
        } else
            prev = node;
    }
    return L;
}