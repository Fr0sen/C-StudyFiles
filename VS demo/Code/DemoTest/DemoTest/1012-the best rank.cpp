//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <algorithm>
//#include <cstdio>
//
//using namespace std;
//
//struct Student {
//	int ID, C, M, E, A, RA, RC, RM, RE, num;
//	string type;
//};
//
//int main() {
//	//输入
//	int N, M, rank = 1;
//	float avg = 0;
//	cin >> N >> M;
//	Student stu[2001],stuM[2001],stuP[2001];
//	for (int i = 0; i < N;i++) {
//		cin >> stu[i].ID >> stu[i].C >> stu[i].M >> stu[i].E;
//		avg = avg + stu[i].C + stu[i].M + stu[i].E;
//		stu[i].A = (int)avg / 3;
//		avg = 0;
//	}
//	for (int i = 0; i < M; i++) {
//		cin >> stuM[i].ID;
//	}
//	//计算RA,C,M,E,TYPE
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (stu[i].C < stu[j].C) {
//				rank++;
//			}
//		}
//		stu[i].RC = rank;
//		rank = 1;
//		for (int j = 0; j < N; j++) {
//			if (stu[i].M < stu[j].M) {
//				rank++;
//			}
//		}
//		stu[i].RM = rank;
//		rank = 1;
//		for (int j = 0; j < N; j++) {
//			if (stu[i].E < stu[j].E) {
//				rank++;
//			}
//		}
//		stu[i].RE = rank;
//		rank = 1;
//		for (int j = 0; j < N; j++) {
//			if (stu[i].A < stu[j].A) {
//				rank++;
//			}
//		}
//		stu[i].RA = rank;
//		rank = 1;
//	}
//	for (int i = 0; i < N; i++) {
//		if (stu[i].RE <= stu[i].RA && stu[i].RE <= stu[i].RC && stu[i].RE <= stu[i].RM) {
//			stu[i].type = 'E';
//			stu[i].num = stu[i].RE;
//		}
//		if (stu[i].RM <= stu[i].RA && stu[i].RM <= stu[i].RC && stu[i].RM <= stu[i].RE) {
//			stu[i].type = 'M';
//			stu[i].num = stu[i].RM;
//		}
//		if (stu[i].RC <= stu[i].RA && stu[i].RC <= stu[i].RM && stu[i].RC <= stu[i].RE) {
//			stu[i].type = 'C';
//			stu[i].num = stu[i].RC;
//		}
//		if (stu[i].RA <= stu[i].RC && stu[i].RA <= stu[i].RM && stu[i].RA <= stu[i].RE) {
//			stu[i].type = 'A';
//			stu[i].num = stu[i].RA;
//		}
//	}
//	//计算结束,输出M
//	for (int i = 0; i < M; i++) {
//		stuM[i].num = 0;
//		for (int j = 0; j < N; j++) {
//			if (stuM[i].ID == stu[j].ID) {
//				stuM[i] = stu[j];
//			}
//		}
//	}
//	for (int i = 0; i < M; i++) {
//		if (stuM[i].num == 0) {
//			printf("N/A\n");
//		}
//		else {
//			printf("%d %s\n", stuM[i].num, stuM[i].type.c_str());
//		}
//	}
//}