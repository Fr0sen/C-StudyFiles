////给出一个图出度大于入度，给出一个图，统计所有出度大于入度的结点。
//
//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//int N, M;
//struct node
//{
//	int ru=0, chu=0;
//	string name;
//};
//
//node id[201];
//string postoid[201];
//
//bool cmp(node a, node b) {
//	return a.name < b.name;
//}
//
//int main() {
//	cin >> N >> M;
//	for (int i = 0; i < M; i++) {
//		int a, b;
//		cin >> a >> b;
//		id[a].chu++;
//		id[b].ru++;
//	}
//	for (int i = 0; i < N; i++) {
//		cin >> postoid[i];
//	}
//	for (int i = 0; i < N; i++) {
//		id[i].name = postoid[i];
//	}
//	sort(id, id + N, cmp);
//	for (int i = 0; i < N; i++) {
//		if (id[i].chu > id[i].ru)cout << id[i].name << endl;
//	}
//}