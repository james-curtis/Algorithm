#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(){
    int count;
    scanf("%d", &count);
    PtrToNode head=NULL,node;
    for (int i = 0; i < count; ++i) {
        PtrToNode temp = (PtrToNode) malloc(sizeof(struct Node));
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
} /* ϸ���ڴ˲��� */
void Print( List L ); /* ϸ���ڴ˲��� */

List Insert( List L, ElementType X );

int main()
{
    List L;
    ElementType X;
    L = Read();
    scanf("%d", &X);
    L = Insert(L, X);
    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
List Insert( List L, ElementType X ){

}