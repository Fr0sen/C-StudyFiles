//#include <cstdio>
//#include <iostream>
//#include <string>
//#include "swap.h"
//using namespace std;
//
////�������ͳ�����
//class Person {
//public:
//
//	//this ָ��ı�����ָ�볣����this ָ��ı�����ָ�볣��,this ָ��ı�����ָ�볣��,ָ���ָ���ǲ������޸ĵ�
//	//Person * const this;�൱����thisָ���ǲ������޸ĵ� 
//	void showPerson() const {//constָ��� ֵҲ�������޸���
//		//this->m_A = 100;
//		//this = NULL;//thisָ���ǲ������޸ĵģ�����thisָ���ֵ�ǿ����޸ĵ�
//		this->m_B = 100;
//	}
//	void func() {
//	}
//	int m_A;
//	mutable int m_B;//�����������ʹ�ڳ�������Ҳ�����޸�ֵ
//};
//
//void test01() {
//	Person p;
//	p.showPerson();
//}
//
//void test02() {
//	const Person p;//�ڶ���ǰ����const����Ϊ������
//	p.m_B = 100;   //mutable�ڳ�������Ҳ�����޸�
//
//	//������ֻ�ܵ��ó�����	
//	p.showPerson();
//	p.func();//���ǳ�����������
//
//
//}
//
//int main() {
//	
//
//}
