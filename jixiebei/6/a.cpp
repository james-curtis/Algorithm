#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    // freopen("./a.in", "r", stdin);
    int n;
    scanf("%d", &n);
    vector<int> child;
    vector<int> gua;
    vector<int> childBack;
    vector<int> guaBack;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        child.push_back(a);
        childBack.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        gua.push_back(a);
        guaBack.push_back(a);
    }

    sort(child.begin(), child.end());
    sort(gua.begin(), gua.end());
    reverse(child.begin(), child.end());
    reverse(gua.begin(), gua.end());

    for (int i = 0; i < n; i++) //childBack
    {
        for (int ii = 0; ii < n; ii++)
        {
            if (childBack[i] == child[ii])
            {
                if (i != 0)
                    cout << " ";
                cout << gua[ii];
            }
        }
    }

    return 0;
}