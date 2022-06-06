//
// Created by th on 2022/4/2.
//
#include "stdio.h"
#include "string.h"
#include "ctype.h"

int main() {
//    freopen("../7-8/a.in", "r", stdin);
    char a[100];
    memset(a, 0, sizeof(a));
    scanf("%s", &a);
    char one;
    int sum = 0;
    for (int ii = 0; sscanf(a + ii, "%c", &one) != EOF; ++ii) {
        sum += one - '0';
    }
    printf("%d", sum);
    return 0;

}
