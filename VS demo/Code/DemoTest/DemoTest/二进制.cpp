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
//	Person p = { "张三",18 };//写入了一个结构体
//	ofs.write((const char*)&p, sizeof(p));
//	ofs.close();
//	
//	ifstream ifs;
//	ifs.open("Person.txt", ios::in | ios::binary);
//
//	if (!ifs.is_open()) {
//		cout << "打开文件失败" << endl;
//		return;
//	}
//	else {
//		Person p;
//		ifs.read((char*)&p, sizeof(p));
//		cout << "姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;
//	}
//	ifs.close();
//
//}
//
//int main() {
//	test01();
//}