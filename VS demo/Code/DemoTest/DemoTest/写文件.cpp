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
//	ofs << "姓名：张三" << endl;
//	ofs << "性别：男" << endl;
//	ofs << "年龄：18" << endl;
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
//		cout << "文件打开失败!" << endl;
//		return;
//	}
//	////第一种：
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf) {  //每次都是一行一行的读入,ifs >> buf如果读到头了，则会返回false
//	//	cout << buf << endl;
//	//}
//	////第二种
//	//char buff[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buff))) {
//	//	cout << buff << endl;
//	//}
//	////第三种
//	string buf;
//	while (getline(ifs, buf)) {
//		cout << buf << endl;
//	}
//
//	////第四种：不推荐
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