//#include <iostream>
//#include <cstdio>
//using namespace std;
//
////�̳��еĶ���ģ��
//
//
//class Base1 {
//public:
//	int a;
//
//protected:
//	int b;
//
//private:
//	int c;
//
//};
//
//class Son1 :public Base1 {
//public:
//	void func() {
//		a = 10;
//		b = 10;   //protected���ԣ������ܷ��ʣ����ⲻ�ܷ��ʡ�
//	  //c = 10;   //private����û�취����
//	}
//};
//
//class Son2 :protected Base1 {
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;
//
//};
//
//class Base {
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//
//};
//
//class Son :public Base {
//public:
//	int m_D;
//};
//
//void test01() {
//	cout << "sizeof Son" << sizeof(Son) << endl;
//}
//
//int main() {
//	test01();
//}