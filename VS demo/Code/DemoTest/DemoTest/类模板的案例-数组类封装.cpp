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
//	MyArray<int > arr3(100);  //指定容量
//
//	arr3 = arr1; 
//	for (int i = 0; i < 5; i++) {
//		//利用尾插法将数组中插入数据
//		arr1.Push_Back(i);
//	}
//
//	cout << "arr1的打印输出为:" << endl;
//	printIntArray(arr1);
//	cout << " arr1的容量为多少：" << arr1.getCapacity() << endl;
//	cout << " arr1的大小为多少：" << arr1.getSize() << endl;
//	MyArray<int > arr2(arr1);
//	printIntArray(arr2);
//
//	//尾删
//	arr2.Pop_Back();
//	cout << "arr2的容量" << arr2.getCapacity() << endl;
//	cout << "arr2de dasiao" << arr2.getSize() << endl;
//}
//
//
////测试自定义数据类型	 
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
//		cout << "姓名：" << arr[i].m_Name << "年龄：" << arr[i].m_age << endl;
//	}
//}
//
//void test02() {
//	MyArray<Person> arr(10);
//	Person P1("孙悟空", 999);
//	Person P2("韩信", 20);
//	Person P3("赵云", 22);
//	Person P4("安琪拉", 27);
//	//利用数据插入到数组当中
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