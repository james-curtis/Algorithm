#include <stdio.h>
#include <string.h>

int s_quart(int n);

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", s_quart(n));

    return 0;

}

int s_quart(int n) {
    int sum = 0;
    char n_str[1111];
    sprintf(n_str, "%d", n);
    for (int i = 0; i < strlen(n_str); ++i) {
        sum += (n_str[i] - '0') * (n_str[i] - '0');
    }
    return sum;
}