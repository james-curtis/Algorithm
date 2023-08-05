#include<stdio.h>

int main() {
    double open, high, low, close;
    scanf("%lf%lf%lf%lf", &open, &high, &low, &close);
    if (close < open)
        printf("BW-Solid");
    if (close < open && low < close)
        printf("BW-Solid with Lower Shadow");
    if (close < open && high > open)
        printf("BW-Solid with Lower Shadow and Upper Shadow");
    if (close > open)
        printf("R-Hollow");
    if (close > open && low < open)
        printf("R-Hollow with Lower Shadow");
    if (close > open && high > close)
        printf("R-Hollow with Lower Shadow and Upper Shadow");
    if (open == close)
        printf("R-Cross");
    if (close == open && low < open)
        printf("R-Cross with Lower Shadow");
    if (close == open && high > close)
        printf("R-Cross with Lower Shadow and Upper Shadow");

    return 0;
}
