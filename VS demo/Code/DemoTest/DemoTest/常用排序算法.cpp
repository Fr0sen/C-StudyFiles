//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <string>
//#include <ctime>
//
//using namespace std;
//
//
//void print01(int v) {
//	cout << v;
//}
//
//void test01() {
//	vector<int> v;
//	v.push_back(12);
//	v.push_back(22);
//	v.push_back(32);
//	v.push_back(42);
//	v.push_back(52);
//	v.push_back(562);
//
//
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(),print01);
//
//
//	//ϴ���㷨
//	random_shuffle(v.begin(), v.end());
//
//	vector<int> vTarget;
//	vTarget.resize(v.size());
//	merge(v.begin(), v.end(), vTarget.begin(), vTarget.end(), vTarget.begin());
//
//	//reverse��ת����
//	reverse(vTarget.begin(), vTarget.end());	
//}
//
//int main() {
//	srand((unsigned int)time(NULL));//ÿ�������������һ�� 
//}