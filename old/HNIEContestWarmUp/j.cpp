#include "iostream"
#include "algorithm"
#include "vector"
#include "map"
#include <stdio.h>
#include "string"
#include <ctype.h>

using namespace std;

int main() {
//    cin.tie(0);
//    ios::sync_with_stdio(false);
//    freopen("../a.in", "r", stdin);
    long long peopleSize = 0, thingsSize = 0;
    cin >> peopleSize >> thingsSize;
    vector<long long> peopleMoney, thingsMoney;

    for (long long i = 0; i < peopleSize; i++) {
        long long a;
        cin >> a;
        peopleMoney.push_back(a);
    }
    for (long long i = 0; i < thingsSize; i++) {
        long long a;
        cin >> a;
        thingsMoney.push_back(a);
    }
    sort(peopleMoney.begin(), peopleMoney.end());
    sort(thingsMoney.begin(), thingsMoney.end());
    reverse(peopleMoney.begin(), peopleMoney.end());
    reverse(thingsMoney.begin(), thingsMoney.end());

    //最有钱的都买不起最便宜的商品，那就是算完了
    long long cnt = 0;
    for (long long i = 0, lastThingsPos = 0; i < peopleMoney.size(); i++) {
        for (long long j = lastThingsPos; j < thingsMoney.size(); j++) {
//            if (j >= thingsMoney.size()) {
//                cout << cnt;
//                return 0;
//            }
            if (peopleMoney.at(i) >= thingsMoney.at(j)) {
//                cout << "i:" << i << " j:" << j << " lastThingsPos:" << lastThingsPos << endl;
                cnt += 1;
                lastThingsPos = j + 1;
                break;
            }
        }
    }
    cout << cnt;
    return 0;
}
