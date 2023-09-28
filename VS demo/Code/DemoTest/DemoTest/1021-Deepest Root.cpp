////#include <cstdio>
////#include <iostream>
////#include <vector>
////
////using namespace std;
////
////
////vector<int> v[10001];
////int N;
////int deepth[10001];
////int root[10001];
////
////int main() {
////	cin >> N;
////	for (int i = 0; i < N-1; i++) {
////		int j, p;
////		cin >> j >> p;
////		v[j].emplace_back(p);//邻居
////		v[p].emplace_back(j);//邻居
////	}
////	for (int i = 1; i <= N; i++) { //1做根结点
////		int deep = 1;
////		if (v[i].size() != 0) {
////			deepth[i] = deep;
////			deep++;
////			for (int j = 0; j < v[i].size(); j++) {
////				deepth[v[i][j]] = deep;
////			}
////			for (int k = 1; k <= N; k++) {
////				if (deepth[k] == deep) {
////					
////				}
////			}
////		}
////		root[i] = deep; //i为根的时候最大的深度
////	}
////}
//
//#include <cstdio>
//#include <iostream>
//#include <vector>
//#include <set>
//
//using namespace std;
//vector<int> v[10001];
//int visited[10001];//是否被遍历到
//vector<int> farthest_point;
//int maxdis = 0;
//set<int> final_answer;
//void dfs(int cur) 
//{
//	if (visited[cur])return;  //及时止损	防止超时
//	visited[cur] = 1;
//	for (int i : v[cur]) {
//		dfs(i);
//	}
//
//}
//
//void dfs2(int cur, int depth) {
//	if (visited[cur]) return;
//	visited[cur] = 1;
//	if (depth > maxdis) {
//		maxdis = depth;
//		farthest_point.clear();
//		farthest_point.emplace_back(cur);
//	}
//	else if (depth==maxdis) {
//		farthest_point.emplace_back(cur);//两个深度相同的结点
//	}
//	for (int i : v[cur]) {
//		dfs2(i, depth + 1);
//	}
//}
//
//int main() 
//{
//	int N,i,j,k;
//	cin >> N;
//	for (i = 1; i < N; i++) {
//		cin >> j >> k;
//		v[j].emplace_back(k);
//		v[k].emplace_back(j);
//	}
//	//先判断这个图中有几个连通分量！
//	for (i = 1; i <= N; i++)visited[i] = 0;
//	int count = 0;
//	for (i = 1; i <= N; i++) {
//		if (!visited) {
//			count++;
//			dfs(i);
//		}
//	}
//	if (count != 1) {
//		//不是树
//		printf("Error: %d components", count);
//	}
//	else {
//		//是树  ,,,,,,,,,  用两次DFS，找距离差距最大的两点即可。
//		for (i = 1; i <= N; i++)visited[i] = 0;
//		dfs2(1, 0);//第一次dfs2
//		for (int each : farthest_point)final_answer.insert(each);//set中保存了最右侧的所有答案
//
//		farthest_point.clear();
//		maxdis = 0;
//		for (i = 1; i <= N; i++)visited[i] = 0;
//		dfs2(*final_answer.begin(), 0); //第二次dfs2
//		for (int each : farthest_point)final_answer.insert(each);//set中保存了最右侧的所有答案
//
//		for (int each : final_answer) {
//			cout << each<<'\n';
//		}
//	}
//}