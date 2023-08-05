#include<stdio.h>

int main() {
    double open, high, low, close;
    scanf("%lf%lf%lf%lf", &open, &high, &low, &close);
    if (close < open) {
        if (close < open && low < close && high > open)
            printf("BW-Solid with Lower Shadow and Upper Shadow");
        else if (close < open && high > open)
            printf("BW-Solid with Lower Shadow");
        else if (close < open && low < close)
            printf("BW-Solid with Upper Shadow");
        else
            printf("BW-Solid");
    } else if (close > open) {
        if (close > open && low < open && high > close)
            printf("R-Hollow with Lower Shadow and Upper Shadow");
        else if (close > open && high > close)
            printf("R-Hollow with Lower Shadow");
        else if (close > open && low < open)
            printf("R-Hollow with Upper Shadow");
        else
            printf("R-Hollow");
    } else {
        if (close == open && low < open && high > close)
            printf("R-Cross with Lower Shadow and Upper Shadow");
        else if (open == close && high > close)
            printf("R-Cross with Lower Shadow");
        else if (open == close && low < open)
            printf("R-Cross with Upper Shadow");
        else
            printf("R-Cross");
    }
    return 0;
}
