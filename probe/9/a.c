#include <stdio.h>

#define MAXS 30

char *search(char *s, char *t);

void ReadString(char s[]) {
    gets(s);
} /* 裁判提供，细节不表 */

int main() {
    freopen("../probe/9/a.in", "r", stdin);
    char s[MAXS], t[MAXS], *pos;

    ReadString(s);
    ReadString(t);
    pos = search(s, t);
    if (pos != NULL)
        printf("%d\n", pos - s);
    else
        printf("-1\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
#include "string.h"
char *search(char *s, char *t) {
    int l = strlen(s);
    int l1 = strlen(t);
    int i, j, w, cnt = 0;
    char *p = NULL;
    if (l < l1)
        return p;
    else {
        for (i = 0; i < l; i++) {
            if (*(s + i) == *t) {
                for (j = 0; j < l1; j++) {
                    if (*(s + i + j) == *(t + j)) {
                        cnt++;
                    } else
                        break;
                }
            }
            if (cnt == l1) {
                p = s + i;
                return p;
                break;
            }
        }
    }
    return p;
}
