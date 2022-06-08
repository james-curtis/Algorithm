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
    
    string akStr = "AK";

    for (int i = 0; i < aLen; i++) {
    	string searchStr;
    	cin >> searchStr;
    	int cnt =0 ;
		for(int j=0;j<searchStr.length();j++){
			string subStr = searchStr.substr(j,2);
			if(subStr == akStr){
				cnt ++;
			}
		}
		if(i!=0)cout << '\n';
		cout << cnt;
    }


}
