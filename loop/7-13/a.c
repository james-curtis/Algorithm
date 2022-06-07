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

/**
 * @title 求因数
 */
struct data
{
    int arr[500];//注意会超时
    int length;
};
struct data factor(int n)
{
    struct data d;
    d.length = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            d.arr[d.length] = i;
            d.length++;
            if (n / i != n)
            {
                d.arr[d.length] = n / i;
                d.length++;
            }
        }
    }

    return d;
}

int main()
{
    int cnt = 0;
    int n;
    struct data d;
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        int sum = 0;
        d = factor(i);
        for (int ii = 0; ii < d.length; ii++)
        {
            sum += d.arr[ii];
        }
        if (sum == i)
        {
            cnt++;
            printf("%6d", i);
        }
    }
    if (cnt == 0)
    {
        printf("NONE");
    }

    return 0;
}