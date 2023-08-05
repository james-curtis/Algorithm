#include <stdio.h>
#include <math.h>
int factorial(int i)
{
    if (i == 1)
        return 1;
    return i * factorial(i - 1);
}
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
int main()
{
    int sum = 0, cnt = 0;
    int n;
    scanf("%d", &n);
    for (int i = n - 1; i > 0; i--)
    {

        if (isPrime(i))
        {
            /* code */
            printf("%6d", i);
            cnt++;
            if (cnt == 10)
                return 0;
        }
        else
        {
        }
    }

    return 0;
}