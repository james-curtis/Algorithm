#include<stdio.h>
#include <string.h>

int sort(int aa, int asc) {
    char a[10];
    sprintf(a, "%d", aa);
    for (int i = 0; i < strlen(a); ++i) {
        for (int j = i + 1; j < strlen(a); ++j) {
            if ((asc == 1 && a[i] > a[j]) || (asc == 0 && a[i] < a[j])) {
                a[i] += a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    }
    int r;
    sscanf(a, "%d", &r);
    return r;
}

int main() {
//    freopen("../loop/7-38/a.in", "r", stdin);
    int result;
    scanf("%d", &result);
    for (int i = 0;; ++i) {
        if (i != 0) {
            printf("\n");
        }
        int min = sort(result, 1),
                max = sort(result, 0);
        result = max - min;
        printf("%04d-%04d=%04d", max, min, result);
        if (result == 6174) {
            break;
        }
    }
    return 0;
}
