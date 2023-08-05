#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    // freopen("./a.in","r",stdin);
    int count;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        for (int ii = 0; ii < count - i - 1; ii++)
            printf(" ");
        for (int ii = 0; ii < 2 * i + 1; ii++)
            printf("*");
        printf("\n");
    }

    return 0;
}