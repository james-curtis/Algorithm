#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("./3.in", "r", stdin);

    vector<int> a = {0}, b = {0}, //实际的
                c = {0}, d = {0}; //复制的

    int dataCount, length, tmp;
    for (cin >> dataCount; dataCount; dataCount--)
    {
        for (cin >> length; length; --length)
        {
            cin >> tmp;
            a.push_back(tmp);
        }
        for (cin >> length; length; --length)
        {
            cin >> tmp;
            b.push_back(tmp);
        }
        c = a;
        d = b;

        sort(c.begin(), c.end());
        sort(d.begin(), d.end());
        if (c != d)
        {
            cout << "NO\n";
        }
        else
        {
            for (int i = 1; i < a.size(); i++)//1 1<=5
            {
                if (a[i]!=b[i])//a[1]=1 != b[1]=3
                {
                    //在a找b[i]
                    for (int ii = i+1; ii < a.size(); ii++)//4 4<5
                    {
                        if (a[ii]==b[i])//a[4]=3 == b[1]=3
                        {
                            //倒着一个个调换回去
                            for (int iii = ii; iii!=i+1; iii--)//iii=4-1=3
                            {
                                cout << iii << " " << iii-1 << "\n";
                                swap(a[iii],a[iii-1]);
                            }
                            break;
                        }
                        
                        /* code */
                    }
                    
                    /* code */
                }
                cout <<"0 0";
            }
            
        }
    }

    return 0;
}
