//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <cstdio>
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <math.h>
//using namespace std;
//
//int Prime[10000];
//
//
//
//int main() {
//	while (1) {
//		vector<int > v;
//		int N, D;
//		cin >> N >> D;
//		if (N < 0) {
//			return 0;
//		}
//		else {
//			int sum = 0, temp = 0, digit = 0, i = 0;
//			int K = N, length = 0, reverse = 0;
//			while (K) {
//				length++;
//				v.emplace_back(K % 10);
//				K = K / 10;
//			}
//			for (int i = 0; i < length; i++) { //��ת�����������
//				reverse += v[i] * (int)pow(10, length - i - 1);
//			}
//			i = 0;
//			while (reverse) {             //�������ģ��ǲ�������
//				digit = reverse % 10;
//				sum += digit * (int)pow(D, i);
//				i++;
//				reverse = reverse / 10;
//			}
//			bool flag = 1;
//			for (int i = 2; i < sum; i++) { //�ж��ǲ�������  35/3
//				if ((sum / i)* i == sum) {  //������
//					flag = 0;
//				}
//			}
//			if (flag == 0) {
//				printf("No\n");
//			}
//			else {
//				printf("Yes\n");
//			}
//		}
//	}
//}