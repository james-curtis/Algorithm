#include <stdio.h>
#include "string.h"

void hollowPyramid(int n);

int main() {
    int n;

    scanf("%d", &n);
    hollowPyramid(n);

    return 0;
}

/* 你的代码将被嵌在这里 */
void hollowPyramid(int n) {
    for (int i = 0; i < n; ++i) {
        if (i != 0)printf("\n");
        if (i == 0) {
            char format[100] = "%0d";
            format[1] = n + '0';
            printf(format, 1);
        } else if (i == n - 1)
            for (int j = 0; j < i + n; ++j)
                printf("%d", n);
        else {
            char format[100] = "%";
            char format1[111];
            sprintf(format1, "%d", n - i);
            strcat(format, format1);
            strcat(format, "d%");
            sprintf(format1, "%d", 2 * i);
            strcat(format, format1);
            strcat(format, "d");
            printf(format, i + 1, i + 1);
        }
    }
}