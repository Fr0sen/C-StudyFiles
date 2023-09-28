//#include <iostream>
//#include <cstdio>
//#include <string>
//using namespace std;
//
//
//
//
//class Phone {
//public:
//	/*Phone() {
//
//	}*/
//
//	Phone(string sName) {
//		phoneName = sName;
//		cout << "phone构造函数调用" << endl;
//	}
//	//手机品牌的名称
//
//	~Phone() {
//		cout << "Phone的析构函数调用"<<endl;
//	}
//	string phoneName;
//};
//
//class Person {
//public:
//	Person(string name, string pName): m_name(name), m_phone(pName) {  //如果定义了有参构造函数，那么系统将没有默认构造函数，只能通过Person("张三", "iphone15");方式来构造对象
//		cout << "Person的构造函数调用" << endl;
//	}
//
//	~Person() {
//		cout << "Person的析构函数调用" << endl;
//	}
//	string m_name;
//	Phone m_phone;
//};
//
//void test01() {
//	Person("张三", "iphone15");
//}
//
//int main() {//当其他类的成员作为本类的成员时，先构造类对象，再构造自身,析构的顺序相反
//	test01();
//
//}