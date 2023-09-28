//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//#include <vector>
//void myPrint(int val) {
//	cout << val << " ";
//}
//
//class MyCompare {
//public:
//	bool operator==(int a) {
//		return a > 5;
//	}
//
//};
//
//void test01() {
//	vector<int> v1;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//	}
//	vector<int>v2;
//	v2.resize(v1.size());
//	copy(v1.begin(), v1.end(), v2.begin());
//	for_each(v2.begin(), v2.end(), myPrint);
//	cout << endl;
//
//	replace(v1.begin(), v1.end(), 6, 16);
//	replace_if(v1.begin(), v1.end(), MyCompare(), 16);
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//} 