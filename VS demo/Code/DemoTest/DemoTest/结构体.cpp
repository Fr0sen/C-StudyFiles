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
//}S; //S3就是一个初始化的时候自带的变量，可以直接用
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
////void printStudent1(Student i) {//值传递，有点慢，要复制
////	cout << i.age << i.name;
////}
////
////void printStudent2(const Student * i) {//地址传递 ：需要加上*,   ->是指针的用法，.是结构体的用法，只需要传一个指针即可  
////	cout << "子函数中 姓名:" << i->name;
////	//i->name = "ihdu"; 加上const就不能修改了
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
////	//创建学生结构体变量，
////	Student s = { "zhangsan",18 };
////	//通过指针指向结构体变量
////	Student * p = &s;
////	//通过指针访问结构体变量中的数据
////	cout << "姓名" << p->name << " 年龄" << p->age;
////
////	printStudent1(s);  //需要传整个结构体
////	cout << s.name << endl;
////	printStudent2(&s); //只需要传一个地址过去即可，非常节省内存和时间
////	cout << s.name;
////
////
////}