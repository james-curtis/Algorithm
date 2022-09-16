#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct stu {
    char num[10];
    char qidian[20];
    char zhongdian[20];
    char startime[10];
    char endtime[10];
    int count;
};
struct stu st[20];

int menu() {
    int n;
    printf("****************************\n\n");
    printf("\t1 luru\n");
    printf("\t2 xianshi\n");
    printf("\t3 paixu\n");
    printf("\t4 tianjia\n");
    printf("\t5 shanchu\n");
    printf("\t6 baochun\n");
    printf("\t7 chaxun\n");
    printf("\t0 tuichu\n");
    printf("\n****************************\n");
    printf("enter your choice:");
    scanf("%d", &n);
    return n;
}

int input(int m) {
    int i, n;
    printf("input n:");
    scanf("%d", &n);
    printf("num    qidian     zhongdian      startime       endtime    count\n");
    for (i = m; i < m + n; i++) {
        scanf("%s%s%s%s%s%d", &st[i].num, &st[i].qidian, &st[i].zhongdian, &st[i].startime, &st[i].endtime,
              &st[i].count);
    }
    return m + n;
}

void disp(int m) {
    int i;
    for (i = 0; i < m; i++) {
        printf("num    qidian     zhongdian      startime       endtime    count\n");
        printf("%s %s %s %s %s %d\n", st[i].num, st[i].qidian, st[i].zhongdian, st[i].startime, st[i].endtime,
               st[i].count);
    }
}

void sort(int m) {
    int i, j;
    struct stu stt;
    for (i = 1; i < m; i++)
        for (j = 0; j < m - i; j++) {
            if (st[j].num < st[j + 1].num) {
                stt = st[j];
                st[j] = st[j + 1];
                st[j + 1] = stt;
            }
        }

}

int del(int m) {
    char c, num[20], qidian[20], zhongdian[20];
    int i, j, n = m;
    getchar();
    printf("a.	按班次删除  \n");
    printf("b.	按出发地删除\n");
    printf("c.	按目的地删除\n");
    printf("请输入你的选择：");
    scanf("%c", &c);
    if (c == 'a') {
        printf("班次：");
        scanf("%s", num);
        for (i = 0; i < m; i++)
            if (strcat(st[i].num, num) == 0) {
                printf("要删除的项为：%s%s%s%s%s%d", &st[i].num, &st[i].qidian, &st[i].zhongdian, &st[i].startime,
                       &st[i].endtime, &st[i].count);
                printf("你确定要删除吗？（删除过后，数据将不可恢复！）\n");
                printf("请选择“是（a）”或“否（b）”：");
                scanf("%c", &c);
            }
        return n;
    }
    if (c == 'b') {
        printf("出发地：");
        scanf("%s", qidian);
        for (i = 0; i < m; i++)
            if (strcat(st[i].qidian, qidian) == 0) {
                printf("要删除的项为：%s%s%s%s%s%d", &st[i].num, &st[i].qidian, &st[i].zhongdian, &st[i].startime,
                       &st[i].endtime, &st[i].count);
                printf("你确定要删除吗？（删除过后，数据将不可恢复！）\n");
                printf("请选择“是（a）”或“否（b）”：");
                scanf("%c", &c);
                if (c == 'x') {
                    n--;
                    for (j = i; j < m; j++)
                        st[j] = st[j + 1];
                }
            }
        return n;
    }
    if (c == 'c') {
        printf("目的地：");
        scanf("%s", zhongdian);
        for (i = 0; i < m; i++)
            if (strcat(st[i].zhongdian, zhongdian) == 0) {
                printf("要删除的项为：%s%s%s%s%s%d", &st[i].num, &st[i].qidian, &st[i].zhongdian, &st[i].startime,
                       &st[i].endtime, &st[i].count);
                printf("你确定要删除吗？（删除过后，数据将不可恢复！）\n");
                printf("请选择“是（a）”或“否（b）”：");
                scanf("%c", &c);
                if (c == 'x') {
                    n--;
                    for (j = i; j < m; j++)
                        st[j] = st[j + 1];
                }
            }
        return n;
    }
    return n;
}

void save(int m) {
    FILE *fp;
    fp = fopen("c.txt", "w+");
    if (fp == NULL) {
        printf("open fail!\n");
        return;
    }
    int i;
    fprintf(fp, "%d\n", m);
    for (i = 0; i < m; i++)
        fprintf(fp, "%s %s %s %s %s %d\n", st[i].num, st[i].qidian, st[i].zhongdian, st[i].startime, st[i].endtime,
                st[i].count);
    printf("Save success!\n");
    fclose(fp);
}

int init() {
    FILE *fp;
    fp = fopen("c.txt", "r");
    if (fp == NULL) {
        printf("open fail!\n");
        return 0;
    }
    int i, m;
    fscanf(fp, "%d", &m);
    for (i = 0; i < m; i++)
        fscanf(fp, "%s %s %s %s %s %d\n", st[i].num, st[i].qidian, st[i].zhongdian, st[i].startime, st[i].endtime,
               st[i].count);
    printf("Load success!初始化!\n");
    fclose(fp);
    return m;
}

void check(int m) {
    printf("a:num\nb:qidian\nc:zhongdian\nd:startime\ne:endtime\n");
    char c;
    getchar();
    char num[10], qidian[20], zhongdian[20], startime[20], endtime[20];
    scanf("%c", &c);
    if (c == 'a') {
        int i;
        printf("num:");
        scanf("%s", &num);
        for (i = 0; i <= m; i++) {
            if (strcmp(num, st[i].num) == 0)break;
        }
        printf("num    qidian     zhongdian      startime       endtime    count\n");
        printf("%s %s %s %s %s %d\n", st[i].num, st[i].qidian, st[i].zhongdian, st[i].startime, st[i].endtime,
               st[i].count);
    }

    if (c == 'b') {
        int i;
        printf("qidian:");
        scanf("%s", &qidian[20]);
        for (i = 0; i <= m; i++) {
            if (strcmp(st[i].qidian, qidian) == 0)break;
        }
        printf("num    qidian     zhongdian      startime       endtime    count\n");
        printf("%s %s %s %s %s %d\n", st[i].num, st[i].qidian, st[i].zhongdian, st[i].startime, st[i].endtime,
               st[i].count);
    }

    if (c == 'c') {
        int i;
        printf("zhongdian:");
        scanf("%s", &zhongdian[20]);
        for (i = 0; i <= m; i++) {
            if (strcmp(st[i].zhongdian, zhongdian) == 0)break;
        }
        printf("num    qidian     zhongdian      startime       endtime    count\n");
        printf("%s %s %s %s %s %d\n", st[i].num, st[i].qidian, st[i].zhongdian, st[i].startime, st[i].endtime,
               st[i].count);
    }

    if (c == 'd') {
        int i;
        printf("startime:");
        scanf("%s", &startime[20]);
        for (i = 0; i <= m; i++) {
            if (strcmp(st[i].startime, startime) == 0)break;
        }
        printf("num    qidian     zhongdian      startime       endtime    count\n");
        printf("%s %s %s %s %s %d\n", st[i].num, st[i].qidian, st[i].zhongdian, st[i].startime, st[i].endtime,
               st[i].count);
    }

    if (c == 'e') {
        int i;
        printf("endtime:");
        scanf("%s", &endtime[20]);
        for (i = 0; i <= m; i++) {
            if (strcmp(st[i].endtime, endtime) == 0)break;
        }
        printf("num    qidian     zhongdian      startime       endtime    count\n");
        printf("%s %s %s %s %s %d\n", st[i].num, st[i].qidian, st[i].zhongdian, st[i].startime, st[i].endtime,
               st[i].count);
    }
}


int main() {
    printf("\n\n*******WELCOME******\n\n");
    system("pause");
    int num = 0;
    num = init();
    while (1) {
        switch (menu()) {
            case 1:
                num = input(num);
                break;
            case 2:
                disp(num);
                break;
            case 3:
                sort(num);
                disp(num);
                break;
            case 4:
                num = input(num);
                disp(num);
                break;
            case 5:
                num = del(num);
                disp(num);
                break;
            case 6:
                save(num);
                break;
            case 7:
                check(num);
                break;
            case 0:
                exit(0);
            default:
                printf("your choice error!\n");
        }
        system("pause");
        system("cls");
    }

}
