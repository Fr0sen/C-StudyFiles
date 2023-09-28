//#include <string>
//#include <cstdio>
//#include <iostream>
//#include <string>
//using namespace std;
//
//template <class NameType,class AgeType = int>  //模板参数列表，默认是一个整型
//class Person
//{
//public:
//	Person(NameType name, AgeType age) {
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void showPerson1() {
//		cout << "Person1" << endl;
//	}
//	void showPerson() {
//		cout << "name:" << this->m_Name << "\tage:" << this->m_Age << endl;
//	}
//	
//private:
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//class Person2
//{
//public:
//	
//	void showPerson2() {
//		cout << "Person1" << endl;
//	}
//	
//
//private:
//	
//};
//
//template<class T>  //类模板
//class MyClass {
//public:
//	T obj;         //类模板中的数据类型，如果不创建 具体类对象，则不会调用成员函数
//	void func1() {
//		obj.showPerson1();//Person1类中的成员函数
//	}
//	void func2() {
//		obj.showPerson2();//Person2类中的成员函数
//	}
//
//};
//
//void test03() {
//	MyClass<Person2> m;
//	m.func2();
//	MyClass<string>m;  //Person1
//	m.func1();
//}
//
//
//	//2.类模板在模板参数列表中可以有默认参数
//void test01() {
//	//Person p1("孙悟空", 999);//1.类模板没有自动类型推导的方式,只能用显式指定类型
//	Person<string, int> p1("孙悟空", 999);//用类模板创建对象
//	p1.showPerson();
//
//}
//
//void test02() {
//	Person<string, int> p2("猪八戒", 999);
//}
//
//int main() {
//	test01();
//
//}