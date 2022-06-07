#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist() {
    struct ListNode *head, *node, *prev;
    node = head = prev = (struct ListNode *) malloc(sizeof(struct ListNode));
    scanf("%d", &node->data);
    if (node->data == -1)return NULL;
    for (; node->data != -1;) {
        node->next = (struct ListNode *) malloc(sizeof(struct ListNode));
        prev = node;
        node = node->next;
        scanf("%d", &node->data);
    }
    prev->next = NULL;
    return head;
} /*裁判实现，细节不表*/
struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2);

void printlist(struct ListNode *head) {
    struct ListNode *p = head;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main() {
    //freopen("../c.in", "r", stdin);
    struct ListNode *list1, *list2;

    list1 = createlist();
    list2 = createlist();
    list1 = mergelists(list1, list2);
    printlist(list1);

    return 0;
}

/* 你的代码将被嵌在这里 */

int compare(const int *a, const int *b) {
    return *a - *b;
}

struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2) {
    int size = 0;
    for (struct ListNode *list = list1; list != NULL; list = list->next, size++);
    for (struct ListNode *list = list2; list != NULL; list = list->next, size++);
    if (size == 0)return NULL;

    int listArr[size];
    int i = 0;
    for (struct ListNode *list = list1; list != NULL; list = list->next, i++)listArr[i] = list->data;
    for (struct ListNode *list = list2; list != NULL; list = list->next, i++)listArr[i] = list->data;


    qsort(listArr, size, sizeof(int), compare);

    struct ListNode *head, *node;
    node = head = (struct ListNode *) malloc(sizeof(struct ListNode));
    head->data = listArr[0];

    for (int j = 1; j < i; j++) {
        node->next = (struct ListNode *) malloc(sizeof(struct ListNode));
        node = node->next;
        node->data = listArr[j];
    }
    node->next = NULL;
    return head;

}