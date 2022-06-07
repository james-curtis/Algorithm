#include <stdio.h>
#include <stdbool.h>

#define MAX_N 21
int a[MAX_N]={1,2,4,7};
int n=4,k=14;
bool dfs(int i,int sum){
    if (i==n)
    {
        return sum == k;
    }
    if (dfs(i+1,sum))
    {
        return true;
    }
    if (dfs(i+1,sum+a[i]))
    {
        return true;
    }
    
    return false;
    
}
void solve()
{
    if (dfs(0,0))
    {
        printf("YES");
        
    }else
    printf("NO");
    
}

int main()
{
    solve();
}