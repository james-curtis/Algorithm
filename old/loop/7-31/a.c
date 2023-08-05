#include <stdio.h>
#include <math.h>
#include <string.h>

// long double fabArr[1002] = {0, 1, 2};

double fab(int i)
{
    double a = pow((sqrt(5) - 3) / 2.0, i + 1);
    return 0.5 * (1 + sqrt(5) - (1 - sqrt(5)) * a) / (1 - a);
}

int main()
{
    // freopen("./a.in","r",stdin);
    int count;
    scanf("%d", &count);

    double sum = 0;
    for (int i = 0; i < count; i++)
    {
        sum += fab(i + 1);
    }
    printf("sum=%.4lf", sum);

    return 0;
}