//////N城市 M解救路 C1当前在的城市  C2解救的城市
////#define _CRT_SECURE_NO_WARNINGS 1
////#include <cstdio>
////#include <iostream>
////#include <vector>
////
////using namespace std;
////
////int N, M, C1, C2;
////int num_of_team[500], dis[500][500],mindis[500],paths,teams;
////vector<int> v[500];
////
////void dfs(int curcity, int curlen, int curteam) {
////	if (curlen > mindis[curcity])return;   //结束条件
////	if (curcity == C2) {//目的地
////		if (curlen == mindis[curcity]) {
////			paths++;
////			if (curteam > teams)teams = curteam;
////		}
////		else {
////			mindis[C2] = curlen;
////			paths = 1;
////			teams = curteam;
////		}
////	}
////	else {
////		if (curlen < mindis[curcity])mindis[curcity] = curlen;
////		for (int i = 0; i < v[curcity].size(); i++) {
////			int j = v[curcity][i];
////			dfs(j, curlen + dis[curcity][j], curteam + num_of_team[j]);
////		}
////	}
////}
////
////int main() {
////	int i, j, k, l;
////	cin >> N >> M >> C1 >> C2;
////	for (i = 0; i < N; i++) cin >> num_of_team[i];//输入每个城市的救援队数量
////	for (i = 0; i < M; i++) {
////		cin >> j >> k >> l;
////		v[j].emplace_back(k);
////		v[k].emplace_back(j);
////		dis[j][k] = dis[k][j] = l;
////	}
////	for (i = 0; i < N; i++)mindis[i] = 100000000;
////	dfs(C1, 0, num_of_team[C1]);
////	cout << paths << " " << teams;
////}
//
////自己做13分
//#include <iostream>
//#include <cstdio>
//#include <vector>
//using namespace std;
//int N, M, C1, C2;
//
//int rescueTeam[501];
//vector<int> city_neighbour[501];
//int distance_city[501][501];
//int mindis[501];
//int path = 0, max_gather_team = 0;
//
//void dfs(int curcity, int final_city, int curdistance, int sum_team) {
//	if (curdistance > mindis[curcity]) {
//		return;
//	}
//	else {
//		mindis[curcity] = curdistance;
//	}
//	if (curcity == final_city) {
//		if (curdistance > mindis[final_city])return;
//		else if (curdistance == mindis[final_city]) {
//			path++;
//			if (sum_team >= max_gather_team) {
//				max_gather_team = sum_team;
//			}
//			else return;
//		}
//		else {
//			path = 1;
//			max_gather_team = sum_team;
//		}
//	}
//	else {
//		if (city_neighbour[curcity].size()) {
//			for(int i =0;i<city_neighbour[curcity].size();i++)
//				dfs(city_neighbour[curcity][i], final_city, curdistance + distance_city[curcity][city_neighbour[curcity][i]], sum_team + rescueTeam[city_neighbour[curcity][i]]);
//		}
//	}
//}
//
//int main() {
//	cin >> N >> M >> C1 >> C2;
//	for (int i = 0; i < N; i++) {
//		cin >> rescueTeam[i];
//	}
//	for (int i = 0; i < M; i++) {
//		int city1, city2, distance12;
//		cin >> city1 >> city2 >> distance12;
//		city_neighbour[city1].emplace_back(city2);
//		city_neighbour[city2].emplace_back(city1);
//		distance_city[city1][city2] = distance12;
//		distance_city[city2][city1] = distance12;
//	}
//	for (int i = 0; i < N; i++) {
//		if (i != C1) {
//			mindis[i] = 2100000000;
//		}
//		else {
//			mindis[C1] = 0;
//		}
//	}
//	dfs(C1, C2, 0, rescueTeam[C1]);//起点，终点，
//	if (path)cout << path << " " << max_gather_team;
//}