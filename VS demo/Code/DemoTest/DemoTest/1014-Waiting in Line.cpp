//#include <iostream>
//#include <queue>
//#include <stack>
//#include <cstdio>
//
//using namespace std;
//struct custumer {
//	int process_time, leave_time = 0;
//
//};
//int N, M, K, Q;
//custumer c[1001];
//
//int main() {
//	int i, j,cursor=1;//表示黄线外第一个人的编号
//	cin >> N >> M >> K >> Q;
//	queue<int> q[1001];//窗口队列!!!!!
//	for (i = 1; i <= K; i++)cin >> c[i].process_time;
//	for (int Time = 480; Time < 1020; Time++) {
//		for (i = 0; i < N; i++) {                             //
//			if (q[i].size()) {
//				j = q[i].front();
//				if (c[j].leave_time == Time) {//到了当前的时间
//					q[i].pop();
//				}
//			}
//		}
//		//送客
//
//		for (j = 1; j <= M; j++) {
//			for (i = 0; i < N; i++) {
//				if (q[i].size() < j) {
//					if (cursor <= K) {
//						q[i].push(cursor);
//						cursor++;
//					}
//				}
//			}
//		}
//		//入队
//		for (i = 0; i < N; i++) {
//			if (q[i].size()) {
//				j = q[i].front();
//				if (c[j].leave_time == 0) {
//					c[j].leave_time = Time + c[j].process_time;
//				}
//			}
//		}
//		//迎客
//
//	}
//	while (Q--) {
//		cin >> i;
//		if (c[i].leave_time == 0) {
//			cout << "Sorry\n";
//		}
//		else {
//			printf("%02d:%02d\n",c[i].leave_time/60, c[i].leave_time % 60);
//		}
//	}
//}