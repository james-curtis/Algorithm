#include <stdio.h>

int main()
{
    // freopen("./5.in", "r", stdin);
    int n, max;
    int arr[51];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        arr[i] = a;
    }
    for (int i = 0; i < n; i++)
    {
        for (int ii = i; ii < n; ii++)
        {
            if (arr[i] < arr[ii])
            {
                arr[i] = arr[i] + arr[ii];
                arr[ii] = arr[i] - arr[ii];
                arr[i] = arr[i] - arr[ii];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i != 0)
        {
            printf(" ");
        }

        printf("%d", arr[i]);
    }
    return 0;
}