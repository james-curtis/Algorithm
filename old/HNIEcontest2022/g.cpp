#include "iostream"
//#include "algorithm"
//#include "vector"
#include "map"
#include <stdio.h>
#include "string"
//#include <ctype.h>
//#include <math.h>

using namespace std;

int main() {
    freopen("../c.in", "r", stdin);
    int size = 0;
    cin >> size;

    multimap<string, int> map;
    for (int i = 0, cnt = 1; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            if (i == j)continue;
            string mystr;
            mystr += 'a' + i;
            mystr += 'a' + j;
            map.insert(pair<string, int>(mystr, cnt));
            cnt++;
        }
    }


    for (int i = 0; i < size; i++) {
        if (i != 0)cout << "\n";
        string danci;
        cin >> danci;
        multimap<string, int>::iterator the_iterator;
        the_iterator = map.find(danci);
        cout << the_iterator->second;


    }


}