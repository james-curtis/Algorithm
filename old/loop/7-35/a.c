#include<stdio.h>

int main() {
    int i,count=0;
    scanf("%d", &i);

    for (int j = i; j > 0; --j) {
        for (int k = i; k > 0; --k) {
            for (int l = i; l > 0; --l) {
                if (j * 5 + k * 2 + l == i) {
                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", j, k, l, j + k + l);
                    count++;
                }
            }
        }
    }
    printf("count = %d", count);
    return 0;
}
