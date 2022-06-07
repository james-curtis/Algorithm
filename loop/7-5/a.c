/*#include<stdio.h>
#include<math.h>
int main()
{
    int n,cnt,t=0,z=0,d1,mask,w;
    scanf("%d",&n);
    w=n;
    do
    {
        n=n/10;
        cnt++;
    }while(n>0);
    printf("%d\n",cnt);
    mask=pow(10,cnt-1);
    n=w;
    do
    {
        d1=n/mask;
        printf("%d",d1);
        if(n>9)
            printf(" ");
        n=n%mask;
        mask=mask/10;
    }while(n>0);
    printf("\n");
    n=w;
    do
    {
        z=10*z+t;
        t=n%10;
        n=n/10;
    }while(t>0);
    printf("%d",z);
    return 0;
}*/
#include <stdio.h>
#include <math.h>
int main()
{
    long long n, cnt = 0, d2, mask, w, z = 0, t = 0;
    scanf("%lld", &n);
    w = n;
    do
    {
        n = n / 10;
        cnt++;
    } while (n > 0);
    printf("%d\n", cnt);
    mask = pow(10, cnt - 1);
    n = w;
    do
    {
        d2 = n / mask;
        printf("%d", d2);
        if (mask > 9)
            printf(" ");
        n = n % mask;
        mask = mask / 10;
    } while (mask > 0);
    printf("\n");
    n = w;
    /*do
    {
        m=n%10;
        printf("%d",m);
        n=n/10;
    }while(n>0);*/
    do
    {
        t = n % 10;
        n = n / 10;
        z = 10 * z + t;
    } while (t > 0);
    // for(int i=0;i<cnt;i++){
    //     t = n % 10;
    //     n = n / 10;
    //     z = 10 * z + t;
    // }
    printf("%lld", z);
    return 0;
}