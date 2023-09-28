//#include <cstdio>
//#include <iostream>
//#include <string>
//#include "swap.h"
//using namespace std;
//
//class Person {
//public:
//	static int m_A ;
//	static void func() {
//		m_A = 105;      //静态 成员变量能被静态函数访问
//		//m_B = 200;	   //非静态成员变量不能被静态函数访问(必须通过对象通过访问，先创建一个对象才行)
//		cout << "static void func调用" << endl;
//	};
//
//private:
//	static void func2() {
//		m_A = 105;      //静态 成员变量能被静态函数访问
//		//m_B = 200;	   //非静态成员变量不能被静态函数访问(必须通过对象通过访问，先创建一个对象才行)
//		cout << "static void func调用" << endl;
//	};
//	int m_B = 200;
//
//};
//
//int Person::m_A = 0;//静态变量必须声明
//void test01() {
//	Person a;
//	cout << Person::m_A << endl;//通过类名字
//	a.m_A = 100;
//	cout << a.m_A;              //通过对象
//	Person b;
//	b.m_A = 200;                //共享同一片内存,一改都改
//	cout << a.m_A;
//}
//
//void test02() {
//	Person p;
//	p.func(); //1.通过对象
//
//	Person::func();//2.通过类名
//}
//
//
//
//void test03() {
//	//静态成员变量 不属于某个对象上，所有对象都共享同一份数据
//	//因此静态成员变量有两种访问方式
//
//	//1.通过对象访问
//	//2.通过类名进行访问
//}
//
//int main() {
//	//test01();
//	//cout << Person::m_A << endl;
//	Person::func();
//	//cout << Person::m_B << endl;
//}
