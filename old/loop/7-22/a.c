#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    // freopen("./a.in","r",stdin);
    int n;
    scanf("%d", &n);

    for (int i = 0;; i++)
    {
        if (i != 0)
            printf("\n");

        if (n == 1)
            return 0;
        if (n % 2 == 0)
        {
            printf("%d/2=%d", n, n / 2);
            n /= 2;
        }
        else
        {
            printf("%d*3+1=%d", n, n * 3 + 1);
            n = n * 3 + 1;
        }
    }

    return 0;
}