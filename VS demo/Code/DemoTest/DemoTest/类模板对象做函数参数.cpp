//#include <string>
//#include <cstdio>
//#include <iostream>
//#include <string>
//using namespace std;
//
//template <class T1,class T2>  //ģ������б�Ĭ����һ������
//class Person
//{
//public:
//	Person(T1 name, T2 age) {
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPerson() {
//		cout << "����" << m_Name << "\t����" << m_Age << endl;
//	}
//	T1 m_Name;
//	T2 m_Age
//};
//
//
//
//void PrintPerson1(Person<string ,int> &p) { //��Ȼ��ģ���࣬�Ǵ���ҲҪд��ģ��ĸ�ʽ
//	p.showPerson();
//}
////1.ָ����������
//
//void test01() {
//	Person<string, int>p("�����", 100);
//}
//
//
//template<class T1,class T2> //����ģ��
//void PrintPerson2(Person<T1, T2>&p) {
//	p.showPerson();
//	cout << "T1�����ͣ�" << typeid(T1).name() << endl;
//	cout << "T2�����ͣ�" << typeid(T2).name() << endl;
//}
////2.����ģ�廯
//void test02() {
//	Person<string, int>p("��˽�", 100);
//	PrintPerson2(p);
//}
//
//
//
//template<class T>
//void PrintPerson3(T &p) {   //�����б�ĸ�ʽ�����Ͼ���   ����<����1������2> &������
//	p.showPerson();
//	cout << "�����������" << typeid(T).name() << endl;
//}
////3.������ģ�廯
//void test03() {
//	Person<string, int>p("��ɮ", 30);
//	PrintPerson3(p);
//}
//
//
//
//
//int main() {
//	test01();
//
//}