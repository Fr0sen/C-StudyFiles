//#define _CRT_SECURE_NO_WARNINGS 1
//#include <cstdio>
//#include <algorithm>
//#include <iostream>
//using namespace std;
//int N;
//
//struct Student
//{
//	int grade;
//	string name, ID;
//	string sex;
//};
//
//Student student[100001];
//
//bool cmp(Student a, Student b) {
//	return a.grade < b.grade;
//}
//
//int main() {
//	cin >> N;
//	int F = 0, M = 0;
//	for (int i = 0; i < N; i++) {
//		cin>>student[i].name >> student[i].sex >> student[i].ID >> student[i].grade;
//		if (student[i].sex == "M") {
//			M++;
//		}
//		if (student[i].sex == "F") {
//			F++;
//		}
//	}
//	sort(student, student + N, cmp);
//	int gradeM = 101, gradeF = -1,maxF,minM;
//	for (int i = 0; i < N; i++) {
//		if (student[i].grade > gradeF && student[i].sex == "F") {
//			gradeF = student[i].grade;
//			maxF = i;
//			F++;
//		}
//		if (student[i].grade < gradeM && student[i].sex == "M") {
//			gradeM = student[i].grade;
//			minM = i;
//			M++;
//		}
//	}
//	bool flag = 0;
//	if (F != 0) {
//		printf("%s %s\n", student[maxF].name.c_str(), student[maxF].ID.c_str());
//	}
//	else {
//		printf("Absent\n");
//		flag = 1;
//	}
//	if (M != 0) {
//		printf("%s %s\n", student[minM].name.c_str(), student[minM].ID.c_str());
//	}
//	else {
//		printf("Absent\n");
//		flag = 1;
//	}
//	if (flag!=1) {
//		int gradeSubtract = student[maxF].grade - student[minM].grade;
//		if (gradeSubtract < 0) {
//			printf("%d", -gradeSubtract);
//		}
//		else printf("%d", gradeSubtract);
//	}
//	else {
//		printf("NA");
//	}
//
//}