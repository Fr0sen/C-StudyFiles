//#define _CRT_SECURE_NO_WARNINGS 1
//#include <cstdio>
//#include <iostream>
//#include <vector>
//
//using namespace std;
//double A1[1001] = {0}, A2[1001] = { 0 }, Sum[2002] = { 0 };
//int main() {
//	//输入
//	int a1[20], a2[20];
//	int K1,K2,sum=0;
//	cin >> K1;
//	for (int i = 0; i < K1; i++) {
//		int j;
//		double temp;
//		cin >> j >> temp;
//		A1[j] = temp;
//	}
//	cin >> K2;
//	for (int i = 0; i < K1; i++) {
//		int j;
//		double temp;
//		cin >> j >> temp;
//		A2[j] = temp;
//	}
//	//开始计算乘积
//	for (int i = 0; i < 1001; i++) {
//		for (int j = 0; j < 1001; j++) {
//			Sum[i + j] += A1[i] * A2[j];
//		}
//	}
//	//输出
//	for (int i = 0; i < 2002; i++) {
//		if (Sum[i] != 0) {
//			sum++;
//		}
//	}
//	cout << sum;
//	for (int i = 2000; i >=0; i--) {
//		if (Sum[i] != 0) {
//			printf(" %d %.1f",i,Sum[i]);
//		}
//	}
//}