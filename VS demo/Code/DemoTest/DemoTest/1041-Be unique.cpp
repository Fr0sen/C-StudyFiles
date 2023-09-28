//#include <algorithm>
//#include <unordered_map>
//#include <cstdio>
//#include <iostream>
//#include <vector>
////≥¨ ±¡À
//using namespace std;
//int N;
//vector<int> v;
//
//bool find(int i,int pos) {
//	for (int j = 0; j < N; j++) {
//		if (i == v[j]&&j!=pos) {
//			return false;
//		}
//	}
//	return true;
//}
//
//int main() {
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++) {
//		int a1;
//		scanf("%d", &a1);
//		v.emplace_back(a1);
//	}
//	for (int i = 0; i < N; i++) {
//		if (find(v[i],i)) {
//			printf("%d", v[i]);
//			return 0;
//		}
//	}
//	printf("None");
//}