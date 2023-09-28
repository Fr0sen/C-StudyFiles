//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <cstdio>
//
//using namespace std;
//int cities[1001][1001];
//int main() {
//	//输入
//	int N, M, K, city1, city2;
//	cin >> N >> M >> K;
//	int checked[1001] = { 0 }, flag[1001] = { 0 };
//	for (int i = 0; i < M; i++) {
//		cin >> city1 >> city2;
//		if (city1 > city2) {
//			int k = 0;
//			k = city1;
//			city1 = city2;
//			city2 = k;
//		}
//		//flag[city1 - 1] = flag[city2 - 1] = 1;
//		cities[city1 - 1][city2 - 1] = 1;//标注道路.上三角矩阵
//	}
//	for (int i = 0; i < K; i++) {
//		int j = 0;
//		cin >> j;
//		checked[j - 1] = j;//标注需要checked城市
//	}
//	//开始计算如果排除这个城市，需要连接几条道路   算法问题很大
//	for (int i = 0; i < K; i++) {
//		int check = 0, sum = 0;
//		check = checked[i] - 1;
//		for (int j = 0; j < N; j++) {
//			if (j != check) {
//				for (int k = j + 1; k < N; k++) {
//					if (k != check) {
//						if (cities[j][k] == 1) {
//							flag[j] = flag[k] = 1;
//						}
//					}
//				}
//			}
//			/*if (j != check) {
//				if (flag[j] == 0) {
//					sum++;
//				}
//			}*/
//		}
//		for (int n = 0; n < K; n++) {
//			if (flag[n] == 1) {
//				sum++;
//			}
//		}
//		//验证一下
//		if (sum == 0) {
//			printf("%d\n", K - sum - 2);
//		}
//		else {
//			printf("%d\n", K - sum - 1);
//		}
//		for (int i = 0; i < 1001; i++) {
//			flag[i] = 0;
//		}
//	}
//	/*for (int i = 0; i < K; i++) {
//		int check = 0, sum = 0;
//		check = checked[i] - 1;
//		for (int j = 1; j < N; j++) {
//			if (j != check) {
//				for (int k = j; k < N; k++) {
//					if (k != check) {
//						if (cities[j][k] == 0) {                                                                                      
//							if (flag[j-1] == 0) {
//								sum++;
//								flag[j - 1] = 1;
//							}
//							if (flag[k-1] == 0) {
//								sum++;
//								flag[k - 1] = 1;
//							}
//						}
//					}
//				}
//			}
//		}
//	}*/
//}