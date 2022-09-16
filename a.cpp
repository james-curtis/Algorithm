#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct hb {
    int num;
    char bc[20], mdd[20], cfd[20], ddsj[20], cfsj[20];
    //struct hb *next;
};
struct hb st[20];

int menu()//�˵�
{
    char x;
    printf("****************************\n\n");
    printf("\ta ������Ϣ¼��\n");
    printf("\tb ������Ϣ��ʾ\n");
    printf("\tc ������Ϣ����\n");
    printf("\td ������Ϣ�޸�\n");
    printf("\te ������Ϣ����\n");
    printf("\tf ������Ϣɾ��\n");
    printf("\tg ������Ϣ����\n");
    printf("\th ������Ϣ��ѯ\n");
    printf("\ti �˳�ϵͳ\n");
    printf("\n****************************\n");
    printf("enter your choice:");
    scanf("%c", &x);
    return x;
}

int input(int m)//����
{
    int i, n;
    printf("input n:");
    scanf("%d", &n);
    printf("������  ������  Ŀ�ĵ�   ����ʱ�� 	����ʱ��  ��λ����\n");
    for (i = m; i < m + n; i++) {
        scanf("%s%s%s%s%s%d", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, &st[i].num);
    }
    return m + n;
}

void disp(int m)//��ʾ
{
    int i;
    printf("������   ������   Ŀ�ĵ�    ����ʱ�� 	����ʱ��  ��λ����\n");
    for (i = 0; i < m; i++)
        printf("%22s%22s%22s%22s%22s%5d\n", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, st[i].num);

}

void sort(int m)//������ʱ������
{
    int i, j;
    struct hb stt;
    for (i = 1; i < m; i++)
        for (j = 0; j < m - i; j++) {
            if (st[j].cfsj > st[j + 1].cfsj) {
                stt = st[j];
                st[j] = st[j + 1];
                st[j + 1] = stt;
            }
        }

}

int del(int m)//ɾ������
{
    char c, name[20];
    int i, j, n = m, id;
    getchar();
    printf("bc:");
    scanf("%s", name);
    for (i = 0; i < m; i++)
        if (strcmp(st[i].bc, name) == 0) {
            m--;
            for (j = i; j < m; j++)
                st[j] = st[j + 1];
        }
    return m;
}

void save(int m)//��������
{
    FILE *fp;
    fp = fopen("infor.txt", "w+");
    if (fp == NULL) {
        printf("open fael!\n");
        return;
    }
    int i;
    fprintf(fp, "%d\n", m);
    for (i = 0; i < m; i++) {
        fprintf(fp, "%22s%22s%22s%22s%22s%5d\n", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, st[i].num);
    }
    printf("load successfully!\n");
    fclose(fp);

}

int init()//����
{
    FILE *fp;
    fp = fopen("infor.txt", "r");
    if (fp == NULL) {
        printf("open fail!\n");
        return 0;
    }
    int i, m;
    fscanf(fp, "%d", &m);
    for (i = 0; i < m; i++)
        fscanf(fp, "%22s%22s%22s%22s%22s%5d\n", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, st[i].num);
    printf("Load success!��ʼ��!\n");
    fclose(fp);
    return m;
}

void find(int m)//���Һ���
{
    char c, bc[20], cfd[20], mdd[20], cfsj[20], ddsj[20];
    int i, j, n = m;
    getchar();
    printf("1.�������β�ѯ\n2.�������ز�ѯ\n3.��Ŀ�ĵز�ѯ\n4.������ʱ��\n5.����ʱ��\n���������ѡ��\n");
    scanf("%c", &c);
    if (c == '1') {
        printf("���:");
        scanf("%s", bc);
        for (i = 0; i < m; i++)
            if (strcmp(st[i].bc, bc) == 0)
                printf("%22s%22s%22s%22s%22s%5d\n", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, st[i].num);
        return;
    }

    if (c == '2') {
        printf("������:");
        scanf("%s", cfd);
        for (i = 0; i < m; i++)
            if (strcmp(st[i].cfd, cfd) == 0)
                printf("%22s%22s%22s%22s%22s%5d\n", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, st[i].num);
        return;
    }

    if (c == '3') {
        printf("Ŀ�ĵ�:");
        scanf("%s", mdd);
        for (i = 0; i < m; i++)
            if (strcmp(st[i].mdd, mdd) == 0)
                printf("%22s%22s%22s%22s%22s%5d\n", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, st[i].num);
        return;
    }
    if (c == '4') {
        printf("����ʱ��:");
        scanf("%s", cfsj);
        for (i = 0; i < m; i++)
            if (strcmp(st[i].cfsj, cfsj) == 0)
                printf("%22s%22s%22s%22s%22s%5d\n", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, st[i].num);
        return;
    }
    if (c == '5') {
        printf("����ʱ��:");
        scanf("%s", ddsj);
        for (i = 0; i < m; i++)
            if (strcmp(st[i].ddsj, ddsj) == 0)
                printf("%22s%22s%22s%22s%22s%5d\n", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, st[i].num);
        return;
    }
}

void change(int m)//�޸�
{
    char c, bc[20], cfd[20], mdd[20], cfsj[20], ddsj[20];
    int i, j, n = m;
    getchar();
    printf("1.�������β�ѯ\n2.�������ز�ѯ\n3.��Ŀ�ĵز�ѯ\n4.������ʱ��\n5.����ʱ��\n");
    scanf("%c", &c);
    if (c == '1') {
        printf("���:");
        scanf("%s", bc);
        for (i = 0; i < m; i++)
            if (strcmp(st[i].bc, bc) == 0)
                printf("%22s%22s%22s%22s%22s%5d\n", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, st[i].num);
        printf("�޸ĵ�����Ϊ��");
        scanf("%s%s%s%s%s%d", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, &st[i].num);
    }

    if (c == '2') {
        printf("������:");
        scanf("%s", cfd);
        for (i = 0; i < m; i++)
            if (strcmp(st[i].cfd, cfd) == 0)
                printf("%22s%22s%22s%22s%22s%5d\n", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, st[i].num);
        printf("�޸ĵ�����Ϊ��");
        scanf("%22s%22s%22s%22s%22s%5d", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, &st[i].num);
    }

    if (c == '3') {
        printf("Ŀ�ĵ�:");
        scanf("%s", mdd);
        for (i = 0; i < m; i++)
            if (strcmp(st[i].mdd, mdd) == 0)
                printf("%22s%22s%22s%22s%22s%5d\n", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, st[i].num);
        printf("�޸ĵ�����Ϊ��");
        scanf("%22s%22s%22s%22s%22s%5d", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, &st[i].num);
    }
    if (c == '4') {
        printf("����ʱ��:");
        scanf("%s", cfsj);
        for (i = 0; i < m; i++)
            if (strcmp(st[i].cfsj, cfsj) == 0)
                printf("%22s%22s%22s%22s%22s%5d\n", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, st[i].num);
        printf("�޸ĵ�����Ϊ��");
        scanf("%22s%22s%22s%22s%22s%5d", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, &st[i].num);
    }
    if (c == '5') {
        printf("����ʱ��:");
        scanf("%s", ddsj);
        for (i = 0; i < m; i++)
            if (strcmp(st[i].ddsj, ddsj) == 0)
                printf("%22s%22s%22s%22s%22s%5d\n", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, st[i].num);
        printf("�޸ĵ�����Ϊ��");
        scanf("%22s%22s%22s%22s%22s%5d", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, &st[i].num);
    }
    return;
}

int main()//������
{
//    system("pause");
    printf("\n\n*******������******\n\n");
    return 0;
    system("read");
    int num = 0;
    num = init();
    while (1) {
        switch (menu()) {
            case 'a':
                num = input(num);
                break;
            case 'b':
                disp(num);
                break;
            case 'c':
                save(num);
                break;
            case 'd':
                change(num);
                disp(num);
                break;
            case 'e':
                num = input(num);
                disp(num);
                break;
            case 'f':
                num = del(num);
                disp(num);
                break;
            case 'g':
                sort(num);
                disp(num);
                break;
            case 'h':
                find(num);
                break;
            case 'i':
                exit(0);
            default:
                printf("your choice error!\n");
        }
        system("pause");
        system("cls");
    }
}