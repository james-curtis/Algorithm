#include<stdio.h>

int main() {
    int m, i, k;
    int cnt = 0, isPrime = 1;
    scanf("%d", &m);
    for (i = m - 1, cnt = 0; i > 1 && cnt < 10; i--) {
        isPrime = 1;
        for (k = 2; k < i - 1; k++) {
            if (i % k == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1) {
            cnt++;
            printf("%6d", i);
        }
    }
    return 0;
}
