#include <stdio.h>
#include <math.h>
#include "string.h"

//...(略)...

double Trunc(double x, int d);

int main() {
    double x;
    int d;
    scanf("%lg%d", &x, &d);
    printf("%g\n", Trunc(x, d));
    return 0;
}

double Trunc(double x, int d) {
    char a[111];
    sprintf(a, "%g", x);
    int endPos = strlen(a) - 1,
            dotPos = strchr(a, '.') - a;

//    printf("%d\n", endPos);
//    printf("%d\n", dotPos);

    if (d > 0) {
        for (int i = endPos; i > dotPos + d; --i) {
            a[i] = '0';
        }
    } else {
        a[dotPos] = 0;
        for (int i = 0, pos = dotPos - 1; i < abs(d); ++i, pos--) {
            a[pos] = '0';
        }
    }
    double r;
    sscanf(a, "%lf", &r);
    return r;
}

/* 你提交的代码将被嵌在这里 */
