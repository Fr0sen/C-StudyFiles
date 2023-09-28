//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <string>
//using namespace std;
//int N, L, K;
//int visited[1001] = { 0 };
//int query[1001];
//int answer[1001] = { 0 };
//struct User {
//	vector<int> fans;
//	int ans = 0;
//};
//User user[1001];
//
//void find(int curnode, int level,int mom) 
//{
//	if (level > L)return;
//	for (int i = 0; i < user[curnode].fans.size(); i++) {
//		if (visited[user[curnode].fans[i]] == 1)continue;
//		else {
//			if (user[curnode].fans[i] != mom) {
//				visited[user[curnode].fans[i]] = 1;
//				answer[mom]++;
//				find(user[curnode].fans[i], level + 1, mom);
//			}
//		}
//	}
//}
//
//
//int main() {
//	cin >> N >> L;
//	for (int i = 1; i <= N; i++) {
//		int temp;
//		cin >> temp;
//		for(int j =0;j<temp;j++){
//			int aaaa;
//			cin >> aaaa;
//			user[aaaa].fans.emplace_back(i);
//		}
//	}
//	cin >> K;
//	for (int i = 0; i < K; i++) {
//		cin >> query[i];
//	}
//	for(int i =0;i<K;i++){
//		for (int j = 1; j <= N; j++) {
//			visited[j] = 0;
//		}
//		find(query[i], 1, query[i]);
//	}
//	for (int i = 0; i < K; i++) {
//		cout << answer[query[i]] << endl;
//	}
//}