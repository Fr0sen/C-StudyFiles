//#include<iostream>
//#include<vector>
//
//using namespace std; 
////vector�������ͼ
//int N, M, K, lost, visited[1000];
//vector<int>v[1000];
//
//void dfs(int curcity) {
//	visited[curcity] = 1;
//	for (int i: v[curcity]) {
//		if (i != lost && !visited[i])dfs(i);
//	}
//}
//
//int main() {
//	int i, j, k, l;
//	cin >> N >> M >> K;
//	for (i = 0; i < M; i++) {
//		scanf("%d %d",&j,&k);
//		v[j].emplace_back(k);//������Ϊ�ھ�
//		v[k].emplace_back(j);
//	}
//	while (K--) {
//		cin >> lost;//�����ĳ���
//		for (i = 1; i <= N; i++) {
//			visited[i] = 0;
//		}
//		j = 0;
//		for (i = 1; i <= N; i++) {
//			if (!visited[i] && i != lost) {
//				j++;
//				dfs(i);
//			}
//		}
//		cout << j - 1 << endl;
//	}
//}