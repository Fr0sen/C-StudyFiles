//#include<iostream>
//#include <vector>
//#include <map>
//#include <string>
//#define CEHUA 0
//#define MEISHU 1
//#define YANFA 2
//using namespace std;
//	
//class Worker {
//public:
//	string m_Name;
//	int m_Salary;
//
//};
//
//void createWorker(vector<Worker>& v) {
//	string nameSeed = "ABCDEFGHIJ";
//	for (int i = 0; i < 10; i++) {
//		Worker worker;
//		worker.m_Name = "Ա��";
//		worker.m_Name += nameSeed[i];
//		worker.m_Salary = rand() % 10000 + 10000;//10000~19999
//		v.push_back(worker);
//	}
//}
//
//void setGroup(vector<Worker>&v,multimap<int,Worker>&m) {
//	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++) {
//		//����������ű��
//		int deptId = rand() % 3;//0 1 2
//		//��Ա�����뵽������
//		m.insert(make_pair(deptId, *it));
//	}
//}
//
//void showWorkerByGroup(multimap<int, Worker>& m) {
//	//0 A B
//	cout << "�߻����ţ�" << endl;
//	multimap<int,Worker>::iterator pos = m.find(CEHUA);
//	int count = m.count(CEHUA);//ͳ�Ʋ߻����ž��������
//	int index = 0;
//	for (; pos != m.end() && index < count; pos++,index++) {
//			cout << "������ " << pos->second.m_Name << "���ʣ�" << pos->second.m_Salary << endl;
//	}
//	//
//	cout << "------------------" << endl;
//	cout << "�������ţ�" << endl;
//	count = m.count(MEISHU);//ͳ�Ʋ߻����ž��������
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++) {
//		cout << "������ " << pos->second.m_Name << "���ʣ�" << pos->second.m_Salary << endl;
//	}
//
//	cout << "------------------" << endl;
//	cout << "�з����ţ�" << endl;
//	count = m.count(YANFA);//ͳ�Ʋ߻����ž��������
//	index = 0;
//	for (; pos != m.end() && index < count; pos++, index++) {
//		cout << "������ " << pos->second.m_Name << "���ʣ�" << pos->second.m_Salary << endl;
//	}
//}
//
//int main() {
//	//1.����Ա��
//	vector<Worker>vWorker;
//	createWorker(vWorker);
//
//	//2.Ա������
//	multimap<int, Worker> mWorker;
//	setGroup(vWorker, mWorker);
//
//	//3.������ʾԱ��
//	showWorkerByGroup(mWorker);
//
//	////����
//	//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++) {
//	//	cout << "������" << it->m_Name << "����:" << it->m_Salary << endl;
//	//}
//
//	system("pause");
//	return 0;
//}