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
} /* 细节在此不表 */
void Print( List L ); /* 细节在此不表 */

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

/* 你的代码将被嵌在这里 */
List Insert( List L, ElementType X ){

}