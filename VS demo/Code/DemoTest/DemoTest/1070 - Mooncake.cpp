//#include <iostream>
//#include <string>
//#include <cstdio>
//#include <algorithm>
//using namespace std;
//
//struct Mooncake {
//	double amount, price;
//	double per_price;
//};
//
//bool cmp(Mooncake a, Mooncake b) {
//	return a.per_price > b.per_price;
//}
//
//int N, M;
//Mooncake mooncake[1001];
//
//int main() {
//	cin >> N >> M;
//	double sum = 0;
//
//	for (int i=0; i < N; i++) {
//		cin >> mooncake[i].amount;
//	}
//	for (int i = 0; i < N; i++) {
//		cin >> mooncake[i].price;
//	}
//	for (int i = 0; i < N; i++) {
//		mooncake[i].per_price = mooncake[i].price / mooncake[i].amount;
//	}
//	
//	sort(mooncake, mooncake + N, cmp);
//	int pos = 0;
//	while (mooncake[pos].amount < M && pos < N) {
//		sum += mooncake[pos].price;
//		M -= mooncake[pos].amount;
//		pos++;
//	}
//	if (pos == N) {
//		printf("%.2f", sum);
//	}
//	else {
//		sum += mooncake[pos].per_price * M;
//		printf("%.2f", sum);
//	}
//}