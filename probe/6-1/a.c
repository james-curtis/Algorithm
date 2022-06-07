#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift(char s[]);

void GetString(char s[]); /* 实现细节在此不表 */

int main()
{
    char s[MAXS];

    scanf("%s",s);
    Shift(s);
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
void Shift(char s[])
{
    int max=0;
    for (int i = 0; i < MAXS; i++)
    {
        /* code */
        if (s[i]==0)
        {
            /* code */
            max=i;
            break;
        }
        
    }
    
    for (int i = 0; i < 3; i++)
    {
        s[max - 1 - i] += s[i];
        s[i] = s[max - 1 - i] - s[i];
        s[max - 1 - i] = s[max - 1 - i] - s[i];
    }
}
