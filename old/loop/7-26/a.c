#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    // freopen("./a.in","r",stdin);
    int count;
    scanf("%d", &count);
    char a;
    scanf(" %c",&a);
    int line;
    int other;
    //判断有多少行
    for (int i = 3;; i += 2)
    {
        if (count < 7)
        {
            line = 1;
            other = count - 1;
            break;
        }
        int lineCount = (i - 1) / 2;
        int topNeed = (3 + i) * lineCount / 2;
        if (topNeed * 2 + 1 > count)
        {
            line = i - 2;
            //所需总数
            other = topNeed * 2 + 1 - i * 2;
            other = count - other;
            break;
        }
    }

    for (int i = 0, topLine = line; i < (line - 1) / 2 + 1; i++, topLine -= 2)
    {
        if (i != 0)
            printf("\n");
        for (int ii = 0; ii < i; ii++)
            printf(" ");
        for (int ii = topLine; ii > 0; ii--)
            printf("%c",a);
    }

    for (int i = (line - 1) / 2, topLine = 3; i > 0; i--, topLine += 2)
    {
        printf("\n");
        for (int ii = 0; ii < i - 1; ii++)
            printf(" ");
        for (int ii = topLine; ii > 0; ii--)
            printf("%c",a);
    }
    printf("\n%d", other);

    return 0;
}