#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    // freopen("./a.in","r",stdin);
    int a;
    scanf("%d", &a);
    char aa[10000];
    sprintf(aa, "%d", a);
    for (int i = 0; i < strlen(aa); i++)
    {
        if (i != 0)
            printf(" ");
        switch (aa[i])
        {
        case '-':
            printf("fu");
            break;
        case '0':
            printf("ling");
            break;
        case '1':
            printf("yi");
            break;
        case '2':
            printf("er");
            break;
        case '3':
            printf("san");
            break;
        case '4':
            printf("si");
            break;
        case '5':
            printf("wu");
            break;
        case '6':
            printf("liu");
            break;
        case '7':
            printf("qi");
            break;
        case '8':
            printf("ba");
            break;
        case '9':
            printf("jiu");
            break;
        }
    }

    return 0;
}