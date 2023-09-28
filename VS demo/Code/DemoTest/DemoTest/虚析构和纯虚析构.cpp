//#include <iostream>
//using namespace std;
//
//class Animal {  //纯虚类   
//public:
//	virtual void speak() = 0;  //纯虚函数
//
//	//virtual ~Animal() {   //因为是虚类，所以如果想要执行子类的析构函数
//	//	 
//	//}
//
//	virtual ~Animal() = 0;  //纯虚析构
//
//};
//
//Animal::~Animal() {
//	cout << "Animal的纯虚析构代码进行调用" << endl;
//}  //纯虚析构类似于静态变量，类内声明类外实现
//
//class Cat :public Animal {
//public:
//	Cat(string name) {
//		m_Name = new string(name);
//	}
//	virtual void speak() {
//		cout << "小猫在说话" << *m_Name << endl;
//	}
//
//	~Cat() {
//		if (m_Name != NULL) {
//			cout << "Cat析构函数调用" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//	string* m_Name;
//};
//
//void test01() {
//	Cat tom("Tom");     
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	delete animal; //delete父类指针的时候，并不会走子类的析构代码！ 
//
//}
//
//int main() {
//	
//}