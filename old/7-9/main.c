# include <stdio.h>

int fab(int a)
{
    if (a == 1) {
        return 1;
    }
    if (a == 2) {
        return 2;
    }
    return fab(a - 1) + fab(a - 2);
}
int main() {
//    freopen("../7-9/a.in", "r", stdin);
    int a, b, c;
    scanf("%d", &a);
    for (int i=0; i<a;++i) {
        scanf("%d%d", &b, &c);
        if (i != 0) {
            printf("\n");
        }
        printf("%d", fab(c - b));
    }
    return 0;
}