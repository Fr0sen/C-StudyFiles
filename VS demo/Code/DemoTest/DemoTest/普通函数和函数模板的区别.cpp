//#include <iostream>
//#include <cstdio>
//using	namespace std;
//
//int myadd(int a,char b) {
//	return a + b;//�����Զ�����ת��
//}
//
//template <typename T>
//T myAdd02(T a,T b) {
//	return a + b;
//}
////void test01() {
////	int a = 10;
////	int b = 20;
////	char c = 'c';
////	cout << myadd(a, c) << endl;
////	//cout << myAdd02(a, c) << endl;//�����ǲ��еģ���Ϊû���Զ�����ת��(��ʽ����ת��)
////	cout << myAdd02<int>(a, c) << endl;
////}
//
//void myPrint(int a, int b) {
//	cout << "���õ���ͨ����" << endl;
//}
////template<class T>
////void myPrint(T a, T b) {
////	cout << "���õ�ģ��" << endl;
////}
////
////template<class T>
////void myPrint(T a, T b,T c) {
////	cout << "���õ�����ģ��" << endl;
////}
//
//void test01() {
//	int a = 10;
//	int b = 20;
//	//myPrint(a, b);//���ȵ�����ͨ����
//
//	//ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
//	//myPrint<>(a, b);//�����Ϳ��Ե���ģ����(����<>)
//
//	//�������ģ��������õ�ƥ�䣬���ȵ��ú���ģ��
//	char c1 = 'a';
//	char c2 = 'b';
//	myPrint(c1, c2);
//}
//
//int main() {
//	test01();
//}