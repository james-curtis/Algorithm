#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode Next;
};
typedef PtrToNode List;

List Read() {
    int count;
    scanf("%d", &count);
    List head = NULL, node = NULL;
    for (int i = 0; i < count; i++) {
        List temp = (List) malloc(sizeof(struct Node));
        scanf("%d", &temp->Data);
        temp->Next = NULL;
        if (head == NULL) {
            head = node = temp;
            continue;
        }
        node->Next = temp;
        node = node->Next;
    }
    return head;
}

/* 细节在此不表 */
void Print(List L) {
    for (List node = L; node != NULL; node = node->Next) {
        printf("%d ", node->Data);
    }
    printf("\n ");
}

/* 细节在此不表；空链表将输出NULL */

List Merge(List L1, List L2);

int main() {
    freopen("../c.in", "r", stdin);
    List L1, L2, L;
    L1 = Read();
    L2 = Read();
    L = Merge(L1, L2);
    Print(L);
    Print(L1);
    Print(L2);
    return 0;
}

/* 你的代码将被嵌在这里 */
List Merge(List L1, List L2) {
    List head = NULL, node, chain1 = L1, chain2 = L2;
    for (; L1 != NULL || L2 != NULL;) {
        List temp = (List) malloc(sizeof(struct Node));
        temp->Next = NULL;
        if (head == NULL) {
            temp->Data = 0;
            node = head = temp;
            L1 ? L1 = L1->Next : NULL;
            L2 ? L2 = L2->Next : NULL;
            continue;
        }
        if (L1 == NULL || L1->Data > L2->Data) {
            temp->Data = L2->Data;
            node = node->Next = temp;
            L2 = L2->Next;
        } else {
            temp->Data = L1->Data;
            node = node->Next = temp;
            L1 = L1->Next;
        }
    }
    chain1 ? chain1->Next = NULL : NULL;
    chain2 ? chain2->Next = NULL : NULL;
    return head;
}





