//#include <list>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//void printList(const list<int>& L)
//{
//	for (list<int >::const_iterator it = L.begin(); it != L.end(); it++) {
//		cout << *it << " " << endl;;
//	}
//}
//
//void test01() {
//	list<int> L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	printList(L1);
//	//���乹��
//	list<int> L2(L1.begin(), L1.end());
//	printList(L2);
//
//	//��������
//	list<int>L3(L2);
//	//n��elem
//	list<int> L4(10, 1000);
//
//	L3.assign(L2.begin(), L2.end());
//
//
//}
//
//bool myCompare(int v1,int v2) {
//	return v1 > v2;
//}
//
////����ɾ��
//void test02() {
//	list<int> L;
//	L.push_back(10);
//	L.push_back(10);
//	L.push_back(10);
//	L.push_back(10);
//	L.pop_front();
//		
//	//�Ƴ�
//	L.push_back(10000);
//	printList(L);
//	L.remove(10000);
//	list<int>::iterator it = L.begin();
//	L.erase(++it);//��Ҫ�ṩ������
//	L.insert(it, 415);
//
//	//��������[]�ķ�ʽ����list�����е�Ԫ��
//
//	cout << "��һ��Ԫ��Ϊ��" << L.front() << endl;
//	cout << "���һ��Ԫ��Ϊ��" << L.back() << endl;
//	//��֤�������ǲ�֧��������ʵ�
//	list<int> ::iterator it2 = L.begin();//list������++����û������+
//
//	//��ת������
//	L.reverse();
//	//�������в�֧��������ʵĵ������������ñ�׼���㷨
//	sort(L.begin(), L.end());//��̫��
//
//	L.sort();
//	L.sort(myCompare);//�Զ���
//
//
//}
//list<int>::iterator& operator+(list<int>::iterator& a,int b) {  //������
//	for (int i = 0; i < b; i++) {
//		++a;
//	}
//	return a;
//}
//
//
//void test2() {
//	list<int> L;
//	L.push_front(123);
//	L.push_front(1234);
//	list<int>::iterator it = L.begin();
//	it = it + 1;
//	cout << *it;
//}
//
//
//class Person {
//public:
//	Person(string name, int age, int height) {
//		this->m_Name = name;
//		this->m_Age = age;
//		this->m_Height = height;
//	}
//	string m_Name;
//	int m_Age;
//	int	m_Height;
//};
//
//bool mySort02(Person p1,Person p2) {
//	if (p1.m_Age == p2.m_Age) {
//		return p1.m_Height > p2.m_Height;
//	}else return p1.m_Age < p2.m_Age;
//}
//
////����
//
//void test06() {
//	list<Person> L;
//	Person P1("hansen", 12,180);
//	Person P2("hansen", 10,170);
//
//	L.push_back(P1);
//	L.push_back(P2);
//
//
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++) {
//		cout << "������ " << (*it).m_Name << "���䣺" << (*it).m_Age << "���: " << (*it).m_Height;
//	}
//	//����
//	cout << "�����: " << endl;
//	L.sort(mySort02);
//}
//
//
//
//int main() {
//	test02();
//}
//
//
