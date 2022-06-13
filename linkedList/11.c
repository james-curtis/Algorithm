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
	scanf("%d",&count);
	List head=NULL,node=NULL;
	for(int i=0; i<count; i++) {
		List temp = (List)malloc(sizeof(struct Node));
		scanf("%d",&temp->Data);
		temp->Next=NULL;
		if(head == NULL) {
			head = node = temp;
			continue;
		}
		node->Next = temp;
		node = node->Next;
	}
	return head;
}
/* 细节在此不表 */
void Print( List L ) {
	for(List node = L; node != NULL; node=node->Next) {
		printf("%d ",node->Data);
	}
	printf("\n ");
}
/* 细节在此不表；空链表将输出NULL */

List Merge( List L1, List L2 );

int main() {
	freopen("../c.in","r",stdin);
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
List Merge( List L1, List L2 ) {
	List head,node,node2,head2,minHead,maxHead;
	if(L1->Next->Data < L2->Next->Data) {
		head = L1->Next;
		head2 = L2->Next;
	} else {
		head2 = L2->Next;
		head = L1->Next;
	}
	L1->Next = L2->Next = NULL;

	List temp = (List)malloc(sizeof(struct Node));
	temp->Data = 0;
	temp->Next = head;
	head = temp;
	//要插入的链表
	for(node = head2; node!=NULL; node=node->Next) {
		List temp = (List)malloc(sizeof(struct Node));
		temp->Data = node->Data;

		//被插入的链表
		for(node2 = head; node2->Next!=NULL&&node2->Next->Data<node->Data; node2=node2->Next);

		temp->Next = node2->Next;
		node2->Next = temp;
	}
	return head;
}





