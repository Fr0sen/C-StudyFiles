////#include <iostream>
////#include <cstdio>
////#include <cctype>
////#include <queue>
////#include <algorithm>
////using namespace std;
////
////struct Ply
////{
////	int arrTime[6];    //
////	int arrTimeInt;
////	int vip, plyTime;
////};
////
////struct Table
////{
////
////};
////
////Ply players[10001];
////int Tables[101] = { 0 };
////queue<Ply> que;
////
////bool cmp(Ply a, Ply b) {
////	return a.arrTimeInt < b.arrTimeInt;
////}
////
////int main() {
////	int N,tablesNumbers,VipNumbers;
////	cin >> N;
////	for (int i = 0; i < N; i++) {
////		for (int j = 0; j < 8; j++) {
////			if (j != 2 && j != 5) {
////				cin >> players[i].arrTime[j];
////			}
////			players[i].arrTimeInt = (players[i].arrTime[0] * 10 + players[i].arrTime[1]) * 3600 + (players[i].arrTime[3] * 10 + players[i].arrTime[4]) * 60 + players[i].arrTime[6] * 10 + players[i].arrTime[7];
////		}
////		cin >> players[i].plyTime >> players[i].vip;
////	}
////	cin >> tablesNumbers >> VipNumbers;
////	for (int i = 1; i <= tablesNumbers; i++) {  //1=[1] 2=[2]  3=[1];
////		Tables[i] = 1;
////	}
////	if (VipNumbers != 0) {
////		for (int i = 0; i < VipNumbers; i++) {
////			int j;
////			cin >> j;
////			Tables[j] = 2;   //2
////		}
////	}
////	//输入完毕
////
////	sort(players, players + N, cmp);
////	int waitTime = 0;
////	int tableUse[101] = { 0 };
////	int sumTableUse = 0;
////	//进行排队       21点之后就关门了   20:52:00 10 0
////	for (int time = 8 * 60 * 60; time <= 21 * 60 * 60; time++) {
////		//入队
////		for (int j = 0; j < N; j++) {
////			if (players[j].arrTimeInt == time && players[j].arrTimeInt+players[j].plyTime*60<=21*60*60) {
////				que.push(players[j]);
////			}
////		}
////		
////		//服务
////		for (int i = 1; i <= tablesNumbers; i++) {
////			if (tableUse[i] != 0) {
////				tableUse[i]--;
////			}
////		}
////
////		//走
////		if (!que.empty()) {
////			for (int i = 1; i <= tablesNumbers; i++) {
////				if (tableUse[i]==0) {//如果有空的桌子
////					sumTableUse++;
////					Ply p = que.front();
////					que.pop();
////					tableUse[i] = p.plyTime * 60;
////				}
////			}
////		}
////		waitTime += que.size();
////	}
////		
////}
//
//#include <cstdio>
//#include <iostream>
//#include <cctype>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <queue>
//#include <vector>
//
//
//using namespace std;
//
//struct player {
//	int come_time, play_time, serve_time=0, leave_time;
//	int	isvip;
//
//};
//
//struct table
//{
//	int count = 0, serve = -1;
//	int isvip = 0;
//};
//
//player p[10000];
//table t[101];
//vector<int> v;
//
//bool comp(player x, player y) {
//	return x.come_time < y.come_time;
//}
//
//void printtime(int Time) {
//	printf("%02d:%02d:%02d ", Time / 3600, Time % 3600 / 60, Time % 60);
//}
//
//int main() {
//	int N, K, M, i, j, k;//N人数 ,K桌子数量,M会员桌子
//	cin >> N;//处理数据很讲究，不要着急！！！！！！！！！！！！！！！！！！！！！
//	for (i = 0; i < N; i++) {
//		int hh, mm, ss;
//		char c;
//		cin >> hh >> c >> mm >> c >> ss >> p[i].play_time >> p[i].isvip;
//		p[i].come_time = hh * 3600 + mm * 60 + ss;
//		p[i].play_time *= 60;
//		if (p[i].play_time > 7200)p[i].play_time = 7200;
//	}
//	cin >> K >> M;
//	while (M--) {
//		cin >> i;
//		t[i].isvip = 1;
//	}//桌子信息
//
//	sort(p, p + N, comp);
//	queue<int> q1, q2;//q1普通队，q2会员队。
//	int cursor = 0;//p中的光标 每来个人
//	for (int Time = 28800; Time < 75600; Time++) {
//
//		//送客
//		for (i = 1; i <= K; i++) {
//			if (t[i].serve >= 0) {
//				j = t[i].serve;
//				if (p[j].leave_time == Time) {
//					t[i].serve = -1;
//				}
//			}
//		}
//
//		//入队
//		while (cursor < N && p[cursor].come_time == Time) {
//			q1.push(cursor);
//			if (p[cursor].isvip)q2.push(cursor);
//			cursor++;
//		}
//		
//		//迎客
//		while (q2.size() && p[q2.front()].serve_time != 0)q2.pop();
//		for (i = 1; i <= K; i++) {//会员桌子
//			if (!t[i].isvip)continue;
//			if (t[i].serve < 0) { //如果没人服务，则让q2中的vip进来
//				if (q2.size()) {
//					j = q2.front();
//					v.emplace_back(j);
//					t[i].serve = j;
//					t[i].count++;
//					p[j].serve_time = Time;
//					p[j].leave_time = Time + p[j].play_time;
//					while (q2.size() && p[q2.front()].serve_time != 0)q2.pop();
//				}
//			}
//		}
//
//		//非会员
//		while (q1.size() && p[q1.front()].serve_time != 0)q1.pop();
//		for (i = 1; i <= K; i++) {
//			if (t[i].serve < 0) { 
//				if (q1.size()) {
//					j = q1.front();
//					v.emplace_back(j);
//					t[i].serve = j;
//					t[i].count++;
//					p[j].serve_time = Time;
//					p[j].leave_time = Time + p[j].play_time;
//					while (q1.size() && p[q1.front()].serve_time != 0)q1.pop();
//				}
//			}
//		}
//
//	}
//	//开始输出
//
//	for (int each : v) {
//		printtime(p[each].come_time);
//		printtime(p[each].serve_time);
//		cout << (p[each].serve_time - p[each].come_time + 30) / 60;
//		cout << endl;
//	}
//	for (i = 1; i <= K; i++) {
//		cout << t[i].count;
//		if (i < K)cout << ' ';
//	}
//
//}