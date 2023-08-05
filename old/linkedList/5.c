
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
    struct ListNode *node = NULL, *prev = NULL;
    for (int i = 0; i < n; ++i) {
        node = (struct ListNode *) malloc(sizeof(struct ListNode));
        scanf("%d", &node->data);
        node->next = prev;
        prev = node;
    }
    return node;
}

struct ListNode *Del_absrepeat(struct ListNode **head) {

    struct ListNode *node, *prev;
    struct ListNode *delNode, *delHead = NULL;
    for (node = prev = *head; node != NULL; node = node->next) {
        int isDumpCate = 0, isFirst = 0;
        for (struct ListNode *walkChainNode = *head; walkChainNode != NULL; walkChainNode = walkChainNode->next) {
            //这里不能使用abs取绝对值，会导致`段错误`，内存溢出
            if (walkChainNode->data == node->data || walkChainNode->data + node->data == 0) {
                if (walkChainNode == node)isFirst = 1;
                isDumpCate = 1;
                break;
            }
        }
        if (isDumpCate == 0 || isFirst == 1) {
            prev = node;
            continue;
        }
        struct ListNode *DelActiveNode = (struct ListNode *) malloc(sizeof(struct ListNode));
        DelActiveNode->data = node->data;
        if (delHead == NULL)
            delNode = delHead = DelActiveNode;
        else {
            delNode->next = DelActiveNode;
            delNode = delNode->next;
        }

        prev->next = node->next;
    }
    delNode->next = NULL;
    return delHead;
}