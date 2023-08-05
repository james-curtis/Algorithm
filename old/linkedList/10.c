struct ListNode* partition(struct ListNode* head, int x) {
	struct ListNode * header,*node,* header2,*node2;
	header=node=header2=node=NULL;
	for(; head!=NULL; head=head->next) {
		struct ListNode*temp = (struct ListNode*)malloc(sizeof(struct ListNode));
		temp->data = head->data;
		temp->next = NULL;
		if(head->data < x) {
			if(header == NULL) {
				header = node = temp;
				continue;
			}
			node->next = temp;
			node = node->next;
		} else {
			if(header2 == NULL) {
				header2 = node2 = temp;
				continue;
			}
			node2->next = temp;
			node2 = node2->next;
		}
	}
//	node2!=NULL?node2->next = NULL:-1;
	if(header==NULL)return header2;
	node->next = header2;
	return header;
}
