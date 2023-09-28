	////#include <cstdio>
	////#include <string>
	////#include <iostream>
	////#include <vector>
	////#include <cctype>
	////using namespace std;
	////vector<int> set[51];
	////int N, t, s;
	////
	////
	////
	////
	////int main() {
	////	cin >> N;
	////	for (int i = 0; i < N; i++) {
	////		cin >> t;
	////		for (int k = 0; k < t; k++) {
	////			cin >> s;
	////			if (find(i, s)) {
	////				set[i].emplace_back(s);
	////			}
	////		}
	////	}
	////}

	//#include <unordered_set>
	//#include <iostream>
	//using namespace std;
	//unordered_set<int> S[51];
	//int main() {
	//	int N, i, j, k;
	//	cin >> N;
	//	for (i = 1; i <= N; i++) {
	//		scanf("%d", &j);
	//		while (j--) {
	//			scanf("%d", &k);
	//			S[i].insert(k);
	//		}
	//	}
	//	int K;
	//	cin >> K;
	//	while (K--) {
	//		scanf("%d%d", &i, &j);
	//		unordered_set<int> temp;
	//		for (int each : S[i])temp.insert(each);
	//		for (int each : S[j])temp.insert(each);
	//		int Nt = temp.size();
	//		int Nc = S[i].size() + S[j].size() - Nt;  //交集的大小.
	//		printf("%.1f%c\n", 100.0* Nc / Nt, '%');//细节转化成double
	//	}
	//}
	////NC distinct
	////NT total