#include <stdio.h>

#define MAXS 10

char *match(char *s, char ch1, char ch2);

int main() {
    freopen("../c.in", "r", stdin);
    char str[MAXS], ch_start, ch_end, *p;

    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}

/* 你的代码将被嵌在这里 */

#include <string.h>

char *match(char *s, char ch1, char ch2) {
    char *begin = strchr(s, ch1);
    if (begin == NULL) {
        begin = "";
        printf("\n");
        return begin;
    }
    char *end = strchr(begin, ch2);
    if (end == NULL)end = s + strlen(s) - 1;
    for (char *item = begin; item != end; item++) {
        putchar(*item);
    }
    putchar(*end);
    printf("\n");
    return begin;
}