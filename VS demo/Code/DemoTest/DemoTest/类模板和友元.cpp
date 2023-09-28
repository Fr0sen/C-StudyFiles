//#include <iostream>
//using namespace std;
//
//
//template<class T1,class T2>
//class Person;
//
//template<typename T1, typename T2>  //先让编译器看到全局函数
//void printPerson2(Person<T1, T2> p) {  //函数模板的实现
//	cout << "类外实现" << p.mName << endl;
//}
//
//
//template<class T1, class T2>
//class Person
//{ 
//	//全局函数类内实现
//	friend void printPerson(Person<T1,T2> p) {
//		cout << "姓名：" << p.mName << "年龄：" << p.mAge << endl;	
//	}
//
//	//类外实现
//	//需要加一个空模板的参数列表
//	//如果我们的全局函数是类外实现的，需要让编译器提前知道这个函数的存在
//	friend void printPerson2<>(Person<T1, T2> p);   //是一个普通函数的声明
//
//public:
//	Person(T1 name, T2 age) {
//		this->mName = name;
//		this->mAge = age;
//	}
//private:
//	T1 mName;
//	T2 mAge;
//};
//void test01() {
//	Person<string, int>p("Tom", 20);
//	printPerson(p);
//}
//
//
//
//
//void test02() {
//	Person<string, int >p("Jerry", 20);
//	printPerson2(p);
//}
//
//int main() {
//	test02();
//}