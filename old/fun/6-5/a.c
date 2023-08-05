#include <stdio.h>
#include "math.h"

int fun(int x,int y);
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", fun(x, y));
    return 0;
}

/* 请在这里填写答案 */
int fun(int x,int y) {
    return (int) pow(x, y);
}