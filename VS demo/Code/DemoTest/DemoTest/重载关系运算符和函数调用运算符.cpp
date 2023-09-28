//#include <iostream>
//using namespace std;
//#include <string>
//class Person {
//public:
//	Person(string name,int age){
//		m_Name = name;
//		m_age = age;
//	}
//	//重载 == 和!=
//	
//
//	string m_Name;
//	int m_age;
//};
//
//class MyPrint {
//public:
//	void operator()(string test) {
//		cout << test << endl;
//	}
//
//};
//
//
//
//void myPrint02(string s) {
//	cout << s << endl;
//}
//
//void test08() {
//	MyPrint myPrint;
//	myPrint("hello world");    //仿函数
//	myPrint02("hello world");//函数
//}
//
//
//bool operator==(Person& p1, Person& p2) {
//	if (p1.m_age == p2.m_age && p2.m_Name == p2.m_Name) {
//		return true;
//	}
//	else return false;
//}
//
//bool operator!=(Person& p1,Person& p2){
//	if (p1.m_age != p2.m_age || p2.m_Name != p2.m_Name) {
//		return true;
//	}
//	else return false;
//}
//
//
//void test01() {
//	Person p1("tom", 19);
//	Person p2("tom", 18);
//
//	if (p1 == p2) {
//		cout << "true" << endl;
//	}
//	else if (p1 != p2) {
//		cout << "false" << endl;
//	}
//}
//
//int main() {
//	test01();
//	test08();
//}