//#include <cstdio>
//#include <iostream>
//#include "swap.h"
//using namespace std;
//
//void swap(int* a, int* b);
//void bubbleSort(int* arr, int len);
//
//void printArray(int *arr, int len) {
//	for (int i = 0; i < len; i++) {
//		cout << arr[i]<<" ";
//	}
//}
//int main() {
//	//1.用指针记录地址
//	//int a = 10;
//	//int* p;
//	//p = &a;
//	////2.使用指针
//	////使用*解引用，指的是指向指针指向地址中的数据。，
//	//*p = 1000;//修改指针所指向的内存并修改。
//	//cout << "a = " << a << endl;
//	//cout << "*p = " << *p << endl;
//	//cout << "int *p = " << sizeof(p);
//
//	//int * p = NULL;
//	//*p = 1000;//不能实现
//
//	//野指针
//
//	//指针和数组
//
//	//double arr[10] = { 1,2,4,6,7,1,9,5,4,6 };  //如果是double，就是8字节	
//	//cout << "第一个元素为" << arr[0];
//	//double* p = arr;
//	////cout << "利用指针来访问" << *p << endl;
//	//cout << "第一个地址" << p << endl;
//	//p++;
//	////cout << "利用指针来访问第二个元素：" << *p << endl;
//	//cout << "第二个地址" << p << endl;
//
//	//int a = 10;
//	//int b = 20;
//	//swap(&a, &b);//其实地址对应的就是swap函数中的指针
//	//cout << a << " " << b;
//	int arr[10] = { 4 ,6,7,8,1,9,4,7,1,2 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	bubbleSort(arr, len);
//	printArray(arr, len);
//	system("pause");
//	return 0;
//}
//
//void swap(int* a, int* b) {
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//
////void bubbleSort(int* arr, int len) {
////	for (int i = 1; i < 10; i++) {
////		for (int j = 0; j < i; j++) {
////			if (arr[i]>arr[j]) {
////				swap(&arr[i], &arr[j]);
////			}
////		}
////	}
////}
//void bubbleSort(int* arr, int len) {
//	for (int i = 0; i < len - 1; i++) {
//		for (int j = 0; j < len - i - 1 ; j++) {
//			if (arr[j] > arr[j+1]) {
//				swap(&arr[j], &arr[j+1]);
//			}
//		}
//	}
//}