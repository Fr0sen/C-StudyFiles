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
////		v[j].emplace_back(p);//�ھ�
////		v[p].emplace_back(j);//�ھ�
////	}
////	for (int i = 1; i <= N; i++) { //1�������
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
////		root[i] = deep; //iΪ����ʱ���������
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
//int visited[10001];//�Ƿ񱻱�����
//vector<int> farthest_point;
//int maxdis = 0;
//set<int> final_answer;
//void dfs(int cur) 
//{
//	if (visited[cur])return;  //��ʱֹ��	��ֹ��ʱ
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
//		farthest_point.emplace_back(cur);//���������ͬ�Ľ��
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
//	//���ж����ͼ���м�����ͨ������
//	for (i = 1; i <= N; i++)visited[i] = 0;
//	int count = 0;
//	for (i = 1; i <= N; i++) {
//		if (!visited) {
//			count++;
//			dfs(i);
//		}
//	}
//	if (count != 1) {
//		//������
//		printf("Error: %d components", count);
//	}
//	else {
//		//����  ,,,,,,,,,  ������DFS���Ҿ������������㼴�ɡ�
//		for (i = 1; i <= N; i++)visited[i] = 0;
//		dfs2(1, 0);//��һ��dfs2
//		for (int each : farthest_point)final_answer.insert(each);//set�б��������Ҳ�����д�
//
//		farthest_point.clear();
//		maxdis = 0;
//		for (i = 1; i <= N; i++)visited[i] = 0;
//		dfs2(*final_answer.begin(), 0); //�ڶ���dfs2
//		for (int each : farthest_point)final_answer.insert(each);//set�б��������Ҳ�����д�
//
//		for (int each : final_answer) {
//			cout << each<<'\n';
//		}
//	}
//}