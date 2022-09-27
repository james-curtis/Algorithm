/**
* 十二届省赛蓝桥杯H
* @link https://www.dotcpp.com/oj/problem2610.html
*/
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
typedef long long LL;
int n;
LL C(int a, int b)   //计算C（a，b）
{
    LL res = 1;
    for(int i = a, j = 1; j <= b; i --, j ++)
    {
        res = res * i / j;
        if(res > n)
            return res;     // 大于n已无意义，且防止爆LL
    }
    return res;
}
bool check(int k)
{
    // 二分该斜行,找到大于等于该值的第一个数
    // 左边界2k，右边界为max(l, n)取二者最大，避免右边界小于左边界
    int l = 2 * k, r = max(n,l);
    while(l < r)
    {
        int mid = l + r >> 1;
        if(C(mid, k) >= n) r = mid;
        else l = mid + 1;
    }
    if(C(r, k) != n)
        return false;
    cout << 1ll*(r + 1) * r / 2 + k + 1 << endl;
    return true;
}
int main()
{
    cin >> n;
    // 从第16斜行枚举
    for(int i = 16; ; i--)
        if(check(i))
            break;
    return 0;
}


// 暴算
//int main() {
//    vector<vector<int>> tree;
//    tree.push_back({1});
//    tree.push_back({1, 1});
//    vector<int> resultArr = {1, 1, 1};
//    int target;
//    cin >> target;
//    int searchPos = 0;
//    for (int i = 2;; i++) {
//        vector<int> v;
//        for (int j = 0, end = (i % 2 == 0 ? i + 1 : i) / 2 + 1; j < end; j++) {
//            auto insertPosition = v.begin() + (long long) (v.size() / 2);
//            if (j == 0) {
//                v.insert(insertPosition, 1);
//                insertPosition = v.begin() + (long long) (v.size() / 2);
//                v.insert(insertPosition, 1);
//            } else {
//                v.insert(insertPosition, tree[i - 1][j] + tree[i - 1][j - 1]);
//                if (i % 2 != 0 or j != end - 1) {
//                    insertPosition = v.begin() + (long long) (v.size() / 2);
//                    v.insert(insertPosition + 1, tree[i - 1][j] + tree[i - 1][j - 1]);
//                }
//            }
//        }
//        tree.push_back(v);
//        for (auto it: v) {
//            resultArr.push_back(it);
//        }
//        for (; searchPos < resultArr.size(); searchPos++) {
//            if (resultArr.at(searchPos) == target) {
//                cout << searchPos + 1;
//                return 0;
//            }
//        }
//    }
//}