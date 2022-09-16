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
    List p, q;
    List L = NULL, head = NULL;
    List L1_head = L1, L2_head = L2;
    int p1 = 0;
    for (L2 = L2->Next; L2; L2 = L2->Next) {
        while (L1->Next && L1->Next->Data < L2->Data) {
            L1 = L1->Next;
        }
        p = (List) malloc(sizeof(struct Node));
        p->Data = L2->Data;
        p->Next = L1->Next;
        L1->Next = p;
    }

    L = (List) malloc(sizeof(struct Node));
    L->Next = NULL;
    head = L;
    L1 = L1_head->Next;
    for (; L1; L1 = L1->Next) {
        q = (List) malloc(sizeof(struct Node));
        q->Data = L1->Data;
        q->Next = NULL;
        L->Next = q;
        L = L->Next;
    }
    L1 = L1_head;
    L2 = L2_head;
    L1->Next = NULL;
    L2->Next = NULL;
    return head;
}

