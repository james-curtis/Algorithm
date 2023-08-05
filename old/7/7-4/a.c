#include <stdio.h>
#include <string.h>
#include <sys/types.h>

int main()
{
    // freopen("./a.in", "r", stdin);
    int m;
    scanf("%d", &m);
    long long sum = 0;
    for (int i = 1,j=0; sum <= m; i+=3,j++)
    {
        sum += i;
    }
    printf("%d", --i);
    return 0;
}