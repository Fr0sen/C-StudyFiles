//#include <cstdio>
//#include <iostream>
//#include <string>
//#include "swap.h"
//using namespace std;
//
//class Person {
//public:
//	static int m_A ;
//	static void func() {
//		m_A = 105;      //��̬ ��Ա�����ܱ���̬��������
//		//m_B = 200;	   //�Ǿ�̬��Ա�������ܱ���̬��������(����ͨ������ͨ�����ʣ��ȴ���һ���������)
//		cout << "static void func����" << endl;
//	};
//
//private:
//	static void func2() {
//		m_A = 105;      //��̬ ��Ա�����ܱ���̬��������
//		//m_B = 200;	   //�Ǿ�̬��Ա�������ܱ���̬��������(����ͨ������ͨ�����ʣ��ȴ���һ���������)
//		cout << "static void func����" << endl;
//	};
//	int m_B = 200;
//
//};
//
//int Person::m_A = 0;//��̬������������
//void test01() {
//	Person a;
//	cout << Person::m_A << endl;//ͨ��������
//	a.m_A = 100;
//	cout << a.m_A;              //ͨ������
//	Person b;
//	b.m_A = 200;                //����ͬһƬ�ڴ�,һ�Ķ���
//	cout << a.m_A;
//}
//
//void test02() {
//	Person p;
//	p.func(); //1.ͨ������
//
//	Person::func();//2.ͨ������
//}
//
//
//
//void test03() {
//	//��̬��Ա���� ������ĳ�������ϣ����ж��󶼹���ͬһ������
//	//��˾�̬��Ա���������ַ��ʷ�ʽ
//
//	//1.ͨ���������
//	//2.ͨ���������з���
//}
//
//int main() {
//	//test01();
//	//cout << Person::m_A << endl;
//	Person::func();
//	//cout << Person::m_B << endl;
//}
