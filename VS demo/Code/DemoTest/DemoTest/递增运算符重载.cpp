//#include <iostream>
//using namespace std;
//
//class MyInteger {
//
//	friend ostream& operator<< (ostream& cout, MyInteger myint);
//public:
//	MyInteger& operator++() {  //��������������ã��������ʽ��̵�ʱ�����
//		m_Num++;
//		return *this;
//	}	
//
//	MyInteger operator++(int) {//������intռλ�����������ֳ��Ǻ��õ�������,���õ������ܷ�������
//		//�ȼ�¼��ǰ���
//		MyInteger temp = *this;//*this�����þ��Ƕ���������������þ��ǵ�ַ
//		//�ٵ���
//		m_Num++;
//		//�ٷ���֮ǰ�Ľ��
//		return temp;
//	}
//
//	MyInteger() {
//		m_Num = 0;
//	}
//
//private:
//	int m_Num;
//};
//
//ostream& operator<< (ostream& cout, MyInteger myint) {
//	cout << myint.m_Num << endl;
//	return cout;
//}
//
////void test01() {
////	MyInteger myint;
////	cout << ++myint << endl;
////	cout << ++(++myint) << endl;
////	cout << myint << endl;
////}
//
//void test2() {
//	MyInteger myint;
//	cout << myint++<<endl;
//	cout << myint << endl ;
//}
// 
//class Person {
//public:
//	Person(int age) {
//		m_Age = new int(age);
//	}
//
//	~Person() {
//		if (m_Age != NULL) {
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//	Person& operator=(Person& p) {
//		//Ӧ�����ж��Ƿ��������ڶ������������Ҫ���ͷŸɾ���Ȼ�������
//		if (m_Age != NULL) {
//			delete m_Age;
//			m_Age = NULL;
//		}
//		m_Age = new int(*p.m_Age);
//		return p;
//	}
//
//	int* m_Age;
//};
//
//
//void test01() {
//	Person p1(18);
//	Person p2(20);
//	Person p3(20);
//	p3 = p2 = p1;
//
//
//	cout << "p1������Ϊ��" << *p1.m_Age <<endl;
//
//	cout << "p3������Ϊ:" << *p3.m_Age << endl;
//}
//
//int main() {
//	/*MyInteger myint;
//	cout << myint << endl;*/
//	test01();
//}