#include<stdio.h>

int main() {
//    freopen("../loop/7-36/a.in", "r", stdin);
    int i,count=0;
    scanf("%d", &i);

    for (int j = 0; j < i; ++j) {
        if (j != 0) {
            printf("\n");
        }
        int ticket;
        scanf("%d", &ticket);
        int left = ticket / 1000, right = ticket % 1000;
        int leftSum = left / 100 + left / 10 % 10 + left % 10,
                rightSum = right / 100 + right / 10 % 10 + right % 10;
        if (leftSum == rightSum) {
            printf("You are lucky!");
        }else
            printf("Wish you good luck.");
    }
    return 0;
}
