#include <stdio.h>

int main()
{
    // freopen("./a.in", "r", stdin);
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    int arrBack[n + 1];
    for (int i = 1; i <= n; i++)
    {
        int a;
        scanf("%d", &a);
        arr[i] = a;
        arrBack[i] = a;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int ii = i; ii <= n; ii++)
        {
            if (arr[i] < arr[ii])
            {
                arr[i] = arr[i] + arr[ii];
                arr[ii] = arr[i] - arr[ii];
                arr[i] = arr[i] - arr[ii];
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (arrBack[i] == arr[1])
        {
            //测试数据搞两个一样的，就输出了两遍。。。。
            /* code */
            printf("%d", i);
            break;
        }
    }
    // printf("min = %d", arr[0]);
    return 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (i != 0)
    //     {
    //         printf(" ");
    //     }

    //     printf("%d", arr[i]);
    // }
    // return 0;
}