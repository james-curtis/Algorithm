#include <stdio.h>
#include <string.h>
#include <sys/types.h>

int main()
{
    // freopen("./a.in", "r", stdin);
    int m;
    scanf("%d", &m);
    long long sum = 0;
    int i;
    for (i = 1; sum <= m; i++)
    {
        sum += i;
    }
    printf("%d", --i);
    return 0;
}