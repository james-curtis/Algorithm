#include<stdio.h>
int add(int x, int y);

int main() {
    int grp, j, i, a, b;
    scanf("%d", &grp);
    for (i = 0; i < grp; i++) {
        scanf("%d%d", &a, &b);
        printf("%d\n", add(a, b));
    }
    return 0;
}

int while_(int sum2,int y) {
    int t = 0;
    do {
        t = y % 10;
        sum2 = sum2 * 10 + t;
        y = y / 10;
    } while (y > 0);
    return sum2;
}

int add(int x, int y) {
    int j, t, sum1 = 0, sum2 = 0, sum = 0, sum3;
    sum1 = while_(sum1, x);
//    do {
//        t = x % 10;
//        sum1 = sum1 * 10 + t;
//        x = x / 10;
//    } while (x > 0);

    sum2 = while_(sum2, y);
//    do {
//        t = y % 10;
//        sum2 = sum2 * 10 + t;
//        y = y / 10;
//    } while (y > 0);
    sum3 = sum1 + sum2;

    sum = while_(sum, sum3);
//    do {
//        t = sum3 % 10;
//        sum = sum * 10 + t;
//        sum3 = sum3 / 10;
//    } while (sum3 > 0);
    return sum;
}
