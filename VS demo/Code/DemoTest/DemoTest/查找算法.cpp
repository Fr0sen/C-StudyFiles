//#include<iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <string>
//using namespace std;
//
////���ò����㷨  
////find
//
//
////����������������
//void test01() {
//	vector<int> v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find(v.begin(), v.end(), 5);
//	if (it == v.end()) {
//		cout << "ô���ҵ�" << endl;
//	}
//	else {
//		cout << "�ҵ���" << *it << endl;
//	}
//}
//
////�����Զ�����������  ,��Ҫ����==��
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
//	bool operator()(int val) {//һԪν��
//		
//	}
//
//	bool operator()(int a,int b) {  //��Ԫν��
//
//	}
//	bool operator()(Person &p) {  
//
//	}
//};
//
//void test02() {
//	vector<Person> v;
//	//��������
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
//	//���������ظ�Ԫ�ص��㷨 adjacent_find
//	adjacent_find(v.begin(), v.end());
//
//	//����ָ��Ԫ���Ƿ���� binary_serach(�����������в�����ʹ��)
//	bool binary_serach(v.begin(),v.end(),5);//��ʵ���Ƕ��ֲ���
//	
//	//count����
//	//1.���ҳ�����������
//	vector<int> v2;
//	v2.push_back(30);
//	v2.push_back(40);
//	v2.push_back(50);
//	v2.push_back(60);
//	v2.push_back(10);
//	int num = count(v.begin(), v.end(), 40);
//
//	cout << "40��Ԫ�ظ���Ϊ��" << num << endl;
//
//	//2.ͳ���Զ�����������
//	int num2 = count(v.begin(), v.end(), p4); //�������ν��
//
//
//}
//
//
//
//int main() {
//
//}