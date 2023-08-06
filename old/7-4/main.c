//
// Created by th on 2022/4/2.
//
#include "stdio.h"

int gcd(int a, int b)
{
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}

int main()
{
    freopen("main.in", "r", stdin);
    int a, b;
    scanf("%d%d", &a, &b);
    int gcdNum;
    gcdNum = gcd(a, b);
    printf("%d", gcdNum);
    return 0;
}
