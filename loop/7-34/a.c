#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    // freopen("./a.in","r",stdin);
    int cnt;
    scanf("%d", &cnt);

    for (int i = 0; i < cnt; i++)
    {
        int flag = 1;
        int in;
        scanf("%d", &in);
        int global_sum = 0;
        for (int i = 2; i < 10; i++)
        {
            char in_char[100];
            sprintf(in_char, "%d", in * i);
            int sum = 0;
            for (int i = 0; i < strlen(in_char); i++)
            {
                sum += in_char[i] - '0';
            }
            if (i == 2)
                global_sum = sum;
            if (global_sum != sum)
            {
                flag = 0;
                break;
            }
        }
        if (i != 0)
            printf("\n");
        if (flag == 1)
            printf("%d", global_sum);
        else
            printf("NO");
    }

    return 0;
}