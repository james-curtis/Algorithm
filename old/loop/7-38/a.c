#include<stdio.h>
#include "string.h"

char *mora(char *a) {
    if (strcmp(a, "ChuiZi") == 0) {
        return "Bu";
    } else if (strcmp(a, "Bu") == 0) {
        return "JianDao";
    }
    return "ChuiZi";
}

int main() {
//    freopen("../loop/7-38/a.in", "r", stdin);
    int i, cnt = 0;
    scanf("%d", &i);
    char mora_[100];
    while (scanf("%s", mora_) != EOF) {
        if (strcmp(mora_, "End") == 0) {
            return 0;
        }
        if (cnt != 0) {
            printf("\n");
        }
        if (cnt % (i + 1) != i) {
            printf("%s", mora(mora_));
        } else {
//            平局
            printf("%s", mora_);
        }
        cnt++;
    }

    return 0;
}
