#include <stdio.h>
#include <math.h>
int factorial(int i)
{
    if (i == 1)
        return 1;
    return i * factorial(i - 1);
}
int main()
{
    int sum = 0;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i += 2)
    {
        sum += factorial(i);
    }
    printf("n=%d,s=%d", n, sum);

    return 0;
}