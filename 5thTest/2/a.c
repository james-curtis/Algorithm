#include <stdio.h>
void CharSwap(char *pa, char *pb);

int main()
{
    char a, b;
    scanf("%c%c", &a, &b);
    CharSwap(&a, &b); //调用函数CharSwap将2个大写英文字母转换成小写字母并交换位置。
    printf("%c%c\n", a, b);
}

void CharSwap(char *pa, char *pb) //调用函数CharSwap将2个大写英文字母转换成小写字母并交换位置。
{
    char ch;
    ch = *pa + 32;
    *pa = *pb + 32;
    *pb = ch;
}