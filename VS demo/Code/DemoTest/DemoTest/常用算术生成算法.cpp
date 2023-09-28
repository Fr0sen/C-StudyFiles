#include <numeric>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void test01() {
	vector<int> v;
	for (int i = 0; i <= 100; i++) {
		v.push_back(i);
	}
	int sum=0;
	sum = accumulate(v.begin(), v.end(), 0);//0是起始累加值
		
}



int main() {

}