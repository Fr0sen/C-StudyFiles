//#include "circle.h"
//using namespace std;
//#include <string>
//
//class Person {
//	friend ostream& operator<<(ostream& cout, Person& p);
//	
//public:
//
//public:
//	void operator<<(Person p) {//��Ա���������ǲ�̫�е�   ����p3 = p1+p2  <->p3 = p1(p2);
//	}
//	int m_A;
//	int m_B;
//};
//
//
////����ȫ�ֺ������������
//ostream& operator<<(ostream& cout, Person& p) {  //��ʽ���˼�룬��ΪOstreamȫ��ֻ��һ����������Ҫ����,��ʵ������һ������
//	cout << "m_A =" << p.m_A << "m_B = " << p.m_B;
//	return cout;
//}
//
//Person operator+(Person& p1, Person& p2) {//ȫ�ֺ�������
//	Person temp;
//	temp.m_A = p1.m_A + p1.m_A;
//	temp.m_B = p2.m_B + p1.m_B;
//	return temp;
//}
//
//
//int main() {
//	Person p;
//	p.m_A = 10;
//	p.m_B = 10;
//
//	//cout << p << endl<<p;
//}