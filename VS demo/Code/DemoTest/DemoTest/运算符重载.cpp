//#include "circle.h"
//using namespace std;
//#include <string>
//
//class Person {
//	friend ostream& operator<<(ostream& cout, Person& p);
//	
//public:
//
//public:
//	void operator<<(Person p) {//成员函数重载是不太行的   比如p3 = p1+p2  <->p3 = p1(p2);
//	}
//	int m_A;
//	int m_B;
//};
//
//
////利用全局函数重载运算符
//ostream& operator<<(ostream& cout, Person& p) {  //链式编程思想，因为Ostream全局只有一个，所以需要引用,其实就是起一个别名
//	cout << "m_A =" << p.m_A << "m_B = " << p.m_B;
//	return cout;
//}
//
//Person operator+(Person& p1, Person& p2) {//全局函数重载
//	Person temp;
//	temp.m_A = p1.m_A + p1.m_A;
//	temp.m_B = p2.m_B + p1.m_B;
//	return temp;
//}
//
//
//int main() {
//	Person p;
//	p.m_A = 10;
//	p.m_B = 10;
//
//	//cout << p << endl<<p;
//}