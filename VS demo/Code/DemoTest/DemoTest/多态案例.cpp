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
////电脑类
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
//			delete m_cpu;  //释放内存空间,但此时指针还是指向这块地址
//			m_cpu = NULL;  //将指针变成空指针
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
////具体厂商
////Intel厂商
//class IntelCPU :public Cpu {
//public:
//	virtual void calculate() {
//		cout << "Intel的cpu开始计算了";
//	}
//};
//
//class LenovoCPU :public Memory {
//public:
//	virtual void storage() {
//		cout << "Lenovo的内存条开始计算了";
//	}
//};
//class Intel :public AbstractBase {
//public:
//	virtual void Cpu() {
//		cout << "生产Intel的CPU" << endl;
//	}
//	virtual void Gpu() {
//		cout << "生产Intel显卡" << endl;
//	}
//	virtual void Memory() {
//		cout << "生产Intel内存" << endl;
//	}
//};
//
//class Lenovo :public AbstractBase {
//public:
//	virtual void Cpu() {
//		cout << "生产Lenovo的CPU" << endl;
//	}
//	virtual void Gpu() {
//		cout << "生产Lenovo显卡" << endl;
//	}
//	virtual void Memory() {
//		cout << "生产Lenovo内存" << endl;
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
//	//第一台电脑零件
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