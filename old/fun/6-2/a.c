#include <stdio.h>
#include "string.h"
#include "math.h"

int Count_Digit ( const int N );

int main()
{

    int N;

    scanf("%d", &N);

    printf("%d", Count_Digit(N));

    return 0;

}

/* 请在这里填写答案 */

int Count_Digit(const int N) {
    int sum = 0;
    char n_str[111];
    sprintf(n_str, "%d", abs(N));
    for (int i = 0; i < strlen(n_str); ++i) {
        if ((n_str[i] - '0') % 2 == 1) {
            sum += n_str[i] - '0';
        }
    }
    return sum;
}