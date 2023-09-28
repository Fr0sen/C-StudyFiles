//#include <cstdio>
//#include <iostream>
//#include <string>
//#include "swap.h"
//using namespace std;
//
//class Person {
//public:
//	int m_A;//非静态成员变量
//	static int m_B; //静态成员变量不属于类的内存
//
//
//	Person(int age) {
//		this->age = age;//指向被调用的成员函数所属的对象
//	}
//	Person& AddPersonAge(Person &p) {  //使用引用是因为必须要对p2本身进行操作，而不是复制一份地址
//		this->age += p.age;
//		return *this; //*this
//	}
//
//	int age;
//
//};
//int Person::m_B = 0;
//
////void test01() {
////	Person p;
////	cout << "size of p =" << sizeof(p) << endl;
////}
////void test02() {
////	Person p;
////	cout << "size of p =" << sizeof(p) << endl;
////}
//
//void test03() {
//	Person p1(10);
//	Person p2(20);
//	p2.AddPersonAge(p1).AddPersonAge(p1).AddPersonAge(p1);
//	cout << p2.age;
//}
//
//class PersonNull {
//public :
//	void showPersonAge() {
//
//		if (this == NULL) {
//			return;
//		}
//
//		cout << "age = " <<this->m_age << endl;
//	}
//
//	int m_age;
//};
//
//void test04() {
//	PersonNull * p = NULL;
//	p->showPersonAge();
//}
//
//
//
//int main() {
//	//test01();//c++会为每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
//	//test02();//非空就按照int分配四个字节空间
//	test03();
//	test04();
//
//}
