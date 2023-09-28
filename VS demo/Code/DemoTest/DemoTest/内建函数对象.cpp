//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//#include <functional>//内建函数对象头文件
////negate一元仿函数 取反仿函数
//void test01() {
//	negate<int> n;
//	cout << n(50) << endl;
//}
//
//
////下面的都是二元仿函数，但是参数只需要一个T
////plus 二元仿函数 加法
////minus减法
////multiplies
//void test02() {
//	plus<int>p;//默认都是int两个参数
//	cout << p(10, 20) << endl;
//}
//
////关系仿函数
//
//void tets03() {
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(101);
//	v.push_back(101);
//	v.push_back(101);
//	v.push_back(101);
//	v.push_back(101);
//
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//	//sort(v.begin(), v.end(), MyCompare());//这个需要自己写一个二元仿函数
//	sort(v.begin(), v.end(), greater<int>());//编译器提供的函数对象，头文件是functional
//
//}
//
//void test04() {
//	vector<bool> v;
//	v.push_back(true);
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(true);
//	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//	//利用逻辑非 将容器v搬运到v2中，并执行取反的操作
//	vector<bool>v2;
//	v2.resize(v.size()); //必须要有resize这一步，不然目标容器没有空间
//	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());//原容器起点，终点，目标的起点，函数
//}
//
//int main() {
//
//
//	system("pause");
//	return 0;
//}