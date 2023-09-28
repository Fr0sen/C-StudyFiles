//#include <cstdio>
//#include <iostream>
//#include <string>
//#include "swap.h"
//using namespace std;
//
////const int g_A = 5;
////int g_b;
////
////int* func() {
////	int *p = new int(10);
////	return p;
////	//int a = 10;//存放在栈区，运行结束自动释放
////	//return &a;//返回局部变量的地址
////}
////
////int main() {
////	int a = 10;
////	static int b = 10;
////	
////	cout << (int) & g_A << endl;
////	cout << (int) & a << endl;
////	cout << &b;
////
////	int* p = func();
////	//cout << *p << endl;//第一次帮你保留
////	//cout << *p << endl;//第二次直接销毁
////	cout << *p << endl;//永远不会释放除非程序员自己释放，程序结束就释放了
////	//常量
////	//字符串常量
////	cout << "helloworld" <<endl<< (int)&"helloworld";
////	//const 修饰的全局/局部变量	
////	cout << "全局常量 c_g_a的地址"<<(int)&g_A;
////}
//
//int* func() {
//	int* p = new int(10);
//	return p;
//}
//
//void test01() {
//	int* p = func();
//	cout << *p << endl;
//	delete p;
//}
//
//void test02() {
//	int * arr = new int[10];//10代表数组有10个元素;
//	for (int i = 0; i < 10; i++) {
//		arr[i] = i + 100;
//	}
//	delete[] arr;  //释放数组的时候，要加一个中括号
//
//
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}