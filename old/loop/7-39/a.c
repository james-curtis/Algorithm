#include<stdio.h>

int main() {
//    freopen("../loop/7-38/a.in", "r", stdin);
    int n, u, d, cnt = 0;
    scanf("%d%d%d", &n, &u, &d);

    for (int i = 1, sum = 0;; i += 2, sum = 0) {
        sum += ((i + 1) / 2) * u;
        sum -= ((i - 1) / 2) * d;
        if (sum >= n) {
            printf("%d", i);
            return 0;
        }
    }

    return 0;
}
