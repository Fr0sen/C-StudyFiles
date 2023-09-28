//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//#include <vector>
//#include <fstream>
//void myPrint(int val) {
//	cout << val << " ";
//}
//
//void test01() {
//	vector<int> v1;
//	vector<int> v2;
//
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//	vector<int> vTarget;
//	//目标容器提前开辟空间
//	//开辟两个中小的即可，因为是交集
//	vTarget.resize(min(v1.size(), v2.size()));
//
//	//获取交集 set_intersection
//	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), vTarget.end(), myPrint);
//
//	//获取并集合
//	vTarget.resize(v1.size() + v2.size());
//	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), vTarget.end(), myPrint);
//
//	//获取差集set_union
//	vTarget.resize(max(v1.size(), v2.size()));
//	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), vTarget.end(), myPrint);
//
//
//}
//
