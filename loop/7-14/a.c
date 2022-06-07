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
    if (n>=1)
    {
        printf("1*1=1   \n");
    }
    if (n>=2)
    {
        printf("1*2=2   2*2=4   \n");
    }
    if (n>=3)
    {
        printf("1*3=3   2*3=6   3*3=9   \n");
    }
    if (n>=4)
    {
        printf("1*4=4   2*4=8   3*4=12  4*4=16  \n");
    }
    if (n>=5)
    {
        printf("1*5=5   2*5=10  3*5=15  4*5=20  5*5=25  \n");
    }
    if (n>=6)
    {
        printf("1*6=6   2*6=12  3*6=18  4*6=24  5*6=30  6*6=36  \n");
    }
    if (n>=7)
    {
        printf("1*7=7   2*7=14  3*7=21  4*7=28  5*7=35  6*7=42  7*7=49  \n");
    }
    if (n>=8)
    {
        printf("1*8=8   2*8=16  3*8=24  4*8=32  5*8=40  6*8=48  7*8=56  8*8=64  \n");
    }
    if (n>=9)
    {
        printf("1*9=9   2*9=18  3*9=27  4*9=36  5*9=45  6*9=54  7*9=63  8*9=72  9*9=81  \n");
    }
    

    return 0;
}