//#include <algorithm>
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int N, M;
//int distance1[1001];
//int sumDistance = 0;
//int ans[1001];
//
//int main() {
//	cin >> N;
//	for (int i = 1; i <=N; i++) {
//		cin >> distance1[i];
//		sumDistance += distance1[i];
//	}
//	cin >> M;
//	for (int i = 0; i < M; i++) {
//		int left, right;
//		cin >> left >> right;
//		if (left == right) {
//			ans[i] = 0;
//		}
//		else if (left < right) {
//			int dis = 0;
//			for (int j = left; j < right; j++) {
//				dis += distance1[j];
//			}
//			if (dis < sumDistance - dis) {
//				ans[i] = dis;
//			}
//			else ans[i] = sumDistance - dis;
//		}
//		else {
//			int t;
//			t = left;
//			left = right;
//			right = t;
//			int dis = 0;
//			for (int j = left; j < right; j++) {
//				dis += distance1[j];
//			}
//			if (dis < sumDistance - dis) {
//				ans[i] = dis;
//			}
//			else ans[i] = sumDistance - dis;
//		}
//	}
//	for (int i = 0; i < M; i++) {
//		cout << ans[i] << endl;
//	}
//}