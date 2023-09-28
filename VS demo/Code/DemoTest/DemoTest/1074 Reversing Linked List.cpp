//#include <iostream>
//#include <cstdio>
//#include <string>
//#include <vector>
//using namespace std;
//struct Num {
//	int add,data,next;
//};
//int first_add, N, K;
//Num num[100001];
//vector<Num> list;
//int main() {
//	cin >> first_add >> N >> K;
//	for (int i = 0; i < N; i++) {
//		cin >> num[i].add >> num[i].data >> num[i].next;
//		if (num[i].add == first_add)list.emplace_back(num[i]);
//	}
//	for (int i = 0; i < N - 1; i++) {
//		for (int j = 0; j < N; j++) {
//			if (list[i].next == num[j].add)list.emplace_back(num[j]);
//		}
//	}
//	int t;
//	for (t = 0; K * (t+1) < N; t++) {
//		for (int j = K * (t + 1) - 1; j > K * t; j--) {
//			printf("%05d %d %05d\n", list[j].add, list[j].data, list[j - 1].add);
//		}
//		if(list[(t+1)*K-1].next==-1)printf("%05d %d -1\n", list[t].add, list[t].data);
//		else printf("%05d %d %05d\n", list[t].add, list[t].data, list[(t+1)*K].add);
//	}
//	for (t += K - 1; t < N; t++) {
//		if (list[t].next == -1)printf("%05d %d -1\n", list[t].add, list[t].data);
//		else printf("%05d %d %05d\n", list[t].add, list[t].data, list[t].next);
//	}
//}