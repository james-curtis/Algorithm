#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // freopen("./a.in","r",stdin);
    int count;
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        if (i != 0)
            printf("\n");
        for (int ii = 0; ii < count - i - 1; ii++)
            printf(" ");
        char center = 'A' + i;
        for (int ii = -i; ii <= i; ii++)
            printf("%c", center - abs(ii));
    }

    return 0;
}