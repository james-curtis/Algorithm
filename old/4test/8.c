//
// Created by th on 2022/4/15.
//

/*
 * 7-8 查找指定字符 (10 分)
本题要求编写程序，从给定字符串中查找某指定的字符。

输入格式：
输入的第一行是一个待查找的字符。第二行是一个以回车结束的非空字符串（不超过80个字符）。

输出格式：
如果找到，在一行内按照格式“index = 下标”输出该字符在字符串中所对应的最大下标（下标从0开始）；否则输出"Not Found"。

输入样例1：
m
programming
输出样例1：
index = 7
输入样例2：
a
1234
输出样例2：
Not Found
 */
#include<stdio.h>
#include "string.h"
int main(){
//    freopen("../4test/8.in","r",stdin);
    char search;
    char BeSearched[999];
    scanf("%c", &search);
    scanf("%s", BeSearched);

    char *searched = strrchr(BeSearched, search);
    if (searched == NULL) {
        printf("Not Found");
    } else {
        printf("index = %d", searched - BeSearched);
    }
}