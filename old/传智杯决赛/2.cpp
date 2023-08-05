#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // freopen("./2.in","r",stdin);
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    int datasize;
    vector<int> field;
    cin >> datasize;
    for (int i = 0; i < datasize; i++)
    {
        field.clear();
        int length;
        cin >> length;
        for (int ii = 0; ii < length; ii++)
        {
            int a;
            cin >> a;
            field.push_back(a);
        }

        int cnt=0;
        for (int a1 = 0; a1 < field.size(); a1++)
        {
            for (int a2 = 0; a2 < field.size(); a2++)
            {
                for (int a3 = 0; a3 < field.size(); a3++)
                {
                    int p1=field[a1],
                    p2=field[a2],
                    p3=field[a3];
                    if (!(0<= a1 and a1 <= a2 and a2<=a3 and a3 <= field.size()-1))
                    {
                        continue;
                    }
                    if (p1+p2==p3)
                    {
                        ++cnt;
                    }
                    
                    
                }
            }
        }
        if (i!=0)
        {
            cout << "\n";
        }
        
        cout << cnt;
                
    }
    
}