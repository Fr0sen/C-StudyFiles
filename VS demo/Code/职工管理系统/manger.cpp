#include "manager.h"
using namespace std;
#include <iostream>

Manager::Manager(int id, string name, int dId) {
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}
void Manager:: showInfo() {
	cout << "ְ�����: " << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\t��λ" << this->getDeptName()
		<< "\t��λְ�𣺹���Ա��" << endl;
}
string Manager::getDeptName() {
	return string("����");
}