#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    double m, n;
    double sum = 0;
    scanf("%lf%lf", &m, &n);
    for (int i = 0; i < n; i++)
    {
        sum += m;
        m /= 2;
        sum += m;
    }
    sum -= m;
    printf("%.2lf %.2lf", m, sum);
    return 0;
}