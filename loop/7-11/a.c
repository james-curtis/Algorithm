#include <stdio.h>
#include <math.h>
int main()
{
    double sum = 0;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        double item = pow(-1, i) * (1.0 / (1 + 3 * i));
        sum += item;
    }
    printf("sum = %.3lf", sum);

    return 0;
}