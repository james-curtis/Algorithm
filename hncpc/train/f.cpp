/**
* 十二届省赛蓝桥杯F
*/
#include "iostream"
using namespace std;

signed main() {
//    freopen("../c.in", "r", stdin);
    long long timestamp;
    cin >> timestamp;

    printf("%02d", timestamp/1000/60/60%24);
    printf(":%02d", timestamp/1000/60%60);
    printf(":%02d", timestamp/1000%60);

    return 0;
}