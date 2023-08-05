#include "bits/stdc++.h"

#define int long long
using namespace std;

#define SIZE 6
typedef char data;
data stack_[SIZE];
data *top;

void init() {
    top = stack_;
}

void insert(data num) {
    *top = num;
    top++;
}

bool isEmpty() {
    if (top == stack_) return true;
    return false;
}

bool isFull() {
    if (top == stack_ + SIZE) return true;
    return false;
}

data pop() {
    top--;
    return *top;
}

signed main() {
    freopen("../DataStructure/expire3/in.txt", "r", stdin);
    init();
    cout << "Õ»¿Õ£º" << (isEmpty() ? "true" : "false") << endl;
    cout << "Õ»Âú£º" << (isFull() ? "true" : "false") << endl;

    cout << "========" << endl;
    data input;
    while (cin >> input) {
        insert(input);
    }

    cout << "Õ»¿Õ£º" << (isEmpty() ? "true" : "false") << endl;
    cout << "Õ»Âú£º" << (isFull() ? "true" : "false") << endl;
    cout << pop() << endl;
    cout << pop() << endl;
    cout << pop() << endl;
    cout << pop() << endl;
    cout << pop() << endl;
    cout << pop() << endl;

    cout << "Õ»¿Õ£º" << (isEmpty() ? "true" : "false") << endl;
    cout << "Õ»Âú£º" << (isFull() ? "true" : "false") << endl;
    return 0;
}