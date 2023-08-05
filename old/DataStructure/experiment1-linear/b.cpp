#include "bits/stdc++.h"

using namespace std;

template<typename T>
struct Node {
    Node *next;
    Node *prev;
    /**
     * 指数
     */
    T index;
    /**
     * 系数
     */
    T ratio;
};

template<typename T>
void printLinear(Node<T> *list) {
    Node<T> *cursor = list;
    while (cursor != nullptr) {
        cout << cursor->index << " " << cursor->ratio << endl;
        cursor = cursor->next;
    }
}

template<typename T>
Node<T> *create() {
    Node<T> *head = nullptr, *cursor = nullptr;
//    cout << "请输入多项式系数个数：" << endl;
    int len = 0;
    cin >> len;
    while (len--) {
        auto *tempNode = (Node<T> *) malloc(sizeof(Node<int>));
        tempNode->next = nullptr;
        tempNode->prev = nullptr;
        cin >> tempNode->index;
        cin >> tempNode->ratio;
        if (head == nullptr) {
            head = tempNode;
            cursor = tempNode;
        } else {
            tempNode->prev = cursor;
        }
        cursor->next = tempNode;
        cursor = tempNode;
    }
    return head;
}

signed main() {
    freopen("../c.in", "r", stdin);
    const auto polynomial1 = create<int>();
    auto polynomial2 = create<int>();

    // 遍历多项式1，如果多项式2没有对应的index则添加上去
    for (auto p1 = polynomial1; p1 != nullptr; p1 = p1->next) {
        bool found = false;
        for (auto p2 = polynomial2; p2 != nullptr; p2 = p2->next) {
            if (p1->index == p2->index) {
                p2->ratio += p1->ratio;
                found = true;
                break;
            }
        }
        if (!found) {
            const auto temp = (Node<int> *) malloc(sizeof(Node<int>));
            temp->index = p1->index;
            temp->ratio = p1->ratio;
            temp->prev = nullptr;
            temp->next = polynomial2;
            polynomial2->prev = temp;
            polynomial2 = temp;
        }
    }

    printLinear(polynomial2);
    return 0;
}
