//#include <algorithm>
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int N;
//
//struct Student {
//	string name, id;
//	int grade;
//};
//
//Student stu[10001];
//
//bool cmp(Student a, Student b) {
//	return a.grade > b.grade;
//}
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		char name[11], id[11];
//		int grade;
//		scanf("%s %s %d", name, id, &grade);
//		stu[i].name = name;
//		stu[i].id = id;
//		stu[i].grade = grade;
//	}
//	int grade1, grade2;
//	cin >> grade1 >> grade2;
//	sort(stu, stu + N, cmp);
//	int sum = 0;
//	for (int i = 0; i < N; i++) {
//		if (grade1 <= stu[i].grade && stu[i].grade <= grade2) {
//			cout << stu[i].name << " " << stu[i].id << endl;
//			sum++;
//		}
//	}
//	if (sum == 0)cout << "NONE";
//}