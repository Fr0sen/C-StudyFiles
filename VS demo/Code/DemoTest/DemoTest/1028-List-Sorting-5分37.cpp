//#include <cstdio>
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//struct Student
//{
//	int grade, ID;
//	string name;
//};
//
//Student stu[100001];
//
//bool cmp1(Student a, Student b) {
//	return a.ID < b.ID;
//}
//
//bool cmp2(Student a, Student b) {
//	if (a.name == b.name) {
//		return a.ID < b.ID;
//	}
//	else return a.name < b.name;
//	
//}
//bool cmp3(Student a, Student b) {
//	if (a.name == b.name) {
//		return a.ID < b.ID;
//	}
//	else return a.grade < b.grade;
//}
//
//int main() {
//	int N, C;
//	cin >> N >> C;
//	for (int i = 0; i < N; i++) {
//		cin >> stu[i].ID >> stu[i].name >> stu[i].grade;
//	}
//	switch (C)
//	{
//	case 1:sort(stu, stu + N, cmp1); break;
//	case 2:sort(stu, stu + N, cmp2); break;
//	case 3:sort(stu, stu + N, cmp3); break;
//	default:
//		break;
//	}
//	for (int i = 0; i < N; i++) {
//		printf("%06d %s %d\n", stu[i].ID, stu[i].name.c_str(), stu[i].grade);
//	}
//}