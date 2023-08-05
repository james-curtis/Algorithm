#include <stdio.h>
void reverse_str(char *p);
int main()
{
    freopen("./a.in", "r", stdin);
    char str[80];
    gets(str);
    reverse_str(str);
    return 0;
}
void reverse_str(char *p)
{
    if(*p)
    {
        reverse_str(p+1);
        putchar(*p);
    }
}