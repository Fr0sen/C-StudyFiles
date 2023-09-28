//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <algorithm>
//#include <functional>//模板操作
//#include <numeric>//体积很小，只包括几个在序列上面 进行简单运算的模板函数
//using namespace std;
//
//class Transform
//{
//public:
//	int operator()(int v) {
//		return v;
//	}
//
//};
//
////普通函数
//void print01(int val) {
//	cout << val << " ";
//}
//
//class print02 {
//public:
//	void operator() (int val) {
//		cout << val << " ";
//	}
//};
//
//void test01() {
//	vector<int > v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//
//	}
//	for(int i : v)
//	{
//		cout << i;
//	}
//	for_each(v.begin(), v.end(), print01);//普通函数
//	cout << endl;
//	for_each(v.begin(), v.end(), print02());//仿函数对象
//	cout << endl;
//}
//
////transform搬运
//void test02() {
//	vector<int> v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//	vector<int> vTarget;//目标容器
//	vTarget.resize(v.size());//
//	transform(v.begin(), v.end(), vTarget.begin(), Transform());
//	for_each(v.begin(), v.end(), print01);
//}
//
//int main() { 
//	test01();
//}