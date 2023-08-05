#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    // freopen("./a.in","r",stdin);
    int day;
    scanf("%d", &day);
    for (double i = 1;; i++)
    {
        double taozi = i;
        if (i == 10)
        {
            double taozi = i;
        }
        for (int ii = 0; ii < day; ii++)
        {
            taozi = taozi / 2 - 1;
            if (taozi < 1)
                break;
            if (taozi == 1 && ii == day - 2)
            {
                printf("%.0lf", i);
                return 0;
            }
        }
    }

    return 0;
}