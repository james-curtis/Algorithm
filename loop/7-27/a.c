#include <stdio.h>
int main()
{
    int t1,
        // 循环变量
        i,
        j,
        // 比赛时间
        t,
        // 乌龟的路程
        s1, 
        // 兔子的路程
        s2;
    scanf("%d", &t);
    s1 = 3 * t;
    if (t > 0 && t <= 90)
    {
        for (i = 0; i <= t / 40; i++)
        {
            if ((t % 100 / 10) % 4 == 0)
            {
                j = t % 10;
                s2 = 90 * i + 9 * j;
            }
            else
            {
                s2 = 90 + 90 * i;
            }
        }
    }
    if (t > 90)
    {
        for (i = 0; i <= t / 40; i++)
        {
            if ((t % 100 / 10) % 9 == 0 && t % 100 / 10 != 0)
            {
                j = t % 10;
                s2 = 90 * i + 9 * j + 90;
            }
            else
            {
                s2 = 180 + 90 * i;
            }
        }
    }
    if (s2 > s1)
    {
        printf("^_^");
        printf(" %d", s2);
    }
    if (s2 < s1)
    {
        printf("@_@");
        printf(" %d", s1);
    }
    if (s2 == s1)
    {
        printf("-_-");
        printf(" %d", s1);
    }
    return 0;
}