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
//		cout << "����";
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
//	//Coffee abs = new AbstractDrinking;//�������Ǵ��麯����ʱ��Ͳ�����������Coffee������
//	Coffee* p = new Coffee;//ֻ�����������ַ�ʽ�������󡣣�
//
//
//}
//
//int main() {
//	
//}