//#include<set>
//#include<iostream>
//using namespace std;
//
//class MyCompare {  //�º���
//public:
//	bool operator()(int v1,int v2) const {//���صķ��ţ��ڶ����ǲ����б�
//		return v1 > v2;
//	}
//
//};
//
//class Person {
//public:
//	Person(string name, int age) {
//		names = name;
//		ages = age;
//	}
//	string names;
//	int ages;
//
//};
//
//class MyComparePerson {  //�º���
//public:
//	bool operator()(const Person& v1, const Person& v2) const {//���صķ��ţ��ڶ����ǲ����б�
//		return v1.ages > v2.ages;
//	}
//
//};
//
//void test02() {
//
//	//�Զ����������Ͷ����ƶ��������
//	set<Person> s;
//	Person p1("li", 12);
//	Person p4("li3", 1212);
//	Person p3("li2", 125);
//	Person p2("li1", 1261);
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//
//	for (set<Person>::iterator it = s.begin(); it != s.end(); it++) {
//		cout << "������ " << it->names << "���䣺 " << it->ages << endl;
//	}	
//
//}
//
//void printSet(const set<int> s1) {
//	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++) {
//		cout << *it << " ";
//	}
//
//	//��������
//}
//
//void test01() {
//	set<int> s1;
//	s1.insert(10);
//	s1.insert(310);
//	s1.insert(1410);
//	s1.insert(1680);
//	s1.insert(10);//���е�Ԫ���ڲ����ʱ����Զ�����
//	//set����������ظ�Ԫ��
//	printSet(s1);
//
//	//��������
//	set<int> s2(s1);
//	printSet(s2);
//	cout << *s2.find(310);//����һ��������,�ý����÷�������
//	cout << s2.count(10);//Ҫô1Ҫô0
//
//}
//
////set��multiset
//void test01() {
//	set<int > s;
//
//	pair<set<int>::iterator, bool>ret = s.insert(10);  //��pair�����Ƿ����ɹ�
//	if (ret.second) {
//		cout << "����ɹ�" << endl;
//	}
//	else cout << "����ʧ��" << endl;
//
//	ret = s.insert(10);
//	if (ret.second) {
//		cout << "����ɹ�" << endl;
//	}
//	else cout << "����ʧ��" << endl;
//	
//	multiset<int> ms;
//	//��������ظ���ֵ
//	ms.insert(10);
//	ms.insert(10);
//
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++) {
//		cout << *it << endl;
//	}
//	cout << endl;
//
//	set<int, MyCompare>s2;//���շº�������������������
//}
//
//
//
//
//int main() {
//
//}