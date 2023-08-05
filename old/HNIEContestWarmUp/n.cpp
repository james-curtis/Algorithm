#include "iostream"
#include "algorithm"

#define intL long long

using namespace std;

intL mapArr[1001][1001];
int deep;

int main() {
    //freopen("../a.in", "r", stdin);
    cin >> deep;
    for (int i = 0; i < deep; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            cin >> mapArr[i][j];
        }
    }
    for (int i = deep - 2; i >= 0; --i) {
        for (int j = 0; j <= i; ++j) {
            mapArr[i][j] = max(mapArr[i + 1][j], mapArr[i + 1][j + 1]) + mapArr[i][j];
        }
    }
    cout << mapArr[0][0];
}
