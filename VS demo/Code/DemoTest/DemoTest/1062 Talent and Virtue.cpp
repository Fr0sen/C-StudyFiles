//#include <cstdio>
//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//using namespace std;
//int N, L, H;
//struct Student {
//	int ID_Number, Virtue_Grade, Talent_Grade;
//};
//Student stu[10001];
//vector<Student> sag;
//vector<Student> nobleman;
//vector<Student> foolman;
//vector<Student> smallman;
//bool cmpsag(Student a, Student b) {
//	return a.Talent_Grade + a.Virtue_Grade > b.Talent_Grade + b.Virtue_Grade;
//}
//
//int main() {
//	cin >> N >> L >> H;
//	int sum = N;
//	for (int i = 0; i < N; i++) {
//		cin >> stu[i].ID_Number >> stu[i].Virtue_Grade >> stu[i].Talent_Grade;
//		if (stu[i].Virtue_Grade < stu[i].Talent_Grade)smallman.emplace_back(stu[i]);
//		//else if ((stu[i].Talent_Grade < L && stu[i].Virtue_Grade >= L) || (stu[i].Virtue_Grade < L && stu[i].Talent_Grade >= L)) sum--;
//		else if (stu[i].Virtue_Grade >= H && stu[i].Talent_Grade >= H)sag.emplace_back(stu[i]);
//		else if (stu[i].Virtue_Grade >= H && L <= stu[i].Talent_Grade < H)nobleman.emplace_back(stu[i]);
//		else if (stu[i].Talent_Grade < L || stu[i].Virtue_Grade < L)sum--;
//	}
//	sort(sag.begin(), sag.end(), cmpsag);
//	sort(nobleman.begin(), nobleman.end(), cmpsag);
//	sort(foolman.begin(), foolman.end(), cmpsag);
//	sort(smallman.begin(), smallman.end(), cmpsag);
//	cout << sum << endl;
//	for (int i = 0; i < sag.size(); i++) {
//		cout << sag[i].ID_Number << " " << sag[i].Virtue_Grade << " " << sag[i].Talent_Grade << endl;
//	}
//	for (int i = 0; i < nobleman.size(); i++) {
//		cout << nobleman[i].ID_Number << " " << nobleman[i].Virtue_Grade << " " << nobleman[i].Talent_Grade << endl;
//	}
//	for (int i = 0; i < foolman.size(); i++) {
//		cout << foolman[i].ID_Number << " " << foolman[i].Virtue_Grade << " " << foolman[i].Talent_Grade << endl;
//	}
//	for (int i = 0; i < sag.size(); i++) { 
//		cout << smallman[i].ID_Number << " " << smallman[i].Virtue_Grade << " " << smallman[i].Talent_Grade << endl;
//	}
//}