//#include <iostream>
//#include<vector>
//#include <algorithm>
//using namespace std;
//
////仿函数 返回值是bool类型，称之为谓词
////一元谓词
//class GreaterFive {
//public:
//	bool operator()(int val) {
//		return val > 5;
//	}
//
//};
//
//class MyCompare {
//public:
//	bool operator()(int v1, int v2) {//二元谓词
//		return v1 > v2;
//	}
//};
//
////二元谓词
//void test02() {
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(30);
//	sort(v.begin(), v.end());
//	for (vector<int> ::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//	//使用函数对象 改变算法策略，变为排序规则为从小到大 
//	sort(v.begin(), v.end(), MyCompare()); //（）的意思是加了一个匿名对象
//}	
//
//void test01() {
//	vector<int> v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//
//
//}
