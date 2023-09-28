//#include<cstdio>
//#include<iostream>
//#include <algorithm>
//#include <vector>
//#include <ctime> //系统时间做随机
//#include <deque>
//using namespace std;
//
//class Person {
//public:
//	Person(string name, int score) {
//		this->m_Name = name;
//		this->m_Score = score;
//	}
//	string m_Name;
//	int m_Score;
//};
//
//void createPerson(vector<Person>& v) {
//	string names = "ABCDE";
//	for (int i = 0; i < 5; i++) {
//		string name = "选手:";
//		Person p( name+names[i], 0);
//		v.push_back(p);
//	}
//}
//
//void setScore(vector<Person>& v) {
//	for (vector<Person>::iterator it = v.begin(); it < v.end(); it++) {
//		deque<int> d;
//		for (int i = 0; i < 10; i++) {
//			int score = rand() % 41 + 60;  //60~100
//			d.push_back(score);
//		}
//		cout << "选手:" << it->m_Name << " " << "打分:" << endl;
//
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
//			cout << *dit << " ";
//		}
//		cout << endl;
//		//排序
//		sort(d.begin(), d.end());
//		//去除最高分和最低分
//		d.pop_back();
//		d.pop_front();
//
//		//取平均分
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit < d.end(); dit++) {
//			sum += *dit;
//		}
//		int avg = sum / d.size();
//		(*it).m_Score = avg;
//	}
//}
//
//void showScore(vector <Person>& v) {
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << "姓名：" << it->m_Name << "平均分" << it->m_Score << endl;
//	}
//}
//
//
//int main() {
//	//加一个随机数种子
//	srand((unsigned int)time(NULL));//每次都是随机
//	vector<Person> v;
//	createPerson(v);
//	setScore(v);
//	showScore(v);
//}