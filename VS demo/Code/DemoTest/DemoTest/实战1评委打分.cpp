//#include<cstdio>
//#include<iostream>
//#include <algorithm>
//#include <vector>
//#include <ctime> //ϵͳʱ�������
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
//		string name = "ѡ��:";
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
//		cout << "ѡ��:" << it->m_Name << " " << "���:" << endl;
//
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
//			cout << *dit << " ";
//		}
//		cout << endl;
//		//����
//		sort(d.begin(), d.end());
//		//ȥ����߷ֺ���ͷ�
//		d.pop_back();
//		d.pop_front();
//
//		//ȡƽ����
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
//		cout << "������" << it->m_Name << "ƽ����" << it->m_Score << endl;
//	}
//}
//
//
//int main() {
//	//��һ�����������
//	srand((unsigned int)time(NULL));//ÿ�ζ������
//	vector<Person> v;
//	createPerson(v);
//	setScore(v);
//	showScore(v);
//}