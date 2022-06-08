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
    struct ListNode *head = NULL;
    struct ListNode *q = NULL;
    int n;
    while (scanf("%d", &n) && n != -1) {
        struct ListNode *p = (struct ListNode *) malloc(sizeof(struct ListNode));
        p->data = n;
        if (head == NULL) {
            head = p;
            q = p;
        }
        q->next = p;
        q = p;
    }
    q->next = NULL;
    return head;
}


struct ListNode *deletem(struct ListNode *L, int m) {
    struct ListNode *node, *prev;
    while (L != NULL && L->data == m) {
        L = L->next;
    }
    node = L->next;
    prev = L;
    while (node) {
        if (node->data == m) {
            prev->next = node->next;
        } else
            prev = node;
        node = node->next;
    }
    return L;
}