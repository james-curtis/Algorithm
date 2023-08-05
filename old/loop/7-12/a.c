#include <stdio.h>
#include <math.h>

/**
 * @title 阶乘
 */
int factorial(int i)
{
    if (i == 1)
        return 1;
    return i * factorial(i - 1);
}

/**
 * @title 判断质数
 */
int isPrime(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    int primeFlag = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            primeFlag = 0;
    }
    if (primeFlag)
        return 1;
    return 0;
}

/**
 * @title 梅森数
 */
void mersenneNumber()
{
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for (int i = 2; i <= n; i++)
    {
        long long item = pow(2, i) - 1;
        if (isPrime(item))
        {
            if (cnt != 0)
            {
                printf("\n");
            }

            printf("%lld", item);
            cnt++;
        }
    }
    if (cnt == 0)
    {
        printf("None");
    }
}


int main()
{
    mersenneNumber();
    return 0;

    int sum = 0, cnt = 0;
    int n;
    char a = 'A';
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        if (i != n)
        {
            printf("\n");
        }

        for (int ii = 0; ii < i; ii++, cnt++)
        {
            printf("%c ", a + cnt);
        }
    }

    return 0;
}