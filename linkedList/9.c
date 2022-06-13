#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
	ElementType Data;
	PtrToNode   Next;
};
typedef PtrToNode List;

List Read() {
	int count;
	scanf("%d", &count);
	PtrToNode head=NULL,node;
	for (int i = 0; i < count; ++i) {
		PtrToNode temp = (PtrToNode) malloc(sizeof(struct Node));
		scanf("%d", &temp->Data);
		if (head == NULL) {
			head = node = temp;
			continue;
		}
		node->Next = temp;
		node = node->Next;
	}
	node->Next = NULL;
	return head;
} /* 细节在此不表 */
void Print( List L ) {
	for(List node = L; node!=NULL; node=node->Next) {
		printf("%d\n",node->Data);
	}
} /* 细节在此不表 */

List Insert( List L, ElementType X );

int main() {
	freopen("../c.in","r",stdin);
	List L;
	ElementType X;
	L = Read();
	scanf("%d", &X);
	L = Insert(L, X);
	Print(L);
	return 0;
}

/* 你的代码将被嵌在这里 */
List Insert( List L, ElementType X ) {
	List node = L;
	List temp = (List)malloc(sizeof(struct Node));
	temp->Data = X;
	for(int i = 0; node->Next!=NULL && node->Next->Data < X; node = node->Next,i++);
	/**
	没有考虑在首位增加的情况
	
	*/
	node->Next = temp;
	return L;
}










