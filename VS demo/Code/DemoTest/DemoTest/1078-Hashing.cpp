//#include <iostream>
//#include <algorithm>
//#include <math.h>
//using namespace std;
//
//int M, N;
//
//int isprime(int p)   //判质数
//{
//	int i, j, k;
//	if (p == 1)return false;
//	for (i = 2; i * i <= p; i++) {
//		if (p % i == 0)return false;
//	}
//	return true;
//}
//int data1[20000] = { 0 };
//int main() {
//	int i, j, k, l;
//	cin >> M >> N;
//	while (isprime(M) == false)M++;
//	for (l = 0;l<N;l++) {
//		cin >> i;
//		//读数
//		for (j = 0; j < M; j++) {
//			k = (i + j * j) % M;
//			if(data1[k]==0){
//				data1[k] = i;
//				if (l)cout << ' ';
//				cout << k;
//				break;
//			}
//			else {
//				continue;
//			}
//		}
//		//尝试
//		if (j == M) {
//			if (l)cout << ' ';
//			cout << '-';
//		}
//		//输出
//	}
//}
