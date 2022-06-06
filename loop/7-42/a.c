#include<stdio.h>


int main() {
//    freopen("../loop/7-38/a.in", "r", stdin);
    int head, foot;
    scanf("%d%d", &head, &foot);
    for (int chickens = 0, rabbits = head - chickens; chickens <= head; ++chickens, rabbits = head - chickens) {
        if (2 * chickens + 4 * rabbits == foot) {
            printf("chickens = %d; rabbits = %d", chickens, rabbits);
            return 0;
        }
    }
    printf("No solution!");
    return 0;
}
