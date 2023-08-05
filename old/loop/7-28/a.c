#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // freopen("./a.in","r",stdin);
    int count;
    scanf("%d", &count);

    for (int i = -(count - 1) / 2; i <= (count - 1) / 2; i++)
    {
        if (i != -(count - 1) / 2)
            printf("\n");
        for (int ii = 0; ii < abs(i) * 2; ii++)
            printf(" ");
        for (int ii = 0; ii < count - abs(i) * 2; ii++)
            printf("* ");
    }

    return 0;
}