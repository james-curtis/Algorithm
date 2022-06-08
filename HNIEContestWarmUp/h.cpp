#include "iostream"
#include "algorithm"
#include "vector"
#include "map"
#include <stdio.h>
#include "string"
#include <ctype.h>

using namespace std;

void tolowerCase(char *a,int len){
		for(int j=0;j<len;j++)
		{
			a[j]=tolower(a[j]);
		}
		
}

int main(){
	//freopen("./a.in.cpp","r",stdin);
	int aLen=0;
	cin >> aLen;
	
	for(int i=0;i<aLen;i++)
	{
		if(i!=0)cout << endl;
		long long a,b,c,x,y;
		cin >> a>>b>>c>>x>>y;
		a-=x;
		b-=y;
		
		if(a<0)
			c+=a;
		if(b<0)
			c+=b;
			
		if(c>=0)
			cout << "YES";
		else
			cout << "NO";
	}
	
	
}
