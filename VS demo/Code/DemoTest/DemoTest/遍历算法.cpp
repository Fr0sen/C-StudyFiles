//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <algorithm>
//#include <functional>//ģ�����
//#include <numeric>//�����С��ֻ������������������ ���м������ģ�庯��
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
////��ͨ����
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
//	for_each(v.begin(), v.end(), print01);//��ͨ����
//	cout << endl;
//	for_each(v.begin(), v.end(), print02());//�º�������
//	cout << endl;
//}
//
////transform����
//void test02() {
//	vector<int> v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//	vector<int> vTarget;//Ŀ������
//	vTarget.resize(v.size());//
//	transform(v.begin(), v.end(), vTarget.begin(), Transform());
//	for_each(v.begin(), v.end(), print01);
//}
//
//int main() { 
//	test01();
//}