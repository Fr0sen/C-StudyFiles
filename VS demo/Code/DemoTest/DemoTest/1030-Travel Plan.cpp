////#include <cstdio>
////#include <iostream>
////#include <cctype>
////#include <string>
////#include <vector>
////#include <stack>
////
////using namespace std;
////struct City{
////	int length, cost;
////};
////
////City city[501][501];
////stack<int> sta[501];  //ÿ����ջ
////vector<City> route[10000];//��¼����·��
////int visited[501];
////
////int main() {
////	int N, M, start_city, end_city;
////	cin >> N >> M >> start_city >> end_city;
////	while (M--)
////	{
////		int a, b,length,cost;
////		cin >> a >> b >> length >> cost;
////		city[a][b].length = length;
////		city[b][a].length = length;
////		city[a][b].cost = cost;
////		city[b][a].cost = cost;
////	}
////	sta[start_city].push(start_city);
////	while (sta[start_city].size()) {
////		//��ջ
////		int nowCity;
////		nowCity = sta[start_city].top();
////
////
////		//����
////
////		//��ջ
////	}
////}
//
//#include <cstdio>
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int N, M, S, D, dis[500][500], cost[500][500];
//vector<int> v[500];
//int mindis[500];
//vector<int> path, final_ans;
//int mindistoD=10000000, mincosttoD;
//
//void dfs(int curcity,int curdis,int curcost)//�Ƿ���� 
//{
//	if (curdis > mindis[curcity])return;//��ʱֹ��
//	path.emplace_back(curcity);
//	if (curcity == D) {  //����Ŀ�ĵ�
//		if (curdis < mindistoD || (curdis == mindistoD && curcost < mincosttoD)) {
//			final_ans = path;
//			mindistoD = mindis[D] = curdis;
//			mincosttoD = curcost;
//		}
//	}
//	else {
//		if (curdis < mindis[curcity])mindis[curcity] = curdis;
//		for (int each : v[curcity]) {
//			dfs(each, curdis + dis[curcity][each], curcost + cost[curcity][each]); 
//		}
//	}
//	path.pop_back();
//}
//
//int main()  //dfs��ʽ
//{  
//	int i, j, k, l;
//	cin >> N >> M >> S >> D;
//	while (M--) {
//		cin >> i >> j >> k >> l;
//		v[i].emplace_back(j);
//		v[i].emplace_back(j);
//		dis[i][j] = dis[j][i] = k;;
//		cost[i][j] = cost[j][i] = l;
//	}
//
//	for (i = 0; i < N; i++) mindis[i] = 10000000;
//	dfs(S, 0, 0);
//
//	for (int each : final_ans) {
//		cout << each << ' ';
//	}
//	cout << mindistoD << ' ' << mincosttoD;
//}