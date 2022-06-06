//在这里给出函数被调用进行测试的例子。例如：
#include <stdio.h>
#include "string.h"

int fun(int a, int n);

int main() {

    int a, n;
    scanf("%d %d", &a, &n);
    printf("%d", fun(a, n));

    return 0;

}

/* 请在这里填写答案 */
int fun(int a, int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        char str[100];
        //生成数字
        for (int j = 0; j < i; ++j) {
            str[j] = a + '0';
        }
        str[i] = 0;

        int num = 0;
        sscanf(str, "%d", &num);
        sum += num;
    }
    return sum;
}