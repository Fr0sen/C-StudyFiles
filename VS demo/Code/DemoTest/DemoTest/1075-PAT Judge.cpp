//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <string>
//using namespace std;
//int N, M, K, rank_pos = 1;
//int grade[6];
//struct Stu 
//{
//	int grades[6]={-2,-2,-2,-2,-2,-2};
//	int sum = 0;
//	int id;
//	int rank;
//	int perferct_solve = 0;
//};
//Stu student[10001];
//bool cmp(Stu a, Stu b) {
//	if (a.sum == b.sum) {
//		return a.perferct_solve > b.perferct_solve;
//	}
//	else return a.sum > b.sum;
//	
//}
//int main() 
//{
//	cin >> N >> M >> K;
//	int id, grade_id, score;
//	for (int i = 1; i <= N; i++) {
//		student[i].id = i;
//	}
//	for(int i =1;i<=M;i++){
//		scanf("%d", &grade[i]);
//	}
//	for (int i = 0; i < K; i++) {
//		scanf("%d %d %d", &id, &grade_id, &score);
//		if (score == grade[grade_id]) {
//			if (student[id].grades[grade_id] != grade[grade_id])
//				student[id].perferct_solve++;
//		}
//		if (student[id].grades[grade_id] == -2) {
//			if (score == -1) {
//				student[id].grades[grade_id] = -1;
//			}
//			else {
//				student[id].sum += score;
//				student[id].grades[grade_id] = score;
//			}
//		}
//		else if (score > student[id].grades[grade_id]){
//			student[id].sum -= student[id].grades[grade_id];
//			student[id].grades[grade_id] = score;
//			student[id].sum += score;
//		}
//	}
//	sort(student + 1, student + N + 1, cmp);
//	if (student[1].sum != 0) {
//		student[1].rank = 1;
//		rank_pos++;
//		for (int i = 2; i <= N; i++, rank_pos++) {
//			if (student[i].sum == 0)break;
//			if (student[i].sum == student[i - 1].sum) {
//				student[i].rank = student[i - 1].rank;
//			}
//			else student[i].rank = rank_pos;
//		}
//	}
//	for (int i = 1; i < N; i++) {
//		if (student[i].sum == 0)break;
//		printf("%d %05d %d", student[i].rank, student[i].id, student[i].sum);
//		for (int j = 1; j <= M; j++) {
//			if (student[i].grades[j] == -2) {
//				cout << " -";
//			}
//			else if (student[i].grades[j] == -1) {
//				cout << " 0";
//			}
//			else cout << " " << student[i].grades[j];
//		}
//		cout << endl;
//	}
//}