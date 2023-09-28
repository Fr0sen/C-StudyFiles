////#include <cstdio>
////#include <iostream>
////#include <string>
////using namespace std;
////int N;
////int color[201];
////int L[10001];
////
////int main() {
////	cin >> N;
////	for (int i = 0; i < N; i++) {
////		cin >> color[i];
////	}
////	int i = 0;
////	string temp;
////	getchar();
////	getline(cin, temp);
////	int pos = 0;
////	string t = "";
////	for (int i = 0; i < temp.length(); i++) {
////		if (temp[i]!= ' ') {
////			t += temp[i];
////		}
////		else {
////			for (int j = 0; j < t.length(); j++) {
////				L[pos] *= 10;
////				L[pos] += t[j] - '0';
////			}
////			pos++;
////			t = "";
////		}
////	}
////	L[pos] *= 10;
////	L[pos] += t[temp.length()-] - '0';
////}
////动态规划！！！！！！！！！！！！！！！！！！！！！！！！！！
//#include <iostream>
//using namespace std;
//
//int Rank[] = { 0 };
//
//int main() {
//	int N,i,j,k;
//	cin >> N;
//	int M, favorite[201];
//	cin >> M;
//	for (int i = 1; i <= M; i++) {
//		cin >> favorite[i];
//		Rank[favorite[i]] = i;
//	}
//	int L, old[10000];
//	cin >> L;
//	for (i = 0; i < L; i++)cin >> old[i];
//
//	int longest_endwith[201];
//	longest_endwith[i];//以第i个颜色位结尾的最长带
//	for (i = 0; i < L; i++) {
//		if (!Rank[old[i]])continue;
//		j = Rank[old[i]];
//		int max = 0;
//		for (k = 1; k <= j; k++) {
//			if (longest_endwith[k] > max)max = longest_endwith[k];
//		}
//		longest_endwith[j] = max + 1;
//	}
//
//	int ans = 0;
//	for (i = 1; i <= M; i++) {
//		if (ans < longest_endwith[i])ans = longest_endwith[i];
//	}
//	cout << ans;
//}