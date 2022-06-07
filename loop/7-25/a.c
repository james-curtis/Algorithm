#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    // freopen("./a.in","r",stdin);
    int hour, min;
    scanf("%d:%d", &hour, &min);
    if ((hour >= 0 && hour <= 11) || (hour == 12 && min == 0))
        printf("Only %02d:%02d.  Too early to Dang.", hour, min);

    if (min == 0)
    {
        for (int i = 0; i < hour - 12; i++)
            printf("Dang");
    }
    else
    {
        for (int i = 0; i < hour + 1 - 12; i++)
            printf("Dang");
    }

    return 0;
}