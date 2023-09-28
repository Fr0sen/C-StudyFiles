//#include <iostream>
//#include <cstdio>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//bool cmp_dec(int a, int b) {
//	return a > b;
//}
//
//bool cmp_inc(int a, int b) {
//	return a < b;
//}
//
//int num[4], num_dec[4], num_inc[4],num1,num2,num0;
//int main() {
//	int N;
//	cin >> N;
//	num[0] = N / 1000;
//	num[1] = N % 1000 / 100;
//	num[2] = N % 100 / 10;
//	num[3] = N % 10;
//	num0 = N;
//	/*while (num) {
//	
//	}*/
//	do {
//		sort(num, num + 4, cmp_dec);
//		for (int i = 0; i < 4; i++) {
//			num_dec[i] = num[i];
//		}
//		num1 = num_dec[0] * 1000 + num_dec[1] * 100 + num_dec[2] * 10 + num_dec[3];
//		sort(num, num + 4, cmp_inc);
//		for (int i = 0; i < 4; i++) {
//			num_inc[i] = num[i];
//		}
//		num2 = num_inc[0] * 1000 + num_inc[1] * 100 + num_inc[2] * 10 + num_inc[3];
//		num0 = num1 - num2;
//		printf("%04d - %04d = %04d\n", num1, num2, num0);
//		num[0] = num0 / 1000;
//		num[1] = num0 % 1000 / 100;
//		num[2] = num0 % 100 / 10;
//		num[3] = num0 % 10;
//	} while (num0!=6174&&num0!=0);
//}