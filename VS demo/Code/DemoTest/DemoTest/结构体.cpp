//#include <cstdio>
//#include <iostream>
//#include <string>
//#include "swap.h"
//using namespace std;
//
//
//struct Student {
//	string name;
//	int age;
//}S; //S3����һ����ʼ����ʱ���Դ��ı���������ֱ����
//struct Teacher {
//	string name;
//	int age;
//	struct Student std[5];
//};
//
//void allocateSpace(struct Teacher tArray[], int len) {
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < len; i++) {
//		tArray[i].name = "Teacher_";
//		tArray[i].name += nameSeed[i];
//		for (int j = 0; j < 5; j++) {
//			tArray[i].std[j].name = "Student";
//			tArray[i].std[j].name += nameSeed[j];
//			tArray[i].std[j].age = rand();
//		}
//	}
//}
//
//void addPerson(Teacher * tea) {
//	tea[3].name = "st";
//	tea[3].age = 10;
//}
//
//int main() {
//	Teacher T[4];
//	allocateSpace(T,3);
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 5; j++) {
//			for (int k = 0; k < 5 - j - 1; k++) {
//				if (T[i].std[k].age < T[i].std[k + 1].age) {
//					Student temp = T[i].std[k];
//					T[i].std[k] = T[i].std[k + 1];
//					T[i].std[k + 1] = temp;
//				}
//			}
//		}
//		cout << "Teacher:" << i << endl;
//		for (int j = 0; j < 5; j++) {
//			cout << "\t" << T[i].std[j].name << " " << T[i].std[j].age << endl;
//		}
//	}
//	Teacher* t = T;
//	addPerson(t);
//	cout << T[3].name;
//	system("pause");
//	system("cls");
//	return 0;
//}
////
////void printStudent1(Student i) {//ֵ���ݣ��е�����Ҫ����
////	cout << i.age << i.name;
////}
////
////void printStudent2(const Student * i) {//��ַ���� ����Ҫ����*,   ->��ָ����÷���.�ǽṹ����÷���ֻ��Ҫ��һ��ָ�뼴��  
////	cout << "�Ӻ����� ����:" << i->name;
////	//i->name = "ihdu"; ����const�Ͳ����޸���
////}	
////
////int main() {
////	/*S3.name = "S3";
////	Student zhangsan;
////	zhangsan.name = "11";
////	cout << zhangsan.name;
////	Student lisi = { "lisi"};
////	cout << lisi.name;
////	struct Student arr[2] = {
////		{"liu",23},
////		{"wang",24}
////	};*/
////
////	//����ѧ���ṹ�������
////	Student s = { "zhangsan",18 };
////	//ͨ��ָ��ָ��ṹ�����
////	Student * p = &s;
////	//ͨ��ָ����ʽṹ������е�����
////	cout << "����" << p->name << " ����" << p->age;
////
////	printStudent1(s);  //��Ҫ�������ṹ��
////	cout << s.name << endl;
////	printStudent2(&s); //ֻ��Ҫ��һ����ַ��ȥ���ɣ��ǳ���ʡ�ڴ��ʱ��
////	cout << s.name;
////
////
////}