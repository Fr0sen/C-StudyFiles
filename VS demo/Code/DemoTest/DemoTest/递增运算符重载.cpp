//#include <iostream>
//using namespace std;
//
//class MyInteger {
//
//	friend ostream& operator<< (ostream& cout, MyInteger myint);
//public:
//	MyInteger& operator++() {  //这里如果不加引用，则会在链式编程的时候出错
//		m_Num++;
//		return *this;
//	}	
//
//	MyInteger operator++(int) {//必须用int占位参数才能区分出是后置递增代码,后置递增不能返回引用
//		//先记录当前结果
//		MyInteger temp = *this;//*this解引用就是对象本身，如果不解引用就是地址
//		//再递增
//		m_Num++;
//		//再返回之前的结果
//		return temp;
//	}
//
//	MyInteger() {
//		m_Num = 0;
//	}
//
//private:
//	int m_Num;
//};
//
//ostream& operator<< (ostream& cout, MyInteger myint) {
//	cout << myint.m_Num << endl;
//	return cout;
//}
//
////void test01() {
////	MyInteger myint;
////	cout << ++myint << endl;
////	cout << ++(++myint) << endl;
////	cout << myint << endl;
////}
//
//void test2() {
//	MyInteger myint;
//	cout << myint++<<endl;
//	cout << myint << endl ;
//}
// 
//class Person {
//public:
//	Person(int age) {
//		m_Age = new int(age);
//	}
//
//	~Person() {
//		if (m_Age != NULL) {
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//	Person& operator=(Person& p) {
//		//应该先判断是否有属性在堆区，如果有则要先释放干净，然后再深拷贝
//		if (m_Age != NULL) {
//			delete m_Age;
//			m_Age = NULL;
//		}
//		m_Age = new int(*p.m_Age);
//		return p;
//	}
//
//	int* m_Age;
//};
//
//
//void test01() {
//	Person p1(18);
//	Person p2(20);
//	Person p3(20);
//	p3 = p2 = p1;
//
//
//	cout << "p1的年龄为：" << *p1.m_Age <<endl;
//
//	cout << "p3的年龄为:" << *p3.m_Age << endl;
//}
//
//int main() {
//	/*MyInteger myint;
//	cout << myint << endl;*/
//	test01();
//}