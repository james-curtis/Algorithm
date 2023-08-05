#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // freopen("./a.in","r",stdin);
    int count;
    scanf("%d", &count);
    if (count % 2 == 0)
    {
        printf("Error");
        return 0;
    }

    for (int i = -(count - 1) / 2; i <= (count - 1) / 2; i++)
    {
        if (i != -(count - 1) / 2)
            printf("\n");
        for (int ii = 0; ii < abs(i); ii++)
            printf(" ");
        for (int ii = 0; ii < count - abs(i) * 2; ii++)
        {
            if (ii == 0)
                printf("*");
            else if (ii == count - abs(i) * 2 - 1)
                printf("*");
            else
                printf(" ");
        }
    }

    return 0;
}