#include <stdio.h>
#include <math.h>
#include <string.h>

int is3721num(int i)
{
    if (i % 3 == 2 && i % 7 == 1)
        return 1;
    return 0;
}

int main()
{
    // freopen("./a.in","r",stdin);
    int count;
    scanf("%d", &count);
    for (int i = 0, ptrCount = 0; i < count; i++, ptrCount = 0)
    {
        if (i != 0)
            printf("\n");
        int left, right;
        scanf("%d%d", &left, &right);
        for (int ii = left; ii <= right; ii++)
        {
            if (is3721num(ii))
            {
                if (ptrCount != 0)
                    printf(" ");
                ptrCount++;
                printf("%d", ii);
            }
        }
        if (ptrCount == 0)
            printf("none");
    }

    return 0;
}