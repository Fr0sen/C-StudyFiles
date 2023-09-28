//#include <cstdio>
//#include <iostream>
//#include <string>
//using namespace std;
//
//class AbstractDrinking {
//public:
//	virtual void Boil() = 0;
//	
//	virtual void makeDrink() {
//		Boil();
//	}
//
//};
//
//class Coffee :public AbstractDrinking {
//public:
//	virtual void Boil() {
//		cout << "咖啡";
//	}
//
//
//};
//
//
//void doWork(AbstractDrinking* abs) {
//	abs->makeDrink();
//	delete abs;
//}
//
//void test01() {
//	doWork(new Coffee);
//	
//	//Coffee abs = new AbstractDrinking;//当父类是纯虚函数的时候就不能这样生成Coffee对象了
//	Coffee* p = new Coffee;//只能用下面这种方式创建对象。，
//
//
//}
//
//int main() {
//	
//}