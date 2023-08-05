abcabd
#include <stdio.h>
#include <string.h>
#include <sys/types.h>

int main()
{
    // freopen("./a.in", "r", stdin);
    int size = 100001;
    char n[size];
    int alpha[26] = {0};
    int alphaPos[26];
    memset(alphaPos, -1, sizeof(alphaPos));
    scanf("%s", n);
    for (int i = 0; n[i] != '\0'; i++)
    {
        alpha[n[i] - 'a'] += 1;
    }
    for (int i = 0; n[i] != '\0'; i++)
    {
        if (alpha[n[i] - 'a'] == 1)
        {
            char *pos = strchr(n, n[i]);
            alphaPos[n[i] - 'a'] = pos - n;
        }
    }
    int find = -1;
    for (int i = 0; n[i] != '\0'; i++)
    {
        if (alphaPos[i] != -1)
        {
            printf("%c", 'a' + i);
            find = 1;
            break;
        }
    }
    if (find == -1)
    {
        printf("no");
    }

    return 0;
}