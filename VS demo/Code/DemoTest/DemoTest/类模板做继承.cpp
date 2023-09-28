//#include <iostream>
//#include <cstdio>
//using namespace std;
//#include <string>
//template <typename T>
//class Base {
//public:
//	T m;
//
//
//};
//
//class Son :public Base<int> {   //因为有时候没有指定类型
//
//};
//
//void test01() {
//	Son s1;
//
//}
//
////如果想灵活的指定父类的T类型，子类也需要变类模板
//template <class T1,class T2>
//class Son2 :public Base <T2>{
//public:
//	Son2(T1 name, T2 age);	//类外声明
//		/* {
//		this->m_Name = name;
//		this->m_Age = age;
//	}*/
//
//	void showPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
////构造函数类外实现
//template<class T1,class T2>
//Son2<T1, T2>::Son2(T1 name, T2 age) {
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
////成员函数的类外实现
//template<class T1, class T2>
//void Son2<T1, T2>::showPerson() {
//	cout << "姓名：" << this->m_Name << "\t年龄：" << this->m_Age << endl;
//}
//
//void test02() {
//	/*Son2<string,int> s2("sunwukong",100);*/
//	Son2<string, int> s1("孙悟空",100);
//	s1.showPerson();
//}
//
//int main(){
//
//}