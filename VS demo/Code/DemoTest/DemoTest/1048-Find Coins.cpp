//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//
//using namespace std;
//int N, K;
//int value[100001];
//bool cmp(int a, int b) {
//	return a < b;
//}
//int main() {
//	cin >> N >> K;
//	for (int i = 0; i < N; i++) {
//		cin >> value[i];
//	}
//	sort(value, value + N, cmp);
//	bool flag = false;
//	for (int i = 0; i < N - 1; i++) {
//		for (int j = i + 1; j < N; j++) {
//			if (!flag) {
//				if (value[i] + value[j] == K) {
//					cout << value[i] << " " << value[j];
//					flag = true;
//					break;
//				}
//			}
//		}
//	}
//	if(!flag)cout << "No Solution";
//}

