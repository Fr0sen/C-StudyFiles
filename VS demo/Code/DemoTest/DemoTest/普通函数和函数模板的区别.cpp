//#include <iostream>
//#include <cstdio>
//using	namespace std;
//
//int myadd(int a,char b) {
//	return a + b;//可以自动类型转换
//}
//
//template <typename T>
//T myAdd02(T a,T b) {
//	return a + b;
//}
////void test01() {
////	int a = 10;
////	int b = 20;
////	char c = 'c';
////	cout << myadd(a, c) << endl;
////	//cout << myAdd02(a, c) << endl;//这样是不行的，因为没有自动类型转换(隐式类型转换)
////	cout << myAdd02<int>(a, c) << endl;
////}
//
//void myPrint(int a, int b) {
//	cout << "调用的普通函数" << endl;
//}
////template<class T>
////void myPrint(T a, T b) {
////	cout << "调用的模板" << endl;
////}
////
////template<class T>
////void myPrint(T a, T b,T c) {
////	cout << "调用的重载模板" << endl;
////}
//
//void test01() {
//	int a = 10;
//	int b = 20;
//	//myPrint(a, b);//优先调用普通函数
//
//	//通过空模板参数列表，强制调用函数模板
//	//myPrint<>(a, b);//这样就可以调用模板了(加入<>)
//
//	//如果函数模板产生更好的匹配，优先调用函数模板
//	char c1 = 'a';
//	char c2 = 'b';
//	myPrint(c1, c2);
//}
//
//int main() {
//	test01();
//}