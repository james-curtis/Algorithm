/**
* 十二届省赛蓝桥杯I
* @link https://www.dotcpp.com/oj/problem2610.html
*/
#include "vector"
#include "iostream"

using namespace std;
const int MAXN = 100005;

int n, tmp;
vector<int> mp[MAXN];

int dfs(int idx) {
    int sz = mp[idx].size();
    int ans = 0;
    for (int i = 0; i < sz; i++) {
        /**
         * TODO: 看不懂
         */
        ans = max(ans, dfs(mp[idx][i]));
    }
    return ans + sz;
}

int main() {
    freopen("../c.in", "r", stdin);
    cin >> n;
    for (int i = 2; i <= n; i++) {
        cin >> tmp;
        mp[tmp].push_back(i);
    }
    cout << dfs(1) << endl;
    return 0;
}