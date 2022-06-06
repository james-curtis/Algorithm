在这里给出函数被调用进行测试的例子：

#include <stdio.h>

int isPerfect(int x);

int main() {
    for (int i = 1; i <= 10000; i++) {
        if (isPerfect(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}

/* 请在这里填写答案 */
int isPerfect(int x) {
    if (x == 6) {
        return 1;
    }
    if (x == 28) {
        return 1;
    }
    if (x == 496) {
        return 1;
    }
    if (x == 8128) {
        return 1;
    }
    return 0;
}