//#define _CRT_SECURE_NO_WARNINGS 1;
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int N,a[100],sumTime;
//	cin >> N;
//	sumTime = 5 * N;
//	for (int i = 0; i < N; i++) {
//		cin >> a[i];
//	}
//	for (int i = 0; i < N; i++) {
//		if (i == 0) {
//			sumTime += 6 * a[i];
//		}
//		else if (a[i] > a[i - 1]) {
//			sumTime += 6 * (a[i] - a[i - 1]);
//		}
//		else {
//			sumTime += 4 * (a[i - 1] - a[i]);
//		}
//	}
//	cout << sumTime;
//}