//#include <iostream>
//#include <cstdio>
//using namespace std;
//#include <string>
//template <typename T>
//class Base {
//public:
//	T m;
//
//
//};
//
//class Son :public Base<int> {   //��Ϊ��ʱ��û��ָ������
//
//};
//
//void test01() {
//	Son s1;
//
//}
//
////���������ָ�������T���ͣ�����Ҳ��Ҫ����ģ��
//template <class T1,class T2>
//class Son2 :public Base <T2>{
//public:
//	Son2(T1 name, T2 age);	//��������
//		/* {
//		this->m_Name = name;
//		this->m_Age = age;
//	}*/
//
//	void showPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
////���캯������ʵ��
//template<class T1,class T2>
//Son2<T1, T2>::Son2(T1 name, T2 age) {
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
////��Ա����������ʵ��
//template<class T1, class T2>
//void Son2<T1, T2>::showPerson() {
//	cout << "������" << this->m_Name << "\t���䣺" << this->m_Age << endl;
//}
//
//void test02() {
//	/*Son2<string,int> s2("sunwukong",100);*/
//	Son2<string, int> s1("�����",100);
//	s1.showPerson();
//}
//
//int main(){
//
//}