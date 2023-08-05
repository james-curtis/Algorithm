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
		int left=0,right=0;
		string str;
		cin >> str;
		char a;
		for(int j=0;j<6;j++){
			a=str[j];
			if(j<=2)
				left+=a-'0'; 
			else
				right+=a-'0'; 
		}
		if(i!=0)cout << endl;
		if(left == right)
		 	cout<<"YES";
		else
			cout << "NO"; 
	}
	
	
}
