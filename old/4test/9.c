//
// Created by th on 2022/4/15.
//

/*
 * 7-9 猜数字 (10 分)
一群人坐在一起，每人猜一个 100 以内的数，谁的数字最接近大家平均数的一半就赢。本题就要求你找出其中的赢家。

输入格式：
输入在第一行给出一个正整数N（≤10
4
 ）。随后 N 行，每行给出一个玩家的名字（由不超过8个英文字母组成的字符串）和其猜的正整数（≤ 100）。

输出格式：
在一行中顺序输出：大家平均数的一半（只输出整数部分）、赢家的名字，其间以空格分隔。题目保证赢家是唯一的。

输入样例：
7
Bob 35
Amy 28
James 98
Alice 11
Jack 45
Smith 33
Chris 62
输出样例：
22 Amy
 */

#include<stdio.h>
#include "string.h"
struct people {
    char *name;
    int num;
};
int main(){
    freopen("../4test/9.in","r",stdin);
    int len;
    struct people peoples[10001];
    scanf("%d", &len);
    for (int i = 0; i < len; ++i) {
        scanf("%s", peoples[i].name);
        scanf("%d", &peoples[i].num);
    }

    char *searched = strrchr(BeSearched, search);
    if (searched == NULL) {
        printf("Not Found");
    } else {
        printf("index = %d", searched - BeSearched);
    }
}