//#include <cstdio>
//#include <iostream>
//#include <string>
//#include "swap.h"
//using namespace std;
//
////常函数和常对象
//class Person {
//public:
//
//	//this 指针的本质是指针常量，this 指针的本质是指针常量,this 指针的本质是指针常量,指针的指向是不可以修改的
//	//Person * const this;相当于让this指针是不可以修改的 
//	void showPerson() const {//const指向的 值也不可以修改了
//		//this->m_A = 100;
//		//this = NULL;//this指针是不可以修改的，但是this指针的值是可以修改的
//		this->m_B = 100;
//	}
//	void func() {
//	}
//	int m_A;
//	mutable int m_B;//特殊变量，即使在常函数中也可以修改值
//};
//
//void test01() {
//	Person p;
//	p.showPerson();
//}
//
//void test02() {
//	const Person p;//在对象前加上const，变为常对象
//	p.m_B = 100;   //mutable在常对象下也可以修改
//
//	//常对象只能调用常函数	
//	p.showPerson();
//	p.func();//不是常函数调不了
//
//
//}
//
//int main() {
//	
//
//}
