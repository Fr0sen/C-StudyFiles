//#include <iostream>
//using namespace std;
//
//class Animal {  //������   
//public:
//	virtual void speak() = 0;  //���麯��
//
//	//virtual ~Animal() {   //��Ϊ�����࣬���������Ҫִ���������������
//	//	 
//	//}
//
//	virtual ~Animal() = 0;  //��������
//
//};
//
//Animal::~Animal() {
//	cout << "Animal�Ĵ�������������е���" << endl;
//}  //�������������ھ�̬������������������ʵ��
//
//class Cat :public Animal {
//public:
//	Cat(string name) {
//		m_Name = new string(name);
//	}
//	virtual void speak() {
//		cout << "Сè��˵��" << *m_Name << endl;
//	}
//
//	~Cat() {
//		if (m_Name != NULL) {
//			cout << "Cat������������" << endl;
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
//	delete animal; //delete����ָ���ʱ�򣬲�������������������룡 
//
//}
//
//int main() {
//	
//}