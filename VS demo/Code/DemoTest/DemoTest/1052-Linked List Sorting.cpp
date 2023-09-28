//#include <string>
//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//int N, root;
//struct Link
//{
//	string address, next;
//	int Key;
//};
//
//Link list[10001];
//
//bool cmp(Link a, Link b) {
//	return a.Key < b.Key;
//}
//
//int main() {
//	cin >> N >> root;
//	for (int i = 0; i < N; i++) {
//		cin >> list[i].address >> list[i].Key >> list[i].next;
//	}
//	sort(list, list + N, cmp);
//	cout << N <<" " << list[0].address << endl;
//	for (int i = 0; i < N - 1; i++) {
//		list[i].next = list[i+1].address;
//	}
//	list[N - 1].next = "-1";
//	for (int i = 0; i < N; i++) {
//		cout << list[i].address <<" " << list[i].Key << " " << list[i].next << endl;
//	}
//}
