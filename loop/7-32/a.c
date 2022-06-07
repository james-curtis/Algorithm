#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    // freopen("./a.in","r",stdin);
    int day;
    scanf("%d", &day);
    int sum = 0;
    int count = 0;
    for (int i = 1;; i++)
    {
        for (int ii = 0; ii < i; ii++)
        {
            if (count == day)
            {
                printf("%d", sum);
                return 0;
            }
            sum += i;
            count++;
        }
    }

    return 0;
}