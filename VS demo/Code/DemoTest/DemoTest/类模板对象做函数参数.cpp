//#include <string>
//#include <cstdio>
//#include <iostream>
//#include <string>
//using namespace std;
//
//template <class T1,class T2>  //模板参数列表，默认是一个整型
//class Person
//{
//public:
//	Person(T1 name, T2 age) {
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPerson() {
//		cout << "姓名" << m_Name << "\t年龄" << m_Age << endl;
//	}
//	T1 m_Name;
//	T2 m_Age
//};
//
//
//
//void PrintPerson1(Person<string ,int> &p) { //既然是模板类，那传参也要写成模板的格式
//	p.showPerson();
//}
////1.指定传入类型
//
//void test01() {
//	Person<string, int>p("孙悟空", 100);
//}
//
//
//template<class T1,class T2> //告诉模板
//void PrintPerson2(Person<T1, T2>&p) {
//	p.showPerson();
//	cout << "T1的类型：" << typeid(T1).name() << endl;
//	cout << "T2的类型：" << typeid(T2).name() << endl;
//}
////2.参数模板化
//void test02() {
//	Person<string, int>p("猪八戒", 100);
//	PrintPerson2(p);
//}
//
//
//
//template<class T>
//void PrintPerson3(T &p) {   //参数列表的格式基本上就是   类名<参数1，参数2> &对象名
//	p.showPerson();
//	cout << "类的数据类型" << typeid(T).name() << endl;
//}
////3.整个类模板化
//void test03() {
//	Person<string, int>p("唐僧", 30);
//	PrintPerson3(p);
//}
//
//
//
//
//int main() {
//	test01();
//
//}