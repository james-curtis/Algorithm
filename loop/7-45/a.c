#include<stdio.h>
#include<math.h>
#include <memory.h>


double fact(int a, double *arr, int len) {
    if (arr[a] != 0)return arr[a];
    if (a == 1 || a == 0)return 1;
    double result = a * fact(a - 1, arr, len);
    arr[a] = result;
    return arr[a];
}

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    double factArr[n + 2];
    memset(factArr, 0, sizeof(factArr));
    factArr[1] = 1;
    fact(n, factArr, n + 2);

    double n_m = 1;
    for (int i = m + 1; i <= n; ++i) {
        n_m *= i;
    }

    double b = fact(n - m, factArr, n + 2);
    printf("result = %.0lf", n_m / b);
}