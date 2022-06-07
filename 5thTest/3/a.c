#include <stdio.h>
void sort(int (*a)[4]);
int main()
{
    freopen("./a.in", "r", stdin);
    int a[3][4], i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", *(a + i) + j);
    for (i = 0; i < 3; i++)
        sort(a + i);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%5d", *(*(a + i) + j));
        printf("\n");
    }
    return 0;
}

void sort(int (*a)[4])
{
    int i, j, k, tmp;
    for (i = 0; i < 3; i++)
    {
        k = i;
        for (j = i + 1; j < 4; j++)
        {
            if (*(*a + k) > *(*a + j))
                k = j;
        }
        if (k != i)
        {
            tmp = *(*a + i);
            *(*a + i) = *(*a + k);
            *(*a + k) = tmp;
        }
    }
}