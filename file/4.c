#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int CountWord(FILE *f);

int main()
{
    FILE *f;
    int n;
    f = fopen("Story.txt", "r");
    if (!f)
    {
        puts("文件无法打开!");
        exit(1);
    }

    n = CountWord(f);

    if (fclose(f))
    {
        puts("文件无法关闭!");
        exit(1);
    }

    printf("单词数: %d\n", n);
    return 0;
}

/* 你提交的代码将被嵌在这里 */
int CountWord(FILE *f)
{
    char prev = fgetc(f);
    int cnt = 0;
    for (char ch = fgetc(f); ch != EOF; ch = fgetc(f))
    {
        if (isalpha(prev) && !isalpha(ch))
            cnt++;
        prev = ch;
    }
    if (isalpha(prev))
        cnt++;
    return cnt;
}