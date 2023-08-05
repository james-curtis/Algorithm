//
// Created by th on 2022/4/2.
//
#include "stdio.h"
#include "string.h"
#include "ctype.h"

void output(char *str, int len) {
    if (!len)return;
    printf("%c", *(str + len - 1));
    output(str, --len);
}

int main() {
//    freopen("../7-8/a.in", "r", stdin);
    char a[100];
    memset(a, 0, sizeof(a));
    scanf("%s", &a);
    output(a, (int)strlen(a));
    return 0;

}
