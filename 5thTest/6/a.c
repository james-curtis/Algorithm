#include <stdio.h>
#include <string.h>

void MyStrcpy(char *dstStr, const char *srcStr);

int main(void)
{
    char srcStr[100], detStr[100];

    printf("please input string :");
    gets(srcStr);
    MyStrcpy(detStr, srcStr);
    printf("copied string is:");
    puts(detStr);

    return 0;
}

void MyStrcpy(char *dstStr, const char *srcStr)
{
    while (*srcStr != '\0')
    {
        *dstStr = *srcStr;
        srcStr++;
        dstStr++;
    }
    *(dstStr + 1) = '\0';
}