#include "bits/stdc++.h"

using namespace std;

template<typename T>
void printLinear(vector<T> *array) {
    cout << "<==当前" << endl;
    for (const auto item: *array) {
        cout << item << " ";
    }
    cout << endl;
}

signed main() {
    // 顺序表的初始化顺序表的初始化
    vector<int> array;

    // 输入一组整型元素（各不相同）序列，建立顺序表
    cout << "==>请输入接下来序列的长度：" << endl;
    int length;
    cin >> length;
    cout << "==>请输入序列内容：" << endl;
    int temp;
    while (length--) {
        cin >> temp;
        array.push_back(temp);
    }
    printLinear(&array);

    // 求顺序表的长度
    cout << "==>顺序表的长度：" << array.size() << endl;
    printLinear(&array);

    // 顺序表的查找，查找失败返回0，查找成功返回位置
    cout << "==>请输入要查找的数：" << endl;
    int searchNumber;
    cin >> searchNumber;
    auto found = find(array.begin(), array.end(), searchNumber);
    if (found != array.end()) {
        cout << "==>查找成功";
    } else
        cout << "==>查找失败";
    cout << "，位置：" << array.end() - found << endl;
    printLinear(&array);

    // 在该顺序表中进行顺序查找某一元素，查找成功返回1，否则返回0
    cout << "==>请输入要查找的数：" << endl;
    cin >> searchNumber;
    found = find(array.begin(), array.end(), searchNumber);
    if (found != array.end()) {
        cout << "==>查找成功：1" << endl;
    } else
        cout << "查找失败：0" << endl;
    printLinear(&array);

    // 顺序表的插入
    cout << "==>请输入要插入的位置：" << endl;
    int insertPosition;
    cin >> insertPosition;
    cout << "==>请输入要插入数值：" << endl;
    int insertValue;
    cin >> insertValue;
    array.insert(array.begin() + insertPosition, insertValue);
    printLinear(&array);

    // 顺序表的删除
    cout << "==>请输入要删除的位置：" << endl;
    int deletePosition;
    cin >> deletePosition;
    array.erase(array.begin() + deletePosition);
    printLinear(&array);

}