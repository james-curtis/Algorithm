#include <stdio.h>
#include <stdlib.h>

void ReadArticle(FILE *f);

int main()
{
    FILE *f;
    f = fopen("../c.in", "r");
    if (!f)
    {
        puts("文件无法打开!");
        exit(1);
    }

    ReadArticle(f);

    if (fclose(f))
    {
        puts("文件无法关闭!");
        exit(1);
    }
    return 0;
}

/* 你提交的代码将被嵌在这里 */
void ReadArticle(FILE *f)
{
    for (char ch = fgetc(f); ch != EOF; ch = fgetc(f))
    {
        putchar(ch);
    }
}