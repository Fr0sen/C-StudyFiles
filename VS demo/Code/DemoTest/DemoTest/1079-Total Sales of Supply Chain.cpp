//#include <iostream>
//#include <string>
//#include <cstdio>
//#include <vector>
//using namespace std;
//struct node {
//	vector<int> child;
//	int amount;
//};
//
//node n[100000];
//int N;
//double P, r;
//double sum = 0;
//
//
//void dfs(int cur, double cur_danjia) {
//	if(n[cur].child.size()){//非叶节点
//		cur_danjia *= (1 + r / 100);
//		for(int each:n[cur].child){
//			dfs(each, cur_danjia);
//		}
//	}
//	else {
//		sum += n[cur].amount * cur_danjia;
//	}
//}
//
//
//int main() {
//	int i, j, k;
//	cin >> N >> P >> r;
//	for (i = 0; i < N; i++) {
//		cin >> j;
//		if (j) {
//			while (j--) {
//				cin >> k;
//				n[i].child.emplace_back(k);
//			}
//		}
//		else {
//			cin >> n[i].amount;
//		}
//	}//输入
//
//	dfs(0, P);
//	printf("%.1f", sum);
//}
//
