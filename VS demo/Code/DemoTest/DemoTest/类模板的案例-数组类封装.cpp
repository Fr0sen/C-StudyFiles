//#include <iostream>
//#include "MyArray.hpp"
//using namespace std;
//
//void printIntArray(MyArray<int>& arr) {
//	for (int i = 0; i < arr.getSize(); i++) {
//		cout << arr[i] << endl;
//	}
//}
//
//
//void test01() {
//	MyArray<int> arr1(5);
//	MyArray<int> arr2(arr1);
//
//	MyArray<int > arr3(100);  //ָ������
//
//	arr3 = arr1; 
//	for (int i = 0; i < 5; i++) {
//		//����β�巨�������в�������
//		arr1.Push_Back(i);
//	}
//
//	cout << "arr1�Ĵ�ӡ���Ϊ:" << endl;
//	printIntArray(arr1);
//	cout << " arr1������Ϊ���٣�" << arr1.getCapacity() << endl;
//	cout << " arr1�Ĵ�СΪ���٣�" << arr1.getSize() << endl;
//	MyArray<int > arr2(arr1);
//	printIntArray(arr2);
//
//	//βɾ
//	arr2.Pop_Back();
//	cout << "arr2������" << arr2.getCapacity() << endl;
//	cout << "arr2de dasiao" << arr2.getSize() << endl;
//}
//
//
////�����Զ�����������	 
//class Person {
//public:
//	Person() {};
//	Person(string name, int age) {
//		this->m_Name = name;
//		this->m_age = age;
//	}
//
//	string m_Name;
//	int m_age;
//
//};
//
//void printPersonArray(MyArray<Person>& arr) {
//	for (int i = 0; i < arr.getSize(); i++) {
//		cout << "������" << arr[i].m_Name << "���䣺" << arr[i].m_age << endl;
//	}
//}
//
//void test02() {
//	MyArray<Person> arr(10);
//	Person P1("�����", 999);
//	Person P2("����", 20);
//	Person P3("����", 22);
//	Person P4("������", 27);
//	//�������ݲ��뵽���鵱��
//	arr.Push_Back(P1);
//	arr.Push_Back(P2);
//	arr.Push_Back(P3);
//	arr.Push_Back(P4);
//	
//
//	printPersonArray(arr);
//}
//
//
//int main() {
//	test01();
//
//
//	system("pause");
//	return 0;
//	
//}