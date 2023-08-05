#include "iostream"
//#include "algorithm"
//#include "vector"
//#include "map"
#include <stdio.h>
//#include "string"
//#include <ctype.h>
//#include <math.h>

using namespace std;

int main() {
    freopen("../c.in", "r", stdin);
    int size = 0;
    cin >> size;


    for (int i = 0; i < size; i++) {
        int len;
        cin >> len;
//		vector<int> arr;
        int flagSuccess = 1;
        for (int j = 1; j <= len; j++) {
            int oneIndexFirstType;//第一个元素奇偶类型，1为奇数
            int twoIndexFirstType;
            int temp;
            cin >> temp;
//			arr.push_back(temp);
            if (j == 1) {
                temp % 2 == 0 ? oneIndexFirstType = 0 : oneIndexFirstType = 1;
            }
            if (j == 2) {
                temp % 2 == 0 ? twoIndexFirstType = 0 : twoIndexFirstType = 1;
            }
            if (j % 2 == 1 && j > 2) {
                //奇数下标
                if (temp % 2 != oneIndexFirstType) {
                    flagSuccess = 0;
                    break;
                }
            }
            if (j % 2 == 0 && j > 2) {
                if (temp % 2 != twoIndexFirstType) {
                    flagSuccess = 0;
                    break;
                }
            }
        }

        if (i != 0)cout << "\n";

        if (flagSuccess == 1)
            cout << "YES";
        else
            cout << "NO";


    }


}




