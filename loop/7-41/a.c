#include <stdio.h>
int main()
{
    freopen("./a.in", "r", stdin);
    int n, N, cai, i, j;
    scanf("%d %d", &n, &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &cai);
        if (cai > 0 && cai > n && i != N - 1)
        {
            printf("Too big");
            printf("\n");
        }
        if (cai > 0 && cai < n && i != N - 1)
        {
            printf("Too small");
            printf("\n");
        }
        if (cai == n && i == 0)
        {
            printf("Bingo!");
            break;
        }
        if (cai == n && i > 0 && i <= 2)
        {
            printf("Lucky You!");
            break;
        }
        if (cai == n && i > 2 && i < N)
        {
            printf("Good Guess!");
            break;
        }
        if (cai < 0)
        {
            printf("Game Over");
            break;
        }
        if (cai != n && i == N - 1)
        {
            printf("Game Over");
            break;
        }
    }
    return 0;
}