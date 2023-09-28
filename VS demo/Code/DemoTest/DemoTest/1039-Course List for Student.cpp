//#define _CRT_SECURE_NO_WARNINGS 1;
//#include <cstdio>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//int n, k;
//vector<int> student[40001];				  //[4]、
//string student_id_to_name[40001] = {""};  //[bob5]
//string name2[40001];
//int find(string name) {
//	for (int i = 0; i < n; i++) {
//		if (name == student_id_to_name[i]) {
//			return i;
//		}
//	}
//}
//
//bool cmp(int a, int b) {
//	return a < b;
//}
//
//int main() {
//	scanf("%d %d", &n, &k);
//	int cursor = 1;
//	while (k--) {
//		int id,sum;
//		scanf("%d %d", &id, &sum);
//		for (int i = 0; i < sum; i++) {
//			char s[10];
//			scanf("%s", s);
//			string name = s;
//			for (int j = 0; j < cursor; j++) {
//				if (student_id_to_name[j] == "") {
//					student_id_to_name[j] = name;
//					student[j].emplace_back(id);//对应的vector放入课程id
//					cursor++;
//					break;
//				}
//				else if (student_id_to_name[j] == name) {
//					student[j].emplace_back(id);//对应的vector放入课程id
//					break;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		char c[10];
//		scanf("%s",c);
//		string namez=c;
//		name2[i] = namez;
//	}
//	for (int i = 0; i < n; i++) {
//		sort(student[i].begin(), student[i].end(), cmp);
//	}
//	for (int i = 0; i < n; i++) {
//		printf("%s %d", name2[i].c_str(), student[find(name2[i])].size());
//		for (int j = 0; j < student[find(name2[i])].size(); j++) {
//			printf(" %d",student[find(name2[i])][j]);
//		}
//		printf("\n");
//	}
//}
////-----------------------23' -------超时
// 
// 
//#include <iostream>
//#include <unordered_map>
//#include <set>
//using namespace std;
//unordered_map<string, set<int>> M;  //一个string对应很多门课程
//int main() {
//	int N, K, i, j, k;
//	scanf("%d %d", &N, &K);
//	for (i = 0; i < K; i++) {
//		scanf("%d %d", &j, &k);
//		while (k--) {
//			string name;
//			char c[10];
//			scanf("%s",c);
//			name = c;
//			M[name].insert(j);
//		}
//	}
//
//	while (N--) {
//		string name;
//		cin >> name;
//		cout << name << ' ' << M[name].size();
//		for (int each : M[name]) {
//			cout << ' ' << each;
//		}
//		cout << endl;
//	}
//}