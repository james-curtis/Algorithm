// 本题为考试单行多行输入输出规范示例，无需提交，不计分。
#include <iostream>
#include "string"
#include "ctype.h"
#include "vector"

using namespace std;

int sum(vector<int> *a) {
    int sum = 0;
    for (int i = 0; i < a->size(); ++i) {
        sum += a->at(i);
    }
    return sum;
}

int fact(int a){
    if(a == 1)
        return 1;
    return a*fact(a - 1);
}

int main() {
    freopen("../c.in", "r", stdin);
    vector<int> a, b;
    vector<int> list;
    for (int num; scanf("%d", &num) != -1;) {
        list.push_back(num);
    }

    int cha = -1;
    for (int i = 1; i < list.size(); ++i) {
        a.clear();
        b.clear();
        int aSize = i,
                bSize = list.size() - i;
        int loopCount = (fact(list.size()) * 1.0) / fact(list.size() - aSize) / fact(aSize);
        vector<int> indexPos;
        for (int j = 0; j < loopCount; ++j) {
            if (j == 0) {

            }
        }

        int thisCha = abs(sum(&a) - sum(&b));
        if (cha == -1) {
            cha = thisCha;
        } else {
            if (abs(sum(&a) - sum(&b)) < cha) {
                cha = thisCha;
            }
        }
    }

    cout << cha;

}