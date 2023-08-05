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


    for (int i = 0; i < aLen; i++) {
    	int a,b,c;
		cin >> a>>b>>c;
		if(i!=0)cout << '\n';
		printf("Case %d: ",i+1);
		if(a+b>c && abs(a-b)<c) 
			cout << "YES";
		else
			cout << "NO";

    }


}
