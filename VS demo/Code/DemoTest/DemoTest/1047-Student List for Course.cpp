//#include <iostream>
//#include <algorithm>
//#include <cstdio>
//#include <vector>
//using namespace std;
//int N, K;   //1-K±êºÅµÄ¿Î³ÌºÅ
//
//vector<string> v[2501] = {};
//bool cmp(string a, string b) {
//	return a < b;
//}
//
//int main() {
//	scanf("%d%d", &N, &K);
//	for (int i = 1; i <= N; i++) {
//		string name;
//		int sum_course;
//		char c[4];
//		scanf("%s %d", c, &sum_course);
//		name = c;
//		for (int j = 0; j < sum_course; j++) {
//			int num;
//			scanf("%d", &num);
//			v[num].emplace_back(name);
//		}
//	}
//	/*for (int i = 1; i <= K; i++) {
//		sort(v[i].begin(), v[i].end(),cmp);
//	}*/
//	sort(v->begin(), v->end());
//	for (int i = 1; i <= K; i++) {
//		cout << i << " " << v[i].size() << endl;
//		for (int j = 0; j < v[i].size(); j++) {
//			cout << v[i][j] << endl;
//		}
//	}
//}