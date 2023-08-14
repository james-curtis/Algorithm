#include <bits/stdc++.h>

#define int long long
#define ll long long
#define DEBUG

using namespace std;

bool up(vector<vector<int>> &map, int n, int m, int x, int y)
{
    if (map[x - 1][y] == 1 &&
        map[x - 2][y] == 1 && (x - 2 <= 1))
    {
        map[x][y] = 0;
        map[x - 1][y] = 0;
        map[x - 2][y] = 1;
        return true;
    }
    return false;
}

bool down(vector<vector<int>> &map, int n, int m, int x, int y)
{
    int cursorIdxX = x,
        downIdxX = x + 1,
        down2IdxX = x + 2;
    if (map[downIdxX][y] == 1 &&
        map[down2IdxX][y] == 0 && (down2IdxX <= n))
    {
        map[x][y] = 0;
        map[downIdxX][y] = 0;
        map[down2IdxX][y] = 1;
        return true;
    }
    return false;
}

bool left(vector<vector<int>> &map, int n, int m, int x, int y)
{
    int cursorIdx = y,
        leftIdx = y - 1,
        left2Idx = y - 2;
    if (map[x][leftIdx] == 1 &&
        map[x][left2Idx] == 0 && (left2Idx >= 1))
    {
        map[x][y] = 0;
        map[leftIdx][y] = 0;
        map[left2Idx][y] = 1;
        return true;
    }
    return false;
}

bool right(vector<vector<int>> &map, int n, int m, int x, int y)
{
    int cursorIdx = y,
        rightIdx = y + 1,
        right2Idx = y + 2;
    if (map[x][rightIdx] == 1 &&
        map[x][right2Idx] == 0 && (right2Idx <= m))
    {
        map[x][y] = 0;
        map[rightIdx][y] = 0;
        map[right2Idx][y] = 1;
        return true;
    }
    return false;
}

vector<vector<int>> walk(vector<vector<int>> map, int n, int m)
{
    bool isChange = false;
    for (int x = 1; x <= n; x++)
    {
        for (int y = 1; y <= m; y++)
        {
            if (map[x][y] == 0)
                continue;
            if (up(map, n, m, x, y))
                isChange = true;
            if (down(map, n, m, x, y))
                isChange = true;
            if (left(map, n, m, x, y))
                isChange = true;
            if (right(map, n, m, x, y))
                isChange = true;
        }
    }
    if (!isChange)
    {
        return map;
    }
    return walk(map, n, m);
}

pair<pair<int, int>, vector<vector<int>>> inputOne()
{
    // 行，列，初始棋子数量
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> map(n + 5, vector<int>(m + 5, 0));
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        map[x][y] = 1;
    }
    return make_pair(make_pair(n, m), map);
}

int stat(vector<vector<int>> map)
{
    int stat = 0;
    for (int i = 1; i < map.size(); i++)
    {
        for (int j = 1; j < map[i].size(); j++)
        {
            if (map[i][j] == 1)
                stat++;
        }
    }
    return stat;
}

void solveOne()
{
    pair<pair<int, int>, vector<vector<int>>> input = inputOne();
    vector<vector<int>> map = input.second;
    // 行，列
    int n = input.first.first,
        m = input.first.second;
    vector<vector<int>> res = walk(map, n, m);
    cout << stat(res) << endl;
}

signed main()
{
#ifdef DEBUG
    freopen("./in.txt", "r+", stdin);
#endif
    int loop;
    cin >> loop;
    while (loop--)
        solveOne();

    return 0;
}