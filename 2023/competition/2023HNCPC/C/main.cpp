#include <bits/stdc++.h>

#define int long long
#define ll long long
#define DEBUG

using namespace std;
/**
 * 假设所有人都有邻居
 */
void solveOne()
{
    // 人数，房子
    int n, m;
    scanf("%lld%lld", &n, &m);
    vector<pair<int, int>> scoreList;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%lld%lld", &a, &b);
        scoreList.push_back(make_pair(a, b));
    }

    vector<int> bSubA;
    for (int i = 0; i < n; i++)
        bSubA.push_back(scoreList[i].second - scoreList[i].first);
    sort(bSubA.begin(), bSubA.end());
    reverse(bSubA.begin(), bSubA.end());

    // printf("%lld\n", bSubA[0]);

    // 假设所有人都有邻居
    int cursorScore = 0;
    for (int i = 0; i < n; i++)
    {
        cursorScore += scoreList[i].first;
    }
    int res = cursorScore;

    // 所有人无邻居 特殊
    if (n * 2 - 1 <= m)
    {
        int allNotScore = 0;
        for (int i = 0; i < n; i++)
            allNotScore += scoreList[i].second;
        res = max(cursorScore, allNotScore);
    }

    // 如果 现在 i 人没邻居
    for (int i = 1; i < n - 1; i++)
    {
        // 先判断房子够不够
        if (!(i * 2 + (n - i) <= m))
            // 房子不够了
            break;

        // 如果房子够的话，可以再用一个房间
        cursorScore += bSubA[i - 1];
        res = max(res, cursorScore);
    }

    printf("%lld\n", res);
}

/**
 * 假设所有人无邻居
 */
void solveOne2()
{
    // 人数，房子
    int n, m;
    scanf("%lld%lld", &n, &m);
    vector<pair<int, int>> scoreList;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%lld%lld", &a, &b);
        scoreList.push_back({a, b});
    }

    vector<int> delta;
    for (int i = 0; i < n; i++)
        delta.push_back(0 - scoreList[i].second + scoreList[i].first);
    sort(delta.begin(), delta.end());
    reverse(delta.begin(), delta.end());

    // 假设所有人都无邻居
    int cursorScore = 0;
    for (int i = 0; i < n; i++)
        cursorScore += scoreList[i].second;
    int res = 0;

    // 房子足够的情况下，所有人无邻居
    if (m >= 2 * n - 1)
        res = cursorScore;

    // 保证for里面至少有一人邻居
    cursorScore += delta[0];
    for (int i = 2; i <= n; i++)
    {
        // 如果 现在 i 人有邻居，i>1
        cursorScore += delta[i - 1];

        // 判断房子够不够
        if (n * 2 - i > m)
            continue;
        res = max(res, cursorScore);
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
        solveOne2();

    return 0;
}