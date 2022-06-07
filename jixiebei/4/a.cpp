#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>

using namespace std;

/**
 * @title 阶乘
 */
int factorial(int i)
{
    if (i == 1)
        return 1;
    return i * factorial(i - 1);
}

/**
 * @title 判断质数
 */
int isPrime(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    int primeFlag = 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            primeFlag = 0;
    }
    if (primeFlag)
        return 1;
    return 0;
}

/**
 * @title 梅森数
 */
void mersenneNumber()
{
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for (int i = 2; i <= n; i++)
    {
        long long item = pow(2, i) - 1;
        if (isPrime(item))
        {
            if (cnt != 0)
            {
                printf("\n");
            }

            printf("%lld", item);
            cnt++;
        }
    }
    if (cnt == 0)
    {
        printf("None");
    }
}

/**
 * @title 求因子
 */
struct data
{
    int arr[500]; //注意会超时
    int length;
};
struct data factor(int n, int isHaveOne, int isHaveHimself)
{
    struct data d;
    d.length = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i == 1 && isHaveOne == 0)
                continue;
            d.arr[d.length] = i;
            d.length++;
            if (n / i == n && isHaveHimself == 0)
                continue;
            d.arr[d.length] = n / i;
            d.length++;
        }
    }

    return d;
}

/**
 * @title 求质因子
 */
struct data d;
struct data primeFactor(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (isPrime(i) == 0)
            {
                primeFactor(i);
            }
            else
            {
                d.arr[d.length] = i;
                d.length++;
            }
            if (n / i == n)
                continue;

            if (isPrime(n / i) == 0)
            {
                primeFactor(n / i);
            }
            else
            {
                d.arr[d.length] = n / i;
                d.length++;
            }
            break;
        }
    }

    return d;
}

/**
 * @title 求质因子
 */
struct data solvePrimeFactor(int n)
{
    d.length = 0;
    primeFactor(n);
    for (int i = 0; i < d.length; i++)
    {
        for (int ii = i; ii < d.length; ii++)
        {
            if (d.arr[i] > d.arr[ii])
            {
                d.arr[i] += d.arr[ii];
                d.arr[ii] = d.arr[ii] - d.arr[ii];
                d.arr[ii] = d.arr[ii] - d.arr[ii];
            }
        }
    }
    printf("%d=", n);
    for (int i = 0; i < d.length; i++)
    {
        if (i != 0)
            printf("*");
        printf("%d", d.arr[i]);
    }

    return d;
}

/**
 * @title 判断水仙花数
 */
int isFlower(int n)
{
    int a = n / 100, b = n / 10 % 10, c = n % 10;
    if (a * a * a + b * b * b + c * c * c == n)
        return 1;
    return 0;
}

/**
 * @title 回文数
 */
void huiwenNumber()
{
    char a[999];
    scanf("%s", a);
    int len = strlen(a);
    int flag = 1;
    for (int i = 0; i < (len - 1) / 2; i++)
    {
        if (a[i] != a[len - 1 - i])
        {
            flag = 0;
        }
    }
    if (flag)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    // freopen("./a.in", "r", stdin);
    int sum = 0;
    int n;
    string filter;
    string str;
    getline(cin, str);
    // scanf("%s", str);
    // scanf("%s", filter);
    getline(cin, filter);
    // cout << str << endl;
    // cout << filter << endl;
    // char filtered[100001];
    // memset(filtered, 0, sizeof filtered);
    string filtered;
    int ai = 0;
    for (int i = 0; i < str.length(); i++)
    {
        int isFind = 0;
        for (int ii = 0; ii < filter.length(); ii++)
        {
            char thisFilterChar = str[i];
            string toSearch;
            toSearch = thisFilterChar;
            if (filter.find(toSearch) != string::npos)
            {
                isFind = 1;
                break;
            }
        }
        if (isFind == 0)
        {
            char aa = str[i];
            string a;
            a = aa;
            filtered.append(a);
            ai++;
        }
    }
    // printf("%s", filtered);
    cout << filtered;

    return 0;
}