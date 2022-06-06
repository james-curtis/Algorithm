#include <stdio.h>
#include <math.h>
#include "stdlib.h"
//...(略)...

double Trunc(double x, int d);

int main() {
//    freopen("../fun/6-9-2/a.in", "r", stdin);
    double x;
    int d;
//    147071371.1470713711371
    scanf("%lg%d", &x, &d);
    printf("%g\n", Trunc(x, d));
    return 0;
}

double fun(double a, double b) {
    if (b == 0)return 1;
    if (b == 1)return a;
    return a * fun(a, b - 1);
}

double Trunc(double x, int d) {
    double x_back = x;
    if (d > 0) {
        x_back *= fun(10, d);
        x_back = (long long) (x_back);
        x_back /= fun(10, (float) d);
    } else if (d == 0) {
        return floor(x);
    } else {
        x_back /= fun(10, abs(d));
        x_back = (long long) (x_back);
        x_back *= fun(10, abs(d));
    }
    printf("%g\n", x_back);
    exit(0);
    return x_back;
}

/* 你提交的代码将被嵌在这里 */
