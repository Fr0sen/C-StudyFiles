//#include <iostream>
//#include <cstdio>
//#include <string>
//#include <cctype>
//#include <stack>
//using namespace std;
//int N, M, K;
//int a[1001][1001], b[1001];
//
//bool isAdjacent(int i, int j, int before) {//before=3  2
//	int poi;
//	bool flag = true;
//	for (int k = a[i][j] + 1; k < before; k++) {
//		if (b[k] == 1)return false;	//1是这个数还没有被输出
//	}
//	return true;
//}
//
//int Before(int i, int j) {
//	int sum = 0;
//	for (int k = 1; k < a[i][j]; k++) {
//		if (b[k] == 1)sum++;
//	}
//	return sum;
//}
//
//int main() {
//	cin >> N >> M >> K;
//	for (int i = 1; i <= M; i++) {
//		b[i] = 1;
//	}
//	for(int i =0;i<K;i++){
//		for (int j = 0; j < M; j++) {
//			cin >> a[i][j];
//		}
//	}
//	int before;
//	for (int i = 0; i < K; i++) {
//		before = a[i][0];
//		bool flag = true;
//		for (int j = 0; j < M; j++) {
//			//上一个输出是否是挨着的，
//			if (before > a[i][j]) {
//				if (!isAdjacent(i, j, before))flag = false;
//			}
//
//			//统计前面还有几个在栈里面，都入栈
//			int fff = Before(i, j);
//			if (fff + 1 > N)flag = false;
//			b[a[i][j]] = 0;
//			before = a[i][j];
//		}
//		if (flag)cout << "YES\n";
//		else cout << "NO\n";
//		for (int i = 1; i <= M; i++) {
//			b[i] = 1;
//		}
//	}
//}
