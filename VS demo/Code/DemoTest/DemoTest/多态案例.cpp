//#include <cstdio>
//#include <string>
//#include <iostream>
//
//using namespace std;
//
//class AbstractBase {
//public:
//	virtual void Cpu() = 0;
//	virtual void Gpu() = 0;
//	virtual void Memory() = 0;
//};
//
//class Cpu {
//public :
//	virtual void calculate() = 0;
//};
//
//class VideoCard {
//public:
//	virtual void display() = 0;
//};
//
//class Memory {
//public:
//	virtual void storage() = 0;
//};
//
////������
//class Computer {  //
//public:
//	Computer(Cpu* cpu, Memory* mem) {
//		m_cpu = cpu;
//		m_mem = mem;
//	}
//
//	void work() {
//		m_cpu->calculate();
//		m_mem->storage();
//	}
//
//	~Computer() {
//		if (m_cpu != NULL) {
//			delete m_cpu;  //�ͷ��ڴ�ռ�,����ʱָ�뻹��ָ������ַ
//			m_cpu = NULL;  //��ָ���ɿ�ָ��
//		}
//		if (m_vc != NULL) {
//			delete m_vc;
//			m_vc = NULL;
//		}
//		if (m_mem != NULL) {
//			delete m_mem;
//			m_mem = NULL;
//		}
//	}
//private:
//	Cpu* m_cpu;
//	VideoCard* m_vc;
//	Memory* m_mem;
//};
//
////���峧��
////Intel����
//class IntelCPU :public Cpu {
//public:
//	virtual void calculate() {
//		cout << "Intel��cpu��ʼ������";
//	}
//};
//
//class LenovoCPU :public Memory {
//public:
//	virtual void storage() {
//		cout << "Lenovo���ڴ�����ʼ������";
//	}
//};
//class Intel :public AbstractBase {
//public:
//	virtual void Cpu() {
//		cout << "����Intel��CPU" << endl;
//	}
//	virtual void Gpu() {
//		cout << "����Intel�Կ�" << endl;
//	}
//	virtual void Memory() {
//		cout << "����Intel�ڴ�" << endl;
//	}
//};
//
//class Lenovo :public AbstractBase {
//public:
//	virtual void Cpu() {
//		cout << "����Lenovo��CPU" << endl;
//	}
//	virtual void Gpu() {
//		cout << "����Lenovo�Կ�" << endl;
//	}
//	virtual void Memory() {
//		cout << "����Lenovo�ڴ�" << endl;
//	}
//};
//
//void produce(AbstractBase *abs) {
//	abs->Cpu();
//	abs->Gpu();
//	abs->Memory();
//	delete abs;
//}
//
//
//void test() {
//	/*Lenovo* a = new Lenovo;
//	Intel* b = new Intel;
//	produce(a);
//	produce(b);*/
//
//	//��һ̨�������
//	Cpu* intelCpu = new IntelCPU;
//	Memory* LenovoMem = new LenovoCPU;
//	Computer* computer = new Computer(intelCpu, LenovoMem);
//	computer->work();
//	delete computer;
//}
//
//
//
//
//int main() {
//	test();
//}