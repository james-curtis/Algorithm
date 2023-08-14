#include <bits/stdc++.h>

#define int long long
#define ll long long
// #define DEBUG

using namespace std;

struct store
{
    // 价格
    int price;
    // 交易次数
    int times;
};

void solveOne()
{
    int n;
    scanf("%lld", &n);
    vector<store> list;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%lld%lld", &a, &b);
        list.push_back(store{a, b});
    }

    sort(list.begin(), list.end(), [](store a, store b)
         { return a.price < b.price; });

    int res = 0, lowStoreIdx = 0, HighStoreIdx = n - 1;
    for (;;)
    {
        // 尽可能买完低价店，卖给高价店
        int maxOps = min(list[lowStoreIdx].times, list[HighStoreIdx].times);
        res += maxOps * (list[HighStoreIdx].price - list[lowStoreIdx].price);
        list[HighStoreIdx].times -= maxOps;
        list[lowStoreIdx].times -= maxOps;

        if (list[lowStoreIdx].times == 0)
            lowStoreIdx++;
        if (list[HighStoreIdx].times == 0)
            HighStoreIdx--;

        if (lowStoreIdx >= HighStoreIdx)
            break;
    }

    printf("%lld\n", res);
}

signed main()
{
#ifdef DEBUG
    freopen("./in.txt", "r+", stdin);
#endif
    int loop;
    scanf("%lld", &loop);
    while (loop--)
        solveOne();

    return 0;
}