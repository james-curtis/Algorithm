#include <stdio.h>
#include <stdlib.h>

struct stud_node {
    int num;
    char name[20];
    int score;
    struct stud_node *next;
};

struct stud_node *createlist();

struct stud_node *deletelist(struct stud_node *head, int min_score);

int main() {
    freopen("../c.in", "r", stdin);
    int min_score;
    struct stud_node *p, *head = NULL;

    head = createlist();
    scanf("%d", &min_score);
    head = deletelist(head, min_score);
    for (p = head; p != NULL; p = p->next)
        printf("%d %s %d\n", p->num, p->name, p->score);

    return 0;
}

/* 你的代码将被嵌在这里 */
struct stud_node *createlist() {
    struct stud_node *head = NULL, *node;
    for (;;) {
        struct stud_node *temp = (struct stud_node *) malloc(sizeof(struct stud_node));
        scanf("%d", &temp->num);
        if (temp->num == 0)
            break;
        scanf(" %s %d", temp->name, &temp->score);
        temp->next = NULL;
        if (head == NULL) {
            node = head = temp;
            continue;
        }
        node->next = temp;
        node = node->next;
    }
    return head;
}

struct stud_node *deletelist(struct stud_node *head, int min_score) {
    struct stud_node *header = NULL, *node = NULL;
    for (; head != NULL; head = head->next) {
        if (head->score < min_score)
            continue;
        struct stud_node *temp = head;
        if (header == NULL) {
            header = node = temp;
            continue;
        }
        node->next = temp;
        node = node->next;
    }
    if (node != NULL)
        node->next = NULL;
    return header;
}