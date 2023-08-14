#include <bits/stdc++.h>
#define MAXN ((int)5e5)
using namespace std;

int n, m, A[MAXN + 10], B[MAXN + 10];

void solve()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        scanf("%d%d", &A[i], &B[i]);

    // 将 (A[i] - B[i]) 排序，vector 里存的是从小到大的顺序
    vector<int> vec;
    for (int i = 1; i <= n; i++)
        vec.push_back(A[i] - B[i]);
    sort(vec.begin(), vec.end());

    long long ans = 0, now = 0;
    for (int i = 1; i <= n; i++)
        now += B[i];
    // 特殊情况：所有人都没有邻居
    if (m >= 2 * n - 1)
        ans = now;

    now += vec[n - 1];
    for (int i = 2; i <= n; i++)
    {
        // 计算有 i 个人有邻居时的最大总满意度
        now += vec[n - i];
        if (2 * n - i <= m)
            ans = max(ans, now);
    }
    printf("%lld\n", ans);
}

int main()
{
    freopen("./in.txt", "r+", stdin);
    int tcase;
    scanf("%d", &tcase);
    while (tcase--)
        solve();
    return 0;
}
