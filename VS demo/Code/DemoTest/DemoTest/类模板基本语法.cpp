//#include <string>
//#include <cstdio>
//#include <iostream>
//#include <string>
//using namespace std;
//
//template <class NameType,class AgeType = int>  //ģ������б�Ĭ����һ������
//class Person
//{
//public:
//	Person(NameType name, AgeType age) {
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void showPerson1() {
//		cout << "Person1" << endl;
//	}
//	void showPerson() {
//		cout << "name:" << this->m_Name << "\tage:" << this->m_Age << endl;
//	}
//	
//private:
//	NameType m_Name;
//	AgeType m_Age;
//};
//
//class Person2
//{
//public:
//	
//	void showPerson2() {
//		cout << "Person1" << endl;
//	}
//	
//
//private:
//	
//};
//
//template<class T>  //��ģ��
//class MyClass {
//public:
//	T obj;         //��ģ���е��������ͣ���������� ����������򲻻���ó�Ա����
//	void func1() {
//		obj.showPerson1();//Person1���еĳ�Ա����
//	}
//	void func2() {
//		obj.showPerson2();//Person2���еĳ�Ա����
//	}
//
//};
//
//void test03() {
//	MyClass<Person2> m;
//	m.func2();
//	MyClass<string>m;  //Person1
//	m.func1();
//}
//
//
//	//2.��ģ����ģ������б��п�����Ĭ�ϲ���
//void test01() {
//	//Person p1("�����", 999);//1.��ģ��û���Զ������Ƶ��ķ�ʽ,ֻ������ʽָ������
//	Person<string, int> p1("�����", 999);//����ģ�崴������
//	p1.showPerson();
//
//}
//
//void test02() {
//	Person<string, int> p2("��˽�", 999);
//}
//
//int main() {
//	test01();
//
//}