//#include<iostream>
//#include <cstdio>
//#include <string>
//#include <fstream>
//
//using namespace std;
//class Person {
//public:
//	char m_Name[64];
//	int m_Age;
//};
//
//void test01() {
//	ofstream ofs;
//	ofs.open("Person.txt", ios::out | ios::binary);
//	Person p = { "����",18 };//д����һ���ṹ��
//	ofs.write((const char*)&p, sizeof(p));
//	ofs.close();
//	
//	ifstream ifs;
//	ifs.open("Person.txt", ios::in | ios::binary);
//
//	if (!ifs.is_open()) {
//		cout << "���ļ�ʧ��" << endl;
//		return;
//	}
//	else {
//		Person p;
//		ifs.read((char*)&p, sizeof(p));
//		cout << "������" << p.m_Name << "���䣺" << p.m_Age << endl;
//	}
//	ifs.close();
//
//}
//
//int main() {
//	test01();
//}