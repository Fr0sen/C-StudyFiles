//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//
//int main() {
//	int N, M, K, Q;
//	cin >> N >> M >> K >> Q;
//	int processingTime[1001], query[1001] = { 0 }, custumerTime[1001] = { 0 };
//	for (int i = 0; i < K; i++) { //1 2 6 4 3 534 2 
//		cin >> processingTime[i];
//	}
//	for (int i = 0; i < Q; i++) { // 3 4 5 6 7
//		cin >> query[i];
//	}
//	//计算时间
//	int StartTime[1001] = { 0 };//N个窗口
//	int type[1001] = {0};
//	int N1 = 0;//当前窗口
//	int minTime;
//	for (int i = 0; i < K; i++) {
//		if (N1 == N) {  //不能等N个人都计算完之后再计算后面人对应的窗口！！！
//			N1 = 0;
//		}if (i >= N * M) {//随时判断i是属于哪个窗口的
//			if (N * M + i < K) {  //(processingTime[i+N]+StartTime[i])
//				type[N * M + i] = i;
//				for (int j = 0; j < N; i++) {
//					if (StartTime[i % N] + processingTime[i] < StartTime[(i + j) % N] + processingTime[i + j]) {
//						type[N * M + i] = i % N;
//					}
//					else if (StartTime[i % N] + processingTime[i] == StartTime[(i + j) % N] + processingTime[i + j]) {
//						if (i % N < i + j % N) {
//							type[N * M + i] = i % N;
//						}
//						else {
//							type[N * M + i] = i + j % N;
//						}
//					}
//				}
//			}
//			custumerTime[i] = StartTime[type[i] % N] + processingTime[i]; // 0+1,0+2;1+6,2+4;6
//			StartTime[i % N] += processingTime[i];  //8:01,8:02
//		}
//		else {
//			custumerTime[i] = StartTime[i % N] + processingTime[i]; // 0+1,0+2;1+6,2+4;6
//			StartTime[i % N] += processingTime[i];  //8:01,8:02
//			if (N * M + i < K) {  //(processingTime[i+N]+StartTime[i])
//				type[N * M + i] = i % N;
//				for (int j = 0; j < N; j++) {
//					if (StartTime[i % N] + processingTime[i] < StartTime[(i + j) % N] + processingTime[i + j]) {
//						type[N * M + i] = i % N;
//					}
//					else if (StartTime[i % N] + processingTime[i] == StartTime[(i + j) % N] + processingTime[i + j]) {
//						if (i % N < i + j % N) {
//							type[N * M + i] = i % N;
//						}
//						else {
//							type[N * M + i] = (i + j) % N;
//						}
//					}
//				}
//			}
//		}
//		
//		
//		N1++;
//	}
//	for (int i = 0; i < Q; i++) {
//		if (custumerTime[query[i]-1] / 60 < 9) {
//			printf("%02d:%02d\n", 8+custumerTime[query[i]-1] / 60, custumerTime[query[i]-1] % 60);
//		}
//		else {
//			if (custumerTime[query[i] - 1] % 60 == 0) {
//				printf("%02d:%02d\n", 8 + custumerTime[query[i] - 1] / 60, custumerTime[query[i] - 1] % 60);
//			}
//			else {
//				printf("Sorry\n");
//			}
//		}
//	}
//}