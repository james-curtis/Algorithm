#include "cstdio"
#include <cstdio>
#include <vector>
#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    freopen("./setin", "r", stdin);
    int n;
    cin >> n;

    vector<long long int> arr;
    long long int increase=0;
    arr.push_back(1);
    for (int i=1; i<=n; ++i) {
        increase=0;
        for (int cursor=0; cursor<arr.size(); cursor++) {
            arr[cursor]=arr[cursor]*i+increase;
            increase=arr[cursor]/10;
            if (increase!=0 and cursor==arr.size()-1)
            {
                arr.push_back(0);
            }
            
            arr[cursor]%=10;
        }
    }

    for (int i = arr.size()-1; i >=0; i--)
    {
        cout << arr[i];
    }
    

    return 0;
}

