/**
* 十二届省赛蓝桥杯G
* @link https://www.dotcpp.com/oj/problem2612.html?sid=8587701&lang=1#editor
*/

#include "iostream"

using namespace std;

signed main() {
//    freopen("../c.in", "r", stdin);
    int wight = 0;
    cin >> wight;
    for (int sum = 1, size = 1;; size++, sum = sum * 3 + 1) {
        if (sum >= wight) {
            cout << size;
            return 0;
        }
    }
}