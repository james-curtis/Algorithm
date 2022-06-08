#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ListNode {
    int num;
    struct ListNode *next;
} Node;

Node *createlist(); /*裁判实现，细节不表*/
Node *find_middle(Node *head);

void display(Node *head);/*裁判实现，细节不表*/

int main() {
    freopen("../c.in", "r", stdin);
    Node *head, *p;
    head = createlist();
    p = find_middle(head);
    display(p);
    return 0;
}

/* 请在这里填写答案 */
Node *find_middle(Node *head) {
    Node *headBackup = head;
    int len = 0;
    for (Node *node = head; node != NULL; node = node->next) {
        len++;
    }

    if (len % 2 == 0)
        len /= 2;
    else if (len % 2 == 1)
        len = (len + 1) / 2;
    len--;
    int cnt = 0;
    for (Node *node = head; node != NULL; node = node->next,cnt++) {

        if (cnt == len) {
            return node;
        }
    }
}