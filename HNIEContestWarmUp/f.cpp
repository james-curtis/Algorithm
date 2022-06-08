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
	
		
	vector<int> aArr;
	for(int i=0;i<aLen;i++)
	{
		aArr.clear();
		int bottleLen;
		cin >> bottleLen;
		for(int ii=0;ii< bottleLen;ii++) 
		{
			int t;
			cin >> t;
			aArr.push_back(t);
		}
		sort(aArr.begin(),aArr.end());
		int cnt=0;
		//cout << endl; 
		for(int ii=1;ii< bottleLen;ii++) 
		{
			//cout << aArr[ii]-aArr[0]<< " "<< aArr[ii]<< " "<<aArr[0]<<endl;
			cnt += aArr[ii]-aArr[0];
		}
		if(i!=0)cout << endl;
		cout << cnt;
		
	}
	
	
}
