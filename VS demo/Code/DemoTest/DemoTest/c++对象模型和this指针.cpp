//#include <cstdio>
//#include <iostream>
//#include <string>
//#include "swap.h"
//using namespace std;
//
//class Person {
//public:
//	int m_A;//�Ǿ�̬��Ա����
//	static int m_B; //��̬��Ա��������������ڴ�
//
//
//	Person(int age) {
//		this->age = age;//ָ�򱻵��õĳ�Ա���������Ķ���
//	}
//	Person& AddPersonAge(Person &p) {  //ʹ����������Ϊ����Ҫ��p2������в����������Ǹ���һ�ݵ�ַ
//		this->age += p.age;
//		return *this; //*this
//	}
//
//	int age;
//
//};
//int Person::m_B = 0;
//
////void test01() {
////	Person p;
////	cout << "size of p =" << sizeof(p) << endl;
////}
////void test02() {
////	Person p;
////	cout << "size of p =" << sizeof(p) << endl;
////}
//
//void test03() {
//	Person p1(10);
//	Person p2(20);
//	p2.AddPersonAge(p1).AddPersonAge(p1).AddPersonAge(p1);
//	cout << p2.age;
//}
//
//class PersonNull {
//public :
//	void showPersonAge() {
//
//		if (this == NULL) {
//			return;
//		}
//
//		cout << "age = " <<this->m_age << endl;
//	}
//
//	int m_age;
//};
//
//void test04() {
//	PersonNull * p = NULL;
//	p->showPersonAge();
//}
//
//
//
//int main() {
//	//test01();//c++��Ϊÿ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
//	//test02();//�ǿվͰ���int�����ĸ��ֽڿռ�
//	test03();
//	test04();
//
//}
