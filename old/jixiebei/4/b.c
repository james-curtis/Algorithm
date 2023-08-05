#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    // freopen("./a.in", "r", stdin);
    char str[100001];
    for (int i = 0;; i++)
    {
        char a = getchar();
        if (a != '\n' && a != EOF)
        {
            str[i] = a;
        }
        else
        {
            str[i] = 0;
            break;
        }
    }

    char filter[100001];
    for (int i = 0;; i++)
    {
        char a = getchar();
        if (a != '\n' && a != EOF)
        {
            filter[i] = a;
        }
        else
        {
            filter[i] = 0;
            break;
        }
    }

    char filtered[strlen(str) + 1];
    int ai = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        int isFind = 0;
        if (strchr(filter, str[i]) != NULL)
            isFind = 1;
        if (isFind == 0)
        {
            filtered[ai] = str[i];
            ai++;
        }
    }
    filtered[ai] = 0;
    printf("%s", filtered);

    return 0;
}