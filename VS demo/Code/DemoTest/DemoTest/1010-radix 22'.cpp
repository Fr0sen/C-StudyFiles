//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<iostream>
//#include<vector>
//#include<math.h>
//
//using namespace std;
////vector<int> v1, v2;
//
//int main() {
//	//����
//	int a1[100], a2[10000];
//	string N1, N2;
//	int tag, radix, sum1 = 0, sum2 = 0, multi1 = 0, multi2 = 0, radix1 = 1, radix2 = 1;
//	cin >> N1 >> N2 >> tag >> radix;
//	//����
//	if (tag == 1) {//����N1��sum1
//		radix1 = radix;
//		for (int i = N1.size() - 1; i >= 0; i--) {//�����sum1
//			if (N1[i] - 'a' >= 0) {
//				sum1 += ((N1[i] - 'a') + 10) * (int)pow(radix1, multi1);
//				multi1++;
//			}
//			else {
//				sum1 += (N1[i] - '0') * (int)pow(radix1, multi1);
//				multi1++;
//			}
//		}
//		for (; radix2 <= 10000; radix2++) { //�ò�ͬradix�Ա�
//			for (int i = N2.size() - 1; i >= 0; i--) {
//				if (N2[i] - 'a' >= 0) {
//					sum2 += ((N2[i] - 'a') + 10) * (int)pow(radix2, multi2);
//					multi2++;
//				}
//				else {
//					sum2 += (N2[i] - '0') * (int)pow(radix2, multi2);
//					multi2++;
//				}
//			}
//			if (sum1 == sum2) {
//				printf("%d", radix2);
//				return 0;
//			}
//			else {
//				sum2 = 0;
//				multi2 = 0;
//			}
//		}
//		printf("Impossible");
//	}
//	else {//����N2��sum2
//		radix2 = radix;
//		for (int i = N2.size() - 1; i >= 0; i--) {//�����sum1
//			if (N2[i] - 'a' >= 0) {
//				sum2 += ((N2[i] - 'a') + 10) * (int)pow(radix2, multi2);
//				multi2++;
//			}
//			else {
//				sum2 += (N2[i] - '0') * (int)pow(radix2, multi2);
//				multi2++;
//			}
//		}
//		for (; radix1 <= 10000; radix1++) { //�ò�ͬradix�Ա�
//			for (int i = N1.size() - 1; i >= 0; i--) {
//				if (N1[i] - 'a' >= 0) {
//					sum1 += ((N1[i] - 'a') + 10) * (int)pow(radix1, multi1);
//					multi1++;
//				}
//				else {
//					sum1 += (N1[i] - '0') * (int)pow(radix1, multi1);
//					multi1++;
//				}
//			}
//			if (sum1 == sum2) {
//				printf("%d", radix1);
//				return 0;
//			}
//			else {
//				sum1 = 0;
//				multi1 = 0;
//			}
//		}
//		printf("Impossible");
//	}
//
//}