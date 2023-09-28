//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int K, a[10001], sum[10001], result = -1,head,tail;
//	cin >> K;
//	for (int i = 1; i <= K; i++) {
//		cin >> a[i];
//	}
//	sum[0] = 0;
//	for (int i = 1; i <= K; i++)sum[i] = sum[i - 1] + a[i]; //找到sum数组
//	int lowest = 0;  //用于定位找前面最小的sum
//	for (int end = 1; end <= K; end++) {
//		if (sum[end] - sum[lowest] > result) {
//			result = sum[end] - sum[lowest];
//			head = a[lowest + 1];
//			tail = a[end];
//		}
//		if (sum[lowest] > sum[end])lowest = end;
//	}
//	if (result < 0)cout << 0 << ' ' << a[1] << ' ' << a[K];
//	else cout << result << ' ' << head << ' ' << tail;
//}