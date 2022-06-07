#include <stdio.h>
#include <string.h>
#include <sys/types.h>

int main()
{
    // freopen("./a.in", "r", stdin);
    int a;
    scanf("%d", &a);
    double sum = 0;
    for (int i = 1, cnt = 0, ii = 0; ii < a; i += 3)
    {
        /* code */
        if (cnt == 0)
        {
            sum += 1.0 / i;
            cnt = 1;
        }
        else
        {
            sum -= 1.0 / i;
            cnt = 0;
        }
    }
    printf("sum = %.3lf", sum);
    return 0;
}