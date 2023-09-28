////#include <iostream>
////#include <cstdio>
////#include <algorithm>
////#include <vector>
////using namespace std;
////int N, M;
////int coin[10000];
////bool flag = false;
////vector<int> ans;
////bool find(int pos,int sum) {
////	if (flag == true)return false;
////	if (sum > M) {
////		ans.pop_back();
////		return true;
////	}
////	else if (pos == N) {
////		return true;
////	}
////	else {
////		for (int i = pos + 1; i < N&&sum+coin[i]<=M; i++) { //1 2 3
////			sum += coin[i];
////			ans.emplace_back(coin[i]);
////			if (sum == M) {
////				flag = true;
////				return false;
////			}
////			else if (sum > M) {
////				ans.pop_back();
////				return true;
////			}
////			if (find(i, sum) == true) {
////				ans.pop_back();
////				sum -= coin[i];
////			}
////			else return false;
////		}
////		return true;
////	}
////}
////
////
////int main() {
////	int i, j, k;
////	cin >> N >> M;
////	for (i = 0; i < N; i++)cin >> coin[i];
////	sort(coin, coin + N);
////	for (int i = 0; i < N&&coin[i]<M; i++) {
////		if (flag)break;
////		else {
////			ans.emplace_back(coin[i]);
////			find(i, coin[i]);
////		}
////	}
////	if (flag) {
////		for (int i = 0; i < ans.size(); i++) {
////			if (i==0)cout << ans[i];
////			else cout << " " << ans[i];
////		}
////	}
////	else {
////		cout << "No Solution";
////	}
////}
//
//
//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//using namespace std;
//int N, M;
//int coin[10000];
//vector<int> path;
//
//bool dfs(int cur, int curmoney)
//{
//	path.emplace_back(coin[cur]);
//	if (curmoney == M) {
//		return true;
//	}
//	else {
//		for (int i = cur + 1; i < N && curmoney + coin[i] <= M;) {
//			if(dfs(i, curmoney + coin[i]))return true;
//			else {
//				int j;
//				for (i + 1; j < N && coin[j] == coin[i]; j++);
//				i = j;
//			}
//		}
//	}
//	path.pop_back();
//	return false;
//}
//
//
//int main() 
//{
//	int i, j, k;
//	cin >> N >> M;
//	for (i = 0; i < N; i++)cin >> coin[i];
//	sort(coin, coin + N);
//	for (i = 0; i < N&&coin[i]<=M;) {
//		if (dfs(i, coin[i]) == true) {
//			for (i = 0; i < path.size(); i++) {
//				if (i)cout << " ";
//				cout << path[i];
//			}
//			return 0;
//		}
//		else {
//			for (j = i + 1; j < N && coin[j] == coin[i]; j++);
//			i = j;
//		}
//	}
//	cout << "No Solution";
//}