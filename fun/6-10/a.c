#include<stdio.h>
#include<math.h>

int prime(int n);

int main() {
    int i, m, n;
    scanf("%d %d", &m, &n);
    for (i = m; i <= n; i++) {
        if (prime(i))
            printf("%d ", i);
    }
    return 0;
}

/* 请在这里填写答案 */
int arr[10000];
int init = 0;
int prime(int n) {
    if (n <= 1)
        return 0;
    if (init == 0) {
        arr[1] = 0;
        arr[2] = 1;
        for (int i = 2; i < 1000; ++i) {
            if (arr[i] == 1) {
                for (int j = 0; j < 1000; ++j) {
                    
                }
            }
        }
    }
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}