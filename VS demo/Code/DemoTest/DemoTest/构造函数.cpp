//#include<iostream>
//#include <cstdio>
//using namespace std;
//
//class Person {
//public:
//
//	Person() {
//		cout << "Ĭ�Ϲ��캯��";
//	}
//
//	Person(string a) {
//		cout << "���ع��캯��";
//	}
//	Person(int a,int heights) {
//		cout << "���ع��캯��";
//		age = a;
//		height = new int(heights);
//	}
//
//	Person(const Person& p) {   //ǳ����
//		cout << "�������캯��";
//		name = p.name;
//	}
//
//	//�Լ�ʵ��һ��������캯��
//	Person(const Person & p) {
//		cout << "Person �������캯������" << endl;
//		age = p.age;
//		height = new int(*p.height);//������һƬ����,��С�ǽ�����֮�����ݵĴ�С������ָ���С
//	}
//
//	~Person() {
//		if (height != NULL) {	
//			delete height;    //��������delete�ͷ�ָ��ָ����¿��ٵ��ڴ�ռ�
//			height = NULL;
//		}
//		cout << "����������ִ��";
//	}
//	int age;
//	int* height;//ʹ��new�ؼ���һ��Ҫʹ��ָ�룬���ʵ�ʱ��ǵý�����
//private:
//	string name;
//};
//
//
//
//
////void anonymous() {
////	Person("��ɭɭ");
////	cout << 111<<endl;
////}
////
////void unanonymous() {
////	Person p("��ɭɭ2012");
////	cout << "111" << endl;
////}
//
//void doWork(Person p) { //ֵ����
//
//}
//
//Person doWork2() {
//	Person p1;
//	cout << (int*)&p1 << endl;
//	return p1;
//}
//
//void test001() {
//	Person p1(18,180);
//	cout << "age:" << p1.age << endl<< "height:"<<p1.height;
//}
//
//int main() {
//	//Person p;
//	//Person p4();//��������൱�ں������õ�����������ִ�й��캯������������
//
//	////��ʾ��
//	//Person p1;
//	//Person p2 = Person("��ɭ");
//	//Person p3 = Person(p2);
//
//	//���ŷ�
//	Person p1("��ɭ");
//	/*anonymous();*/
//
//	system("pause");
//
//	/*unanonymous();*/
//	system("pause");
//	//��ʽת����
//
//
//	//��������
//	system("pause");
//	return 0;
//}


