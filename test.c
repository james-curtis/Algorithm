#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

typedef struct Student {
    char name[100]; //����
    char num[100];  //ѧ��
    char sex;//�Ա� (w����Ů��m��������)
    int age;//����
    int score;//�ɼ�
} stu;
typedef struct LNode {
    stu data;
    struct LNode *next;
} LinkList;

char nam[100];//����
char nu[100];//ѧ��
char s;//�Ա�
int ag;//����
int sc;//�ɼ�

void welocome()//��½����
{
    system("color b1");
    printf("````````````````````````````````````````````````````````````````````````````````");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("  ***********************  ��ӭ��¼ѧ����Ϣ����ƽ̨ *************************  \n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("````````````````````````````````````````````````````````````````````````````````");
}

void menu()//���ܲ˵�
{
    system("color e3");
    printf("    |________________________________________________|\n");
    printf("    |                                                |\n");
    printf("    |                ѧ����Ϣ����ϵͳ                |\n");
    printf("    |                                                |\n");
    printf("    |               0���˳�ϵͳ                      |\n");
    printf("    |               1������ѧ����Ϣ                  |\n");
    printf("    |               2��ɾ��ѧ����Ϣ                  |\n");
    printf("    |               3���޸�ѧ����Ϣ                  |\n");
    printf("    |               4������ѧ������Ϣ                |\n");
    printf("    |               5������ѧ���ɼ�����              |\n");
    printf("    |               6�����ȫ��ѧ����Ϣ              |\n");
    printf("    |               7������ѧ����Ϣ���ļ�            |\n");
    printf("    |                                                |\n");
    printf("    |________________________________________________|\n");
    return;
}

void InitList(LinkList *

&L)//��ʼ������
{
L = (LinkList *) malloc(sizeof(LinkList));
L->
next = NULL;
}

void ListInsert(LinkList *

&L,
LinkList *p
)//�����µĽڵ�
{
LinkList *q = NULL;
q = L;
p->
next = q->next;
q->
next = p;
}

void addstu(LinkList *

&L)//�����µ�ѧ��
{
system("color f2");
printf("������ѧ������Ϣ��\n");
printf("ѧ�ţ�");
scanf("%s",nu);
LinkList *q = L->next;
while(q!=NULL)
{
if(
strcmp(q
->data.num,nu)==0)//�ж��Ƿ����
{
printf("�����Ѵ���\n");
break;
}
q = q->next;
}
if(q==NULL)
{
LinkList *p;
InitList(p);
strcpy(p
->data.num,nu);
printf("������");
scanf("%s",nam);
strcpy(p
->data.name,nam);
printf("�Ա𣺣�wΪ�� mΪŮ��");
scanf(" %c",&s);
p->data.
sex = s;
printf("���䣺");
scanf("%d",&ag);
p->data.
age = ag;
printf("�ܳɼ���");
scanf("%d",&sc);
while(sc>100||sc<0){
printf("������������������\n");
scanf("%d",&sc);
}
p->data.
score = sc;
ListInsert(L, p
);

}
}

void deletestu(LinkList *L)//ɾ��ѧ��
{
    system("color f4");
    printf("��������Ҫɾ����ѧ����ѧ��:");
    scanf("%s", nu);
    //�ж�
    LinkList *p, *pre;
    if (L->next == NULL) {
        printf("��û��ѧ����Ϣ,������ѧ����Ϣ\n");
        return;
    }
    pre = L;
    p = pre->next;
    int judge = 0;
    while (p) {
        if (strcmp(p->data.num, nu) == 0) {
            judge = 1;
            pre->next = p->next;
            free(p);
            printf("ɾ��ѧ���ɹ�\n");
            break;
        }
        pre = p;
        p = p->next;
    }
    if (judge == 0)
        printf("����������\n");
}

void changestu(LinkList *L)//�ı�ѧ����Ϣ
{
    int judge = 1;
    system("color e4");
    printf("��������Ҫ�޸�ѧ����ѧ�ţ�\n");
    scanf("%s", nu);
    LinkList *q = L->next;
    while (q != NULL) {
        if (strcmp(q->data.num, nu) == 0) {
            judge = 1;
            printf("��������Ҫ�޸ĵ���Ϣѡ�1.���� 2. �ܳɼ�  3.����   \n");
            int n;
            scanf("%d", &n);
            switch (n) {
                case 1:
                    printf("��������Ҫ�޸ĵ����֣�");
                    scanf("%s", nam);
                    printf("�޸ĵ�����Ϊ��%s\n", nam);
                    strcpy(q->data.name, nam);
                    printf("�޸����ֳɹ���\n");
                    break;
                case 2:
                    printf("��������Ҫ�޸ĵ��ܳɼ�");
                    scanf("%d", &sc);
                    printf("�޸ĵ��ܳɼ�Ϊ��%d\n", sc);
                    q->data.score = sc;
                    printf("�޸��ܳɼ��ɹ���\n");

                    break;
                case 3:
                    printf("��������Ҫ�޸ĵ����䣺");
                    scanf("%d", &ag);
                    printf("�޸ĵ�����Ϊ��%d\n", ag);
                    q->data.age = ag;
                    printf("�޸�����ɹ���\n");
                    break;
                default :
                    printf("��������ȷ��ѡ��\n");
                    break;
            }
        }
        q = q->next;
    }
    if (judge == 0) {
        printf("����������\n");
    }
}

void findstu(LinkList *L)//��ѧ�Ż�����������ѧ�������������Ϣ
{
    int flag;
    system("color b1");
    printf("1.��ѧ�Ų�ѯ��\n");
    printf("2.��������ѯ��\n");
    printf("�������ѯ��ʽ��");
    scanf("%d", &flag);
    if (flag == 1) {
        printf("���������ѧ�ţ�");
        scanf("%s", nu);
        //�ж�
        LinkList *q = L->next;
        while (q != NULL) {
            if (strcmp(q->data.num, nu) == 0) {
                printf("������%s\n", q->data.name);
                printf("ѧ�ţ�%s\n", q->data.num);
                printf("�Ա�%c\n", q->data.sex);
                printf("���䣺%d\n", q->data.age);
                printf("�ܳɼ���%d\n", q->data.score);
                break;
            }
            q = q->next;
        }
        if (q == NULL)
            printf("����������\n");
    } else {
        printf("���������������");
        scanf("%s", nam);
        LinkList *q = L->next;
        while (q != NULL) {
            if (strcmp(q->data.name, nam) == 0) {
                printf("������%s\n", q->data.name);
                printf("ѧ�ţ�%s\n", q->data.num);
                printf("�Ա�%c\n", q->data.sex);
                printf("���䣺%d\n", q->data.age);
                printf("�ܳɼ���%d\n", q->data.score);
                break;
            }
            q = q->next;
        }
        if (q == NULL)
            printf("����������\n");
    }
}

void display(LinkList *

&L)//���ȫ��ѧ����Ϣ
{
LinkList *q = L->next;
if(q==NULL)
{
printf("��û��ѧ����Ϣ��������ѧ����Ϣ\n");
return;
}
while(q)
{
system("color c0");
printf(" ѧ�ţ�%s ���֣�%s ���䣺%d �Ա�%c  �ܳɼ���%d \n",q->data.num,q->data.name,q->data.age,q->data.sex,
q->data.score);
q = q->next;
}
}

void paixu(LinkList *L)//���ɼ��������� ����������Ľ��
{
    system("color f9");
    LinkList *q, *p, *r = L->next;
    //�ж�
    if (r == NULL) {
        printf("��û��ѧ����Ϣ��������ѧ����Ϣ\n");
        return;
    }
    while (r) //����ѭ���������
    {
        p = r;
        q = r->next;
        LinkList *tmp;//��������ʱ�ݴ�ڵ�
        InitList(tmp);
        while (q) {
            if (q->data.score > p->data.score) {
                /*�ȸ���q�����Ϣ��tmp*/
                strcpy(tmp->data.num, q->data.num);
                strcpy(tmp->data.name, q->data.name);
                tmp->data.sex = q->data.sex;
                tmp->data.age = q->data.age;
                tmp->data.score = q->data.score;
                /*�ٸ���p�����Ϣ��q*/
                strcpy(q->data.num, p->data.num);
                strcpy(q->data.name, p->data.name);
                q->data.sex = p->data.sex;
                q->data.age = p->data.age;
                q->data.score = p->data.score;
                /*�����exchange�����Ϣ��p*/
                strcpy(p->data.num, tmp->data.num);
                strcpy(p->data.name, tmp->data.name);
                p->data.sex = tmp->data.sex;
                p->data.age = tmp->data.age;
                p->data.score = tmp->data.score;
            }
            q = q->next;
        }
        r = r->next;
    }

    printf("������ѧ����Ϣ�ǣ�\n");
    display(L);
}

void saveStuDentFile(LinkList *

&L)//����ѧ����Ϣ���ļ�
{
FILE *fp;
LinkList *p = L->next;
if((
fp = fopen("student.txt", "w")
)==NULL)// �Կ�д�ķ�ʽ�򿪵�ǰĿ¼�µ�.txt
{
printf("���ܴ򿪴��ļ����밴������˳�\n");
exit(1);
}
while(p)
{
fprintf(fp,
"%s  %s  %c  %d  %d  \n",p->data.num,p->data.name,p->data.sex,p->data.age,p->data.score);
p = p->next;
printf("����ɹ�\n");
}
fclose(fp);
}

void readStuDentput(LinkList *

&L) //����ǰ���ļ����ݶ�ȡ�������ڴ�
{
FILE *fp;
fp = fopen("student.txt", "rb"); //��ֻ����ʽ�򿪵�ǰĿ¼�µ�.txt
if(fp==NULL)
{
printf("�����ڴ��ļ�\n");
exit(0);                   //��ֹ����
}
int i = 0;
while(!
feof(fp)
)
{
char nu[100];//ѧ��
char nam[100];//����
char s;//�Ա�
int ag;//����
int sc;//�ɼ�
fscanf(fp,
" %s %s %c %d %d",nu,nam,&s,&ag,&sc);
i++;
}
fclose(fp);
FILE *FP;
FP = fopen("student.txt", "rb"); //��ֻ����ʽ�򿪵�ǰĿ¼�µ�.txt
if(FP==NULL)
{
printf("�޷����ļ�\n");
exit(0); //��ֹ����
}
int b = i - 1;
int j = 1;
while(!
feof(FP)
)
{
fscanf(FP,
"%s %s %c %d %d",nu,nam,&s,&ag,&sc);
LinkList *n = (LinkList *) malloc(sizeof(LinkList));
strcpy(n
->data.num,nu);//�Ѻ��ߵ����ݿ�����ǰ����
strcpy(n
->data.name,nam);//�Ѻ��ߵ����ݿ�����ǰ����
n->data.
sex = s;
n->data.
age = ag;
n->data.
score = sc;
ListInsert(L, n
);//�����µĽڵ�
n = n->next;
if(j==b)
break;
j++;
}
fclose(FP);    //�ر��ļ�
}

int main() {
    system("cls");//����
    welocome();//��½����
    Sleep(3000);//�ӻ�3��
    LinkList *L;
    InitList(L);
    readStuDentput(L);//����ǰ���ļ����ݶ�ȡ������
    int a;
    int choose;
    while (1) {
        printf("��������Ҫѡ��Ĺ��ܼ���\n");
        menu();//���ܲ˵�
        scanf("%d", &choose);
        switch (choose) {
            case 0://�˳�
                printf("ллʹ�ã���ӭ�´ι���");
                exit(0);
            case 1://����ѧ����Ϣ
                addstu(L);//�����µ�ѧ��
                break;
            case 2://ɾ������ѧ����Ϣ
                deletestu(L);//ɾ��ѧ��
                break;
            case 3://�ı��ѧ������Ϣ
                changestu(L);//�ı�ѧ����Ϣ
                break;
            case 4://����ĳ��ѧ������Ϣ
                findstu(L);//��ѧ�Ų���ѧ�������������Ϣ
                break;

            case 5:// ��ѧ���ɼ���������
                paixu(L);
                break;
            case 6://�������ѧ������Ϣ
                display(L);
                break;
            case 7://����ѧ����Ϣ���ļ�
                saveStuDentFile(L);
                break;
            default:
                printf("��������ȷ��ѡ��\n");
                break;
        }
    }
}
