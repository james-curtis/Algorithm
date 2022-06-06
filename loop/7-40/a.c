#include<stdio.h>

int fat(int i) {
    if (i == 1)return 1;
    return i * fat(i - 1);
}

int main() {
//    freopen("../loop/7-38/a.in", "r", stdin);
    long double eps, sum = 0, last = 0;
    scanf("%Lf", &eps);
    int i;
    for (i = 0;; ++i) {
        if (i == 0) {
            last = 1;
        } else {
            last = 1.0 / fat(i);
        }
        sum += last;
        if (last < eps) {
            ++i;
            break;
        }
    }
    printf("e=%.3Lf,count=%d", sum, i);
    return 0;
}
