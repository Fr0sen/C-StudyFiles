//#include <iostream>
//using namespace std;
//
//
//template<class T1,class T2>
//class Person;
//
//template<typename T1, typename T2>  //���ñ���������ȫ�ֺ���
//void printPerson2(Person<T1, T2> p) {  //����ģ���ʵ��
//	cout << "����ʵ��" << p.mName << endl;
//}
//
//
//template<class T1, class T2>
//class Person
//{ 
//	//ȫ�ֺ�������ʵ��
//	friend void printPerson(Person<T1,T2> p) {
//		cout << "������" << p.mName << "���䣺" << p.mAge << endl;	
//	}
//
//	//����ʵ��
//	//��Ҫ��һ����ģ��Ĳ����б�
//	//������ǵ�ȫ�ֺ���������ʵ�ֵģ���Ҫ�ñ�������ǰ֪����������Ĵ���
//	friend void printPerson2<>(Person<T1, T2> p);   //��һ����ͨ����������
//
//public:
//	Person(T1 name, T2 age) {
//		this->mName = name;
//		this->mAge = age;
//	}
//private:
//	T1 mName;
//	T2 mAge;
//};
//void test01() {
//	Person<string, int>p("Tom", 20);
//	printPerson(p);
//}
//
//
//
//
//void test02() {
//	Person<string, int >p("Jerry", 20);
//	printPerson2(p);
//}
//
//int main() {
//	test02();
//}