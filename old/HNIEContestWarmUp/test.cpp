#include "iostream"
#include "algorithm"
#include "vector"
#include "map"
#include <stdio.h>
#include "string"
#include <ctype.h>

using namespace std;
template class std::vector<int>;

int main() {
	vector<int> arr;
	for(int i=0; i<10; i++,arr.push_back(i));
	return 0;
}
