//#include<iostream>
//#include <cstdio>
//#include <string>
//#include <fstream>
//
//using namespace std;
//
//void test01() {
//	ofstream ofs,read;
//	ofs.open("text.txt",ios::out);
//	read.open("text.txt", ios::in);
//	ofs << "����������" << endl;
//	ofs << "�Ա���" << endl;
//	ofs << "���䣺18" << endl;
//	read.open("text.txt", ios::in);
//	read.close();
//	ofs.close();
//}
//
//void test02() {
//	ifstream ifs;
//
//	ifs.open("text.txt", ios::in);
//	if (!ifs.is_open()) {
//		cout << "�ļ���ʧ��!" << endl;
//		return;
//	}
//	////��һ�֣�
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf) {  //ÿ�ζ���һ��һ�еĶ���,ifs >> buf�������ͷ�ˣ���᷵��false
//	//	cout << buf << endl;
//	//}
//	////�ڶ���
//	//char buff[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buff))) {
//	//	cout << buff << endl;
//	//}
//	////������
//	string buf;
//	while (getline(ifs, buf)) {
//		cout << buf << endl;
//	}
//
//	////�����֣����Ƽ�
//	//char c;
//	//while ((c = ifs.get()) != EOF) {  //EndOfFile
//	//	cout << c;
//	//}
//	ifs.close();
//}
//
//int main() {
//	test01();
//	test02();
//}