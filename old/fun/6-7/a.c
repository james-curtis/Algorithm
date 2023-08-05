#include <stdio.h>

#define Cube(x) ((x)*(x)*(x))

int IsNarc(int x);

int main() {
    int x;
    scanf("%d", &x);
    if (IsNarc(x)) {
        puts("Yes");
    } else {
        puts("No");
    }
    return 0;
}

/* 你提交的代码将被嵌在这里 */
int IsNarc(int x) {
    int a = x / 100,
            b = x / 10 % 10,
            c = x % 10;
    if (x > 999 || x < 100)
        return 0;
    if (Cube(a) + Cube(b) + Cube(c) == x) {
        return 1;
    }
    return 0;
}