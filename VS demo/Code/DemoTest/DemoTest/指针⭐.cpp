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
//	//1.��ָ���¼��ַ
//	//int a = 10;
//	//int* p;
//	//p = &a;
//	////2.ʹ��ָ��
//	////ʹ��*�����ã�ָ����ָ��ָ��ָ���ַ�е����ݡ���
//	//*p = 1000;//�޸�ָ����ָ����ڴ沢�޸ġ�
//	//cout << "a = " << a << endl;
//	//cout << "*p = " << *p << endl;
//	//cout << "int *p = " << sizeof(p);
//
//	//int * p = NULL;
//	//*p = 1000;//����ʵ��
//
//	//Ұָ��
//
//	//ָ�������
//
//	//double arr[10] = { 1,2,4,6,7,1,9,5,4,6 };  //�����double������8�ֽ�	
//	//cout << "��һ��Ԫ��Ϊ" << arr[0];
//	//double* p = arr;
//	////cout << "����ָ��������" << *p << endl;
//	//cout << "��һ����ַ" << p << endl;
//	//p++;
//	////cout << "����ָ�������ʵڶ���Ԫ�أ�" << *p << endl;
//	//cout << "�ڶ�����ַ" << p << endl;
//
//	//int a = 10;
//	//int b = 20;
//	//swap(&a, &b);//��ʵ��ַ��Ӧ�ľ���swap�����е�ָ��
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