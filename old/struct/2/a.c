#include "stdio.h"
#include "string.h"

struct stu
{
    char idCard[17];
    int machineCard;
    int setCard;
};

int main()
{
    freopen("./a.in", "r", stdin);
    double a1, a2;
    double b1, b2;
    scanf("%lf %lf %lf %lf", &a1, &b1, &a2, &b2);

    // 加法
    printf("(%.1lf+%.1lfi) + (%.1lf+%.1lfi) = ", a1, b1, a2, b2);
    if (a1 + a2 == 0 && b1 + b2 == 0)
    {
        printf("0.0");
    }
    else
    {

        if (a1 + a2 != 0)
            printf("%.1lf", a1 + a2);
        if (b1 + b2 != 0)
            printf("%.1lfi", b1 + b2);
    }
    printf("\n");

    // 减法
    printf("(%.1lf+%.1lfi) - (%.1lf+%.1lfi) = ", a1, b1, a2, b2);
    if (a1 - a2 == 0 && b1 - b2 == 0)
    {
        printf("0.0");
    }
    else
    {
        if (a1 - a2 != 0)
            printf("%.1lf", a1 + a2);
        if (b1 + b2 != 0)
            printf("%.1lfi", b1 + b2);
    }
    printf("\n");

    // 乘法
    printf("(%.1lf+%.1lfi) * (%.1lf+%.1lfi) = ", a1, b1, a2, b2);
    double aa = a1 * a2 - b1 * b2;
    double bb = a1 * b2 + a2 * b1;
    if (aa == 0 && bb == 0)
    {
        printf("0.0");
    }
    else
    {
        if (aa != 0)
            printf("%.1lf", aa);
        if (b1 + b2 != 0)
            printf("%.1lfi", bb);
    }
    printf("\n");

    // 除法
    printf("(%.1lf+%.1lfi) / (%.1lf+%.1lfi) = ", a1, b1, a2, b2);
    //(a1+b1)*(a2-b2)
    aa = a1 * a2 + b1 * b2;
    bb = a2 * b1 - a1 * b2;
    // a2^2-b2^2
    double bottom = a2 * a2 - b2 * b2;
    aa /= bottom;
    bb /= bottom;
    if (aa == 0 && bb == 0)
    {
        printf("0.0");
    }
    else
    {
        if (aa != 0)
            printf("%.1lf", aa);
        if (b1 + b2 != 0)
            printf("%.1lfi", bb);
    }
}