#include <stdio.h>
void reverse(int a[], int size)
{
    int reverseArr[size + 1];
    for (int i = 0; i < size; i++)
    {
        reverseArr[i] = a[size - 1 - i];
    }
    for (int i = 0; i < size; i++)
    {
        a[i] = reverseArr[i];
    }
}

int main()
{
    // freopen("./4.in", "r", stdin);
    int n, size;
    scanf("%d%d", &n, &size);
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        arr[i] = a;
    }
    reverse(arr, size);
    for (int i = 0; i < n; i++)
    {
        // if (i != 0)
        // {
        //     printf(" ");
        // }

        printf("%d ", arr[i]);
    }
    return 0;
}