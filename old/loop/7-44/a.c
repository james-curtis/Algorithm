//#include<stdio.h>
//#include <memory.h>
//#include "math.h"
//
////不能过
//int main() {
//    long double scanfIn;
//    scanf("%Lf", &scanfIn);
//
//    long long factorBegin, factorLength = 0;
//    for (long long i = 2; i < sqrtl(scanfIn); ++i) {
//        long long count, tempBegin;
//        for (count = 0, tempBegin = i; ((long long) fmodl(scanfIn, tempBegin)) == 0; count++, tempBegin++) {
//        }
//        if (count > factorLength) {
//            factorLength = count;
//            factorBegin = i;
//        }
//    }
//    if (factorLength == 0) {
//        printf("1\n%.0Lf", scanfIn);
//        return 0;
//    }
//    printf("%d\n", factorLength);
//    long double j = factorBegin;
//    for (long long i = 0; i < factorLength; ++i) {
//        if (i != 0) {
//            printf("*");
//        }
//        printf("%.0Lf", j);
//        j++;
//    }
//    return 0;
//}

#include<stdio.h>
#include<math.h>

int main() {
    int n;
    scanf("%d", &n);
    int n_m = sqrt(n);
    for (int len = 12; len >= 1; len--) {
        for (int begin = 2; begin <= n_m; begin++) {
            unsigned long ans = 1;
            int end;
            for (end = begin; end - begin <= len - 1; end++) {
                ans *= end;
            }
            if (n % ans == 0) {
                printf("%d\n", len);
                int i;
                for (i = begin; i - begin <= len - 2; i++) {
                    printf("%d*", i);
                }
                printf("%d", i);
                return 0;
            }
        }
    }
    printf("1\n%d", n);
}