#include"stdio.h"
#include<malloc.h>

typedef int DataType;
typedef struct linknode {
    DataType data;
    struct linknode *next;
} LinkList;
LinkList *head;

LinkList *InitList() {
    LinkList *head;
    head = (LinkList *) malloc(sizeof(LinkList));
    head->next = NULL;
    return head;
}

void CreateListH(LinkList *head, int n) {
    LinkList *s;
    int i;
    printf("������%d��������", n);
    for (i = 0; i < n; i++) {
        s = (LinkList *) malloc(sizeof(LinkList));
        scanf("%d", &s->data);
        s->next = head->next;
        head->next = s;
    }
    printf("��������lc�����ɹ���");
}

void CreateList(LinkList *head, int n) {
    LinkList *s, *last;
    int i;
    last = head;
    printf("������%d������", n);
    for (i = 0; i < n; i++) {
        s = (LinkList *) malloc(sizeof(LinkList));
        scanf("%d", &s->data);
        s->next = NULL;
        last->next = s;
        last = s;
    }
    printf("��������L�����ɹ���");
}

int LengthList(LinkList *head) {
    LinkList *p = head->next;
    int j = 0;
    while (p != NULL) {
        p = p->next;
        j++;
    }
    return j;
}

void Locate(LinkList *head, DataType x) {
    int j = 1;
    LinkList *p;
    p = head->next;
    while (p != NULL && p->data != x) {
        p = p->next;
        j++;
    }
    if (p != NULL)
        printf("�ڱ�ĵ�%dλ�ҵ�ֵΪ%d�Ľ�㣡", j, x);
    else
        printf("δ�ҵ�ֵΪ%d�Ľ�㣡", x);
}

void SearchList(LinkList *head, int i) {
    LinkList *p;
    int j = 0;
    p = head;
    if (i > LengthList(head))
        printf("λ�ô���������û�и�λ�ã�");
    while (p->next != NULL && j < i) {
        p = p->next;
        j++;
    }
    if (j == i)
        printf("�ڵ�%dλ�ϵ�Ԫ��ֵΪ%d!", i, p->data);
}

void InsList(LinkList *head, int i, DataType x) {
    int j = 0;
    LinkList *p, *s;
    p = head;
    while (p->next != NULL && j < i - 1) {
        p = p->next;
        j++;
    }
    if (p != NULL) {
        s = (LinkList *) malloc(sizeof(LinkList));
        s->data = x;
        s->next = p->next;
        p->next = s;
        printf("����Ԫ�سɹ���");
    } else
        printf("����Ԫ��ʧ�ܣ�");
}

void DelList(LinkList *head, int i) {
    int j = 0;
    DataType x;
    LinkList *p = head, *s;
    while (p->next != NULL && j < i - 1) {
        p = p->next;
        j++;
    }
    if (p->next != NULL && j == i - 1) {
        s = p->next;
        x = s->data;
        p->next = s->next;
        free(s);
        printf("ɾ����%dλ�ϵ�Ԫ��%d�ɹ���", i, x);
    } else
        printf("ɾ�����λ�ô���ɾ��ʧ�ܣ�");
}

void DispList(LinkList *head) {
    LinkList *p;
    p = head->next;
    while (p != NULL) {
        printf("%5d", p->data);
        p = p->next;
    }
}

void Bridge(LinkList *L1, LinkList *L2) {
    LinkList *head, *L, *P, *S;
    head = L = (LinkList *) malloc(sizeof(LinkList));
    P = L1->next;
    S = L2->next;
    while (P != NULL && S != NULL) {
        if (P->data <= S->data) {
            L->next = P;
            S = S->next;
            P = P->next;
        } else if (P->data >= S->data) {
            L->next = S;
            S = S->next;
            P = P->next;
        }
    }
    if (P != NULL && S == NULL) {
        L->next = P;
    } else if (P == NULL && S != NULL) {
        L->next = S;
    }
}
