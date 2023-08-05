#include <stdio.h>
int main(void)
{
    freopen("./a.in", "r", stdin);

    int a[10], max, *p;
    for (p = a; p - a < 10; p++)
        scanf("%d", p);
    max = *a;
    for (p = a + 1; p - a < 10; p++)
    {
        if (*p > max)
            max = *p;
    }
    printf("max=%d\n", max);
    return 0;
}
