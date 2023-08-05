#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *insert(char *str, char *substr, int n);
char *insert(char *str, char *substr, int n)
{
    int j = 0;
    char *news, *begin;
    news = (char *)malloc(strlen(str) + 2 + strlen(substr));
    begin = news;
    for (int i = 0; i < n; i++)
        //
        *(begin + i) = *(str + i);
    
    while (*substr != 0)
        //
        char * tmp;
        tmp = (char *)malloc(2);strcat(begin, &(*(substr++)));
    // *(++begin) = *(substr++);
    // while (*str != 0)
    //     //
    //     *(begin++) = *(str++);
    strcpy(str, begin);
    //
    *(str + 1) = '\0';
    free(begin);
    return str;
}
int main()
{
    freopen("./a.in", "r", stdin);
    char str[80];
    char substr[80];
    int n;
    gets(str);
    gets(substr);
    scanf("%d", &n);
    printf("%s", insert(str, substr, n));
}