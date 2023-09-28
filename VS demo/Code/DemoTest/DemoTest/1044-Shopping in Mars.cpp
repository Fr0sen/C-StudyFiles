//#include <cstdio>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//int N, M, diamonds[100001];
//int minMoney = 100000001;
//struct ans {
//	int left, right;
//	int minLost = -1;
//};
//
//ans answer[100001];
//
//
//void initialAnswer() {
//	for (int i = 0; i < 100001; i++) {
//		answer[i].left = -1;
//		answer[i].right = -1;
//	}
//}
//
//bool cmp(ans a, ans b) {
//	return  a.minLost < b.minLost;
//}
//
//int find(int pos) {
//	int sumMoney = 0;
//	for (int i = pos; i < N + 1; i++) {
//		sumMoney += diamonds[i];
//		if (sumMoney == M) {
//			answer[pos].left = pos;
//			answer[pos].right = i;
//			answer[pos].minLost = 0;
//			return sumMoney;
//		}
//		else if (sumMoney > M) {
//			if (sumMoney-M<answer[pos].minLost||answer[pos].minLost==-1) {
//				answer[pos].left = pos;
//				answer[pos].right = i;
//				answer[pos].minLost = sumMoney - M;
//				return sumMoney;
//			}
//			else return sumMoney;
//		}
//	}
//}
//
//int main() {
//	cin >> N >> M;
//	for (int i = 1; i <= N; i++) {
//		cin >> diamonds[i];
//	}
//	for (int i = 1; i <= N; i++) {
//		find(i);
//	}
//	sort(answer+1, answer + N+1, cmp);
//	int min = answer[N].minLost;
//	for (int i = 1; i < N + 1; i++) {
//		if (answer[i].minLost > -1) {
//			if (answer[i].minLost <= min)
//				min = answer[i].minLost;
//		}
//	}
//	sort(answer + 1, answer + N + 1, cmp);
//	if (min == -2) {
//		return 0;
//	}
//	else {
//		for (int i = 1; i < N + 1; i++) {
//			if (answer[i].minLost == min) {
//				cout << answer[i].left << "-" << answer[i].right;
//				if (answer[i].minLost == answer[i + 1].minLost) {
//					cout << endl;
//				}
//			}
//		}
//	}
//}