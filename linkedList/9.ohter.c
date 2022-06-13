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
	struct Node *head=L,*p;
	p=(struct Node*)malloc(sizeof(struct Node));
	p->Next=NULL;
	p->Data=X;
	while(L->Next!=NULL&&L->Next->Data<X) {
		L=L->Next;
	}
	p->Next=L->Next;
	L->Next=p;
	return head;
}










