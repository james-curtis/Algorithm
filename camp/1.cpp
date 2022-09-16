// 本题为考试单行多行输入输出规范示例，无需提交，不计分。
#include <iostream>
#include "string"
#include "ctype.h"

using namespace std;

int main() {
//    freopen("../c.in", "r", stdin);
    string str;
    for (char ch = getchar(); ch != -1 && ch != '\n'; ch = getchar()) {
        if (!isalpha(ch))
            continue;
        str += (char) tolower(ch);
    }

    bool isTrue = true;
    for (int i = 0, j = str.length() - 1; i < str.length() && j >= i; ++i,--j) {
        if (str[i] != str[j]) {
            isTrue = false;
            break;
        }
    }
    if (isTrue) {
        cout << "true";
        return 0;
    }
    cout << "false";
}