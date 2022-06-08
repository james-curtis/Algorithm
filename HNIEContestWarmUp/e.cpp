#include "iostream"
#include "algorithm"
#include "vector"
#include "map"
#include <stdio.h>
#include "string"
#include <ctype.h>

using namespace std;

int main() {
    //freopen("./a.in.cpp", "r", stdin);
    int aLen = 0;
    cin >> aLen;


    for (int i = 0; i < aLen; i++) {
        int l1, l2;
        cin >> l1;
        cin >> l2;
        char c1[l1];
        char c2[l2];
        for (int cnt = 0; cnt < l1;) {
            char a = getchar();
            if (isalpha(a)) {
                c1[cnt] = tolower(a);
                cnt++;
            }
        }
        for (int cnt = 0; cnt < l2;) {
            char a = getchar();
            if (isalpha(a)) {
                c2[cnt] = tolower(a);
                cnt++;
            }
        }


        string subStr(c1, l1);
        string str(c2, l2);
        int cnt = 0;
        for (int ii = 0; ii < l2 - l1 + 1; ii++) {
            string sub = str.substr(ii, l1);
            if (sub == subStr) {
                cnt++;
            }
        }
        if (i != 0)cout << '\n';
        cout << cnt;

    }


}
