#include "iostream"
#include "algorithm"
#include "stdio.h"

#define intL long long

using namespace std;

char mapArr[101][101];
int width, height;

void beDry(int y, int x) {
    for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {
            if (x + i < 0 || y + j < 0 || x + i > width - 1 || y + j > height - 1)
                continue;
            if (mapArr[y + j][x + i] == '1' && ( i == 0 || j == 0 )) {
                mapArr[y + j][x + i] = '0';
                beDry(y + j, x + i);
            }
        }
    }
}

int main() {
    freopen("./a.in.cpp", "r", stdin);
    cin >> height >> width;

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            cin >> mapArr[i][j];
        }
    }

    int cnt = 0;
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            if (mapArr[i][j] == '1') {
                cnt++;
                beDry(i, j);
            }
        }
    }
    cout << cnt;

}
