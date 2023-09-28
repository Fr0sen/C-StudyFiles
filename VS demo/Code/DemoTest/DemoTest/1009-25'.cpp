//#include <cstdio>
//#include <iostream>
//using namespace std;
//
//int main() {
//	int K1, a1[20];
//	double d1[20];
//	cin >> K1;
//	for (int i = 0; i < K1; i++) {
//		cin >> a1[i] >> d1[i];
//	}
//	int K2, a2[20];
//	double d2[20];
//	cin >> K2;
//	for (int i = 0; i < K2; i++) {
//		cin >> a2[i] >> d2[i];
//	}
//	double D[2001] = { 0 };
//	for (int i = 0; i < K1; i++) {
//		for (int j = 0; j < K2; j++) {
//			D[a1[i] + a2[j]] += d1[i] * d2[j];
//		}
//	}
//	int nonzero = 0;
//	for(int i =0;i<=2000;i++){
//		if (D[i] != 0)nonzero++;
//	}
//	cout << nonzero;
//	for (int i = 2000; i >= 0; i--) {
//		if (D[i] != 0) {
//			printf(" %d %.1f", i, D[i]);
//		}
//	}
//}