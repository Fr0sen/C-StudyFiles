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
////	//int a = 10;//�����ջ�������н����Զ��ͷ�
////	//return &a;//���ؾֲ������ĵ�ַ
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
////	//cout << *p << endl;//��һ�ΰ��㱣��
////	//cout << *p << endl;//�ڶ���ֱ������
////	cout << *p << endl;//��Զ�����ͷų��ǳ���Ա�Լ��ͷţ�����������ͷ���
////	//����
////	//�ַ�������
////	cout << "helloworld" <<endl<< (int)&"helloworld";
////	//const ���ε�ȫ��/�ֲ�����	
////	cout << "ȫ�ֳ��� c_g_a�ĵ�ַ"<<(int)&g_A;
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
//	int * arr = new int[10];//10����������10��Ԫ��;
//	for (int i = 0; i < 10; i++) {
//		arr[i] = i + 100;
//	}
//	delete[] arr;  //�ͷ������ʱ��Ҫ��һ��������
//
//
//}
//
//int main() {
//	test01();
//	system("pause");
//	return 0;
//}