
#include <stdio.h>

double fun(int m);

int main() {

    int n;

    scanf("%d", &n);

    printf(" %f\n", fun(n));

    return 0;

}

/* 请在这里填写答案 */
double fun(int m) {
    double sum = 0;
    for (int i = 2; i < m+3; ++i) {
        sum += 1.0 / i;
    }
    return sum;
}