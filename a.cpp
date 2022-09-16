#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct hb {
    int num;
    char bc[20], mdd[20], cfd[20], ddsj[20], cfsj[20];
    //struct hb *next;
};
struct hb st[20];

int menu()//菜单
{
    char x;
    printf("****************************\n\n");
    printf("\ta 航班信息录入\n");
    printf("\tb 航班信息显示\n");
    printf("\tc 航班信息保存\n");
    printf("\td 航班信息修改\n");
    printf("\te 航班信息插入\n");
    printf("\tf 航班信息删除\n");
    printf("\tg 航班信息排序\n");
    printf("\th 航班信息查询\n");
    printf("\ti 退出系统\n");
    printf("\n****************************\n");
    printf("enter your choice:");
    scanf("%c", &x);
    return x;
}

int input(int m)//输入
{
    int i, n;
    printf("input n:");
    scanf("%d", &n);
    printf("航班班次  出发地  目的地   出发时间 	到达时间  座位数量\n");
    for (i = m; i < m + n; i++) {
        scanf("%s%s%s%s%s%d", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, &st[i].num);
    }
    return m + n;
}

void disp(int m)//显示
{
    int i;
    printf("航班班次   出发地   目的地    出发时间 	到达时间  座位数量\n");
    for (i = 0; i < m; i++)
        printf("%22s%22s%22s%22s%22s%5d\n", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, st[i].num);

}

void sort(int m)//按出发时间排序
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

int del(int m)//删除数据
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

void save(int m)//保存数据
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

int init()//读入
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
    printf("Load success!初始化!\n");
    fclose(fp);
    return m;
}

void find(int m)//查找函数
{
    char c, bc[20], cfd[20], mdd[20], cfsj[20], ddsj[20];
    int i, j, n = m;
    getchar();
    printf("1.按航班班次查询\n2.按出发地查询\n3.按目的地查询\n4.按出发时间\n5.到达时间\n请输入你的选择\n");
    scanf("%c", &c);
    if (c == '1') {
        printf("班次:");
        scanf("%s", bc);
        for (i = 0; i < m; i++)
            if (strcmp(st[i].bc, bc) == 0)
                printf("%22s%22s%22s%22s%22s%5d\n", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, st[i].num);
        return;
    }

    if (c == '2') {
        printf("出发地:");
        scanf("%s", cfd);
        for (i = 0; i < m; i++)
            if (strcmp(st[i].cfd, cfd) == 0)
                printf("%22s%22s%22s%22s%22s%5d\n", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, st[i].num);
        return;
    }

    if (c == '3') {
        printf("目的地:");
        scanf("%s", mdd);
        for (i = 0; i < m; i++)
            if (strcmp(st[i].mdd, mdd) == 0)
                printf("%22s%22s%22s%22s%22s%5d\n", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, st[i].num);
        return;
    }
    if (c == '4') {
        printf("出发时间:");
        scanf("%s", cfsj);
        for (i = 0; i < m; i++)
            if (strcmp(st[i].cfsj, cfsj) == 0)
                printf("%22s%22s%22s%22s%22s%5d\n", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, st[i].num);
        return;
    }
    if (c == '5') {
        printf("到达时间:");
        scanf("%s", ddsj);
        for (i = 0; i < m; i++)
            if (strcmp(st[i].ddsj, ddsj) == 0)
                printf("%22s%22s%22s%22s%22s%5d\n", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, st[i].num);
        return;
    }
}

void change(int m)//修改
{
    char c, bc[20], cfd[20], mdd[20], cfsj[20], ddsj[20];
    int i, j, n = m;
    getchar();
    printf("1.按航班班次查询\n2.按出发地查询\n3.按目的地查询\n4.按出发时间\n5.到达时间\n");
    scanf("%c", &c);
    if (c == '1') {
        printf("班次:");
        scanf("%s", bc);
        for (i = 0; i < m; i++)
            if (strcmp(st[i].bc, bc) == 0)
                printf("%22s%22s%22s%22s%22s%5d\n", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, st[i].num);
        printf("修改的内容为：");
        scanf("%s%s%s%s%s%d", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, &st[i].num);
    }

    if (c == '2') {
        printf("出发地:");
        scanf("%s", cfd);
        for (i = 0; i < m; i++)
            if (strcmp(st[i].cfd, cfd) == 0)
                printf("%22s%22s%22s%22s%22s%5d\n", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, st[i].num);
        printf("修改的内容为：");
        scanf("%22s%22s%22s%22s%22s%5d", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, &st[i].num);
    }

    if (c == '3') {
        printf("目的地:");
        scanf("%s", mdd);
        for (i = 0; i < m; i++)
            if (strcmp(st[i].mdd, mdd) == 0)
                printf("%22s%22s%22s%22s%22s%5d\n", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, st[i].num);
        printf("修改的内容为：");
        scanf("%22s%22s%22s%22s%22s%5d", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, &st[i].num);
    }
    if (c == '4') {
        printf("出发时间:");
        scanf("%s", cfsj);
        for (i = 0; i < m; i++)
            if (strcmp(st[i].cfsj, cfsj) == 0)
                printf("%22s%22s%22s%22s%22s%5d\n", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, st[i].num);
        printf("修改的内容为：");
        scanf("%22s%22s%22s%22s%22s%5d", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, &st[i].num);
    }
    if (c == '5') {
        printf("到达时间:");
        scanf("%s", ddsj);
        for (i = 0; i < m; i++)
            if (strcmp(st[i].ddsj, ddsj) == 0)
                printf("%22s%22s%22s%22s%22s%5d\n", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, st[i].num);
        printf("修改的内容为：");
        scanf("%22s%22s%22s%22s%22s%5d", st[i].bc, st[i].cfd, st[i].mdd, st[i].cfsj, st[i].ddsj, &st[i].num);
    }
    return;
}

int main()//主函数
{
//    system("pause");
    printf("\n\n*******啊啊啊******\n\n");
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