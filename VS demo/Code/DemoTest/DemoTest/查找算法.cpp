//#include<iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <string>
//using namespace std;
//
////常用查找算法  
////find
//
//
////查找内置数据类型
//void test01() {
//	vector<int> v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find(v.begin(), v.end(), 5);
//	if (it == v.end()) {
//		cout << "么有找到" << endl;
//	}
//	else {
//		cout << "找到：" << *it << endl;
//	}
//}
//
////查找自定义数据类型  ,需要重载==号
//class Person {
//public:
//	Person(string name, int age) {
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	bool operator==(const Person& p ) {
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
//			return true;
//		}
//		else return false;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//class MyFind {  
//public:
//	bool operator()(int val) {//一元谓词
//		
//	}
//
//	bool operator()(int a,int b) {  //二元谓词
//
//	}
//	bool operator()(Person &p) {  
//
//	}
//};
//
//void test02() {
//	vector<Person> v;
//	//创建数据
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("bbb", 30);
//	Person p4("bbb", 40);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	vector<Person>::iterator it = find(v.begin(), v.end(), p2);
//
//	//查找相邻重复元素的算法 adjacent_find
//	adjacent_find(v.begin(), v.end());
//
//	//查找指定元素是否存在 binary_serach(在无序序列中不可以使用)
//	bool binary_serach(v.begin(),v.end(),5);//其实就是二分查找
//	
//	//count查找
//	//1.查找常用数据类型
//	vector<int> v2;
//	v2.push_back(30);
//	v2.push_back(40);
//	v2.push_back(50);
//	v2.push_back(60);
//	v2.push_back(10);
//	int num = count(v.begin(), v.end(), 40);
//
//	cout << "40的元素个数为：" << num << endl;
//
//	//2.统计自定义数据类型
//	int num2 = count(v.begin(), v.end(), p4); //这个不是谓词
//
//
//}
//
//
//
//int main() {
//
//}