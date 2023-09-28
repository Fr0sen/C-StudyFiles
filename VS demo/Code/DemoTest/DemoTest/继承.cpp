//#include <iostream>
//#include <cstdio>
//using namespace std;
//
////继承中的对象模型
//
//
//class Base1 {
//public:
//	int a;
//
//protected:
//	int b;
//
//private:
//	int c;
//
//};
//
//class Son1 :public Base1 {
//public:
//	void func() {
//		a = 10;
//		b = 10;   //protected属性，类内能访问，类外不能访问。
//	  //c = 10;   //private属性没办法访问
//	}
//};
//
//class Son2 :protected Base1 {
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;
//
//};
//
//class Base {
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//
//};
//
//class Son :public Base {
//public:
//	int m_D;
//};
//
//void test01() {
//	cout << "sizeof Son" << sizeof(Son) << endl;
//}
//
//int main() {
//	test01();
//}