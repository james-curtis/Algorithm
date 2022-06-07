#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    // freopen("./a.in","r",stdin);
    for (int i = 0;; i++)
    {
        if (i % 5 == 1 && i % 6 == 5 && i % 7 == 4 && i % 11 == 10)
        {
            printf("%d", i);
            return 0;
        }
    }

    return 0;
}