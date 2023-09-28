//#include <iostream>
//using namespace std;
//int N;
//int seats[100001];
//int sumpeople;
//
//bool isprime(int num) {
//	bool flag = false;
//	if (num == 1)return false;
//	if (num == 2)return true;
//	for (int i = 2; i < num; i++) {
//		if (num % i == 0)return false;
//	}
//	return true;
//}
//
//void toleft() {
//	for (int i = 1; i <= sumpeople; i++) {
//		if (seats[i] == 0) {
//			for (int j = i + 1; j <= N; j++) {
//				if (seats[j] != 0) {
//					seats[i] = seats[j];
//					seats[j] = 0;
//					break;
//				}
//			}
//		}
//	}
//}
//
//int main() {  //1 2 3 4 5 6 7 8 9 10
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++) {
//		seats[i] = i;
//	}
//	sumpeople = N;
//	if (sumpeople == 1) {
//		for (int i = 1; i <= N; i++) {
//			if (seats[i] != 0)cout << seats[i];
//		}
//	}
//	/*for (int i = 1; i <= N; i++) {
//		cout << seats[i] << " ";
//	}*/
//	while (sumpeople != 1) {
//		for (int i = 1; i * i <= N; i++) {//让平方位置变成0
//			if (seats[i * i] != 0) {
//				sumpeople--;
//				seats[i * i] = 0;
//				if (sumpeople == 1) {
//					for (int i = 1; i <= N; i++) {
//						if (seats[i] != 0) {
//							cout << seats[i];
//							return 0;
//						}
//					}
//				}
//			}
//		}
//		toleft();
//		if (sumpeople == 1) {
//			for (int i = 1; i <= sumpeople; i++) {
//				if (seats[i] != 0) {
//					cout << seats[i];
//					return 0;
//				}
//			}
//		}
//		for (int i = 1; i <= N; i++) {
//			if (isprime(i)) {
//				if (seats[i] != 0) {
//					sumpeople--;
//					seats[i] = 0;
//					if (sumpeople == 1) {
//						for (int i = 1; i <= sumpeople; i++) {
//							if (seats[i] != 0) {
//								cout << seats[i];
//								return 0;
//							}
//						}
//					}
//				}
//			}
//		}
//		toleft();
//		if (sumpeople == 1) {
//			for (int i = 1; i <= sumpeople; i++) {
//				if (seats[i] != 0) {
//					cout << seats[i];
//					return 0;
//				}
//			}
//		}
//	}
//}