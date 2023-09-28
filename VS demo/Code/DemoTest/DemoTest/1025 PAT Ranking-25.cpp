//#include <cstdio>
//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//struct Student {
//	long long int ID; //若总排名相同，按照ID号输出
//	int final_rank, location_number, local_rank = 1, grade;
//};
//
//Student stu[100000];
//
//bool cmp_ID(Student a, Student b) {
//	return a.ID < b.ID;
//}
//
//bool cmp_grade(Student a, Student b) {
//	return a.grade > b.grade;
//}
//
//bool cmp_final_grade(Student a, Student b) {
//	if (a.grade != b.grade)return a.grade > b.grade;
//	else return a.ID < b.ID;                           //凭什么？？？？？？？？、、           同分的情况下，需要按照考号排序
//	/*return a.final_rank < b.final_rank;*/
//}
//
//
//int main() {
//	int N, K, sum = 0;
//	cin >> N;
//	for (int i = 1; i <= N; i++) { //考场1
//		cin >> K;
//		for (int j = 0; j < K; j++) {
//			sum++;
//			cin >> stu[sum - 1].ID >> stu[sum - 1].grade;  //cin这里有问题啊
//			stu[sum - 1].location_number = i;
//			//if (j == K - 1) {
//			//	sort(stu + (i - 1) * K, stu + (i - 1) * K + j, cmp_grade); //不能乘K啊
//			//	for (int k = 1; k <= K; k++) {
//			//		if (k > 1) {
//			//			if (stu[(i - 1) * K + k - 1].grade == stu[(i - 1) * K + k - 2].grade) {
//			//				stu[(i - 1) * K + k - 1].local_rank = stu[(i - 1) * K + k - 2].local_rank;
//			//			}
//			//			else {
//			//				stu[(i - 1) * K + k - 1].local_rank = k;
//			//			}
//			//		}
//			//		else {
//			//			stu[(i - 1) * K + k - 1].local_rank = 1;//K是考场人数
//			//		}
//			//	}
//			//}
//		}//考场排名都算出来了
//	}
//	//算总排名
//	sort(stu, stu + sum, cmp_ID);
//	sort(stu, stu + sum, cmp_grade);
//	for (int i = 0; i < N; i++) {
//		int rank = 1, lastgrade = -1, lastrank = 1;
//		for (int j = 0; j < sum;j++) {
//			if (stu[j].location_number == i + 1) {
//				if (stu[j].grade == lastgrade) {
//					stu[j].local_rank = lastrank;
//					lastrank = stu[j].local_rank;
//					rank++;
//				}
//				else {
//					stu[j].local_rank = rank;
//					lastgrade = stu[j].grade;
//					lastrank = stu[j].local_rank;
//					rank++;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < sum; i++) {
//		if (i > 0) {
//			if (stu[i].grade == stu[i - 1].grade) {
//				stu[i].final_rank = stu[i - 1].final_rank;
//			}
//			else {
//				stu[i].final_rank = i + 1;
//			}
//		}
//		else {
//			stu[i].final_rank = 1;
//		}
//	}
//	sort(stu, stu + sum, cmp_final_grade);
//	printf("%d\n", sum);
//	for (int i = 0; i < sum; i++) {
//		printf("%013lld %d %d %d\n", stu[i].ID, stu[i].final_rank, stu[i].location_number, stu[i].local_rank);
//	}
//}