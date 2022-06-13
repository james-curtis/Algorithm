#include<stdio.h>
#include<string.h>

int main() {
    freopen("../c.in", "r", stdin);
    int n, i, j;
    scanf("%d", &n);
    char aim[3] = {'A', 'T', 'P'};
    char chuan[n][80];
    getchar();
    for (i = 0; i < n; i++) {
//        chuan[i] = fgets(NULL,80, stdout);
//        scanf("%s", &chuan[i]);
        gets(chuan[i]);
    }
    for (i = 0; i < n; i++) {
        int len = strlen(chuan[i]);
        if (chuan[i][len - 1] != '?') {
            printf("enen\n");
        } else {
            for (j = len - 2; j >= 0; j--) {
                if (chuan[i][j] == aim[0] && chuan[i][j - 1] == aim[1] && chuan[i][j - 2] == aim[2]) {
                    printf("Yes!\n");
                }
            }
            if (j == -1) {
                printf("No.\n");
            }
        }
    }
    return 0;
}
