#include <stdio.h>

int main()
{
    // freopen("./a.in", "r", stdin);
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int classSize;
        scanf("%d", &classSize);
        int classz[classSize];
        for (int ii = 0; ii < classSize; ii++)
        {
            int w;
            scanf("%d", &w);
            classz[ii] = w;
        }
        int classSum = 0;
        for (int ii = 0; ii < classSize; ii++)
        {
            classSum += classz[ii];
        }
        double average = classSum / (double)classSize;
        int gtNum = 0, ltNum = 0;
        for (int ii = 0; ii < classSize; ii++)
        {
            if (classz[ii] <= average)
            {
                ltNum += 1;
            }
            else
            {
                gtNum += 1;
            }
        }
        if (i!=0)
        {
            printf("\n");
        }
        
        printf("%02.3lf%%", gtNum / (double)classSize * 100);
    }

    return 0;
}