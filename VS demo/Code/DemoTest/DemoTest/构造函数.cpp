//#include<iostream>
//#include <cstdio>
//using namespace std;
//
//class Person {
//public:
//
//	Person() {
//		cout << "默认构造函数";
//	}
//
//	Person(string a) {
//		cout << "重载构造函数";
//	}
//	Person(int a,int heights) {
//		cout << "重载构造函数";
//		age = a;
//		height = new int(heights);
//	}
//
//	Person(const Person& p) {   //浅拷贝
//		cout << "拷贝构造函数";
//		name = p.name;
//	}
//
//	//自己实现一个深拷贝构造函数
//	Person(const Person & p) {
//		cout << "Person 拷贝构造函数调用" << endl;
//		age = p.age;
//		height = new int(*p.height);//新生成一片区域,大小是解引用之后数据的大小而不是指针大小
//	}
//
//	~Person() {
//		if (height != NULL) {	
//			delete height;    //析构函数delete释放指针指向的新开辟的内存空间
//			height = NULL;
//		}
//		cout << "析构函数被执行";
//	}
//	int age;
//	int* height;//使用new关键字一定要使用指针，访问的时候记得解引用
//private:
//	string name;
//};
//
//
//
//
////void anonymous() {
////	Person("寒森森");
////	cout << 111<<endl;
////}
////
////void unanonymous() {
////	Person p("寒森森2012");
////	cout << "111" << endl;
////}
//
//void doWork(Person p) { //值传递
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
//	//Person p4();//下面这个相当于函数调用的声明，不会执行构造函数和析构函数
//
//	////显示法
//	//Person p1;
//	//Person p2 = Person("韩森");
//	//Person p3 = Person(p2);
//
//	//括号法
//	Person p1("韩森");
//	/*anonymous();*/
//
//	system("pause");
//
//	/*unanonymous();*/
//	system("pause");
//	//隐式转换法
//
//
//	//常量引用
//	system("pause");
//	return 0;
//}


