//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//
//using namespace std;
//
//struct Bag {
//	double weight, value;
//	double avarage;
//};
//
//int N, SIZE;
//double answer_weight = 0, answer_value = 0;
//Bag bag[1001];
//
//bool cmp(Bag a, Bag b) {
//	return a.avarage > b.avarage;
//}
//
//int main() {
//	cin >> N >> SIZE;
//	for (int i = 0; i < N; i++) {
//		cin >> bag[i].value >> bag[i].weight;
//		bag[i].avarage = bag[i].value / bag[i].weight;
//	}
//	sort(bag, bag + N, cmp);
//	for (int i = 0; i < N; i++) {
//		if (bag[i].weight + answer_weight > SIZE) {
//			cout << answer_value;
//			return 0;
//		}
//		else {
//			answer_weight += bag[i].weight;
//			answer_value += bag[i].value;
//		}
//	}
//	cout << answer_value;
//}