#include "iostream"
#include "algorithm"
#include "vector"
#include "map"
#include <stdio.h>
#include "string"
#include <ctype.h>
#include <math.h>

using namespace std;

int main() {
   	//freopen("./a.in.cpp", "r", stdin);
    int aLen = 0;
    cin >> aLen;
	
	
	vector<int> orginArr,resultArr;
	
    for (int i = 0; i < aLen; i++) {
    	int a;
    	cin >> a;
    	orginArr.push_back(a);
    	
    	int thisResPos=0;
    	for(int j=1;j<=i;j++){
    		thisResPos=i-j;
    		if(orginArr[i-j]>orginArr[i]){
    			thisResPos++;
    			break;
    		}
    	}
    	resultArr.push_back(thisResPos);
    	if(i!=0)cout << ' ';
    	cout << resultArr[i];
    }


}
