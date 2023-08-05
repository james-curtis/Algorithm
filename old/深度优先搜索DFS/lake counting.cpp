#include <iostream>

using namespace std;

int N = 10, M = 12;
char field[10][12];
void dfs(int x, int y)
{
    //首先自己这里的W替换掉
    field[x][y] = '*';

    int offsetX,offsetY;
    //找一下四周的W
    for (int i = -1; i < 2; i++)
    {
        for (int ii = -1; ii < 2; ii++)
        {
            offsetX = x + i;
            offsetY = y + ii;
            if (offsetX>0 and offsetX < N-1 and offsetY>0 and offsetY < N-1 and field[offsetX][offsetY] == 'W')
            {
                dfs(offsetX, offsetY);
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    freopen("./lack_in", "r", stdin);
    char a;
    for (int i = 0; i < N; i++)
    {
        for (int ii = 0; ii < M; ii++)
        {
            cin >> a;
            field[i][ii] = a;
        }
    }

    int cnt = 0;
    //开始找W位置
    for (int i = 0; i < N; i++)
    {
        for (int ii = 0; ii < M; ii++)
        {
            if (field[i][ii] == 'W')
            {
                dfs(i, ii);
                ++cnt;
            }
        }
    }
    
    cout << endl;
    cout << cnt <<endl;

    return 0;
}
