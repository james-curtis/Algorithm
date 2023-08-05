#include "bits/stdc++.h"

using namespace std;

template<typename T>
void printLinear(vector<T> *array) {
    cout << "<==��ǰ" << endl;
    for (const auto item: *array) {
        cout << item << " ";
    }
    cout << endl;
}

signed main() {
    // ˳���ĳ�ʼ��˳���ĳ�ʼ��
    vector<int> array;

    // ����һ������Ԫ�أ�������ͬ�����У�����˳���
    cout << "==>��������������еĳ��ȣ�" << endl;
    int length;
    cin >> length;
    cout << "==>�������������ݣ�" << endl;
    int temp;
    while (length--) {
        cin >> temp;
        array.push_back(temp);
    }
    printLinear(&array);

    // ��˳���ĳ���
    cout << "==>˳���ĳ��ȣ�" << array.size() << endl;
    printLinear(&array);

    // ˳���Ĳ��ң�����ʧ�ܷ���0�����ҳɹ�����λ��
    cout << "==>������Ҫ���ҵ�����" << endl;
    int searchNumber;
    cin >> searchNumber;
    auto found = find(array.begin(), array.end(), searchNumber);
    if (found != array.end()) {
        cout << "==>���ҳɹ�";
    } else
        cout << "==>����ʧ��";
    cout << "��λ�ã�" << array.end() - found << endl;
    printLinear(&array);

    // �ڸ�˳����н���˳�����ĳһԪ�أ����ҳɹ�����1�����򷵻�0
    cout << "==>������Ҫ���ҵ�����" << endl;
    cin >> searchNumber;
    found = find(array.begin(), array.end(), searchNumber);
    if (found != array.end()) {
        cout << "==>���ҳɹ���1" << endl;
    } else
        cout << "����ʧ�ܣ�0" << endl;
    printLinear(&array);

    // ˳���Ĳ���
    cout << "==>������Ҫ�����λ�ã�" << endl;
    int insertPosition;
    cin >> insertPosition;
    cout << "==>������Ҫ������ֵ��" << endl;
    int insertValue;
    cin >> insertValue;
    array.insert(array.begin() + insertPosition, insertValue);
    printLinear(&array);

    // ˳����ɾ��
    cout << "==>������Ҫɾ����λ�ã�" << endl;
    int deletePosition;
    cin >> deletePosition;
    array.erase(array.begin() + deletePosition);
    printLinear(&array);

}