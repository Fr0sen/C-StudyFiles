//#include <iostream>
//#include <cstdio>
//#include <string>
//using namespace std;
//int N, a[100000], visited[100000] = { 0 };
//int cycle_length;
//
//void dfs(int i) 
//{
//	if (visited[i])return;
//	visited[i] = 1;
//	dfs(a[i]);
//}
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> a[i];
//	}
//	int total = 0;
//	for (int i = 0; i < N; i++) {
//		if (!visited[i]) {
//			if (i != a[i]) {
//				cycle_length = 0;
//				dfs(i);
//				if (i == 0)	total += cycle_length - 1;
//				else total += cycle_length + 1;
//			}
//		}
//	}
//	cout << total;
//}