#include "Boss.h"
//����ֻ��Ҫ��ûд�ĸ��෽��д�ϼ��ɣ�������д���ˣ�ֻд����

Boss::Boss(int id,string name,int dId) {
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

void Boss::showInfo() {
	cout << "ְ�����: " << this->m_Id
		<< "\tְ��������" << this->m_Name
		<< "\t��λ" << this->getDeptName()
		<< "\t��λְ�𣺹���˾��������" << endl;
}

string Boss::getDeptName() {
	return string("�ܲ�");
}


