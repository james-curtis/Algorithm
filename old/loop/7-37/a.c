#include<stdio.h>

int main() {
//    freopen("../loop/7-36/a.in", "r", stdin);
    int i, cnt = 0;
    scanf("%d", &i);

    for (int j = i; j <= i + 3; ++j) {
        for (int k = i; k <= i + 3; ++k) {
            for (int l = i; l <= i + 3; ++l) {
                if (j == k || j == l || k == l)
                    continue;
                if (cnt % 6 == 0 && cnt != 0) {
                    printf("\n");
                }
                printf("%d%d%d", j, k, l);
                if (cnt % 6 != 5)
                    printf(" ");

                cnt++;
            }
        }
    }

    return 0;
}
