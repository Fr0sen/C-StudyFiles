#include "WorkManager.h"
#include <fstream>



void WorkManager:: Show_Menu() {
	cout << "****************" << endl;
	cout << "��ӭʹ��ְ������ϵͳ" << endl;
	cout << "0.�˳��������" << endl;
	cout << "1.����ְ����Ϣ" << endl;
	cout << "2.��ʾְ����Ϣ" << endl;
	cout << "3.ɾ����ְְ��" << endl;
	cout << "4.�޸�ְ����Ϣ" << endl;
	cout << "5.����ְ����Ϣ" << endl;
	cout << "6.���ձ������" << endl;
	cout << "7.��������ĵ�" << endl;
	cout << "****************" << endl;
	cout << endl;
}

void WorkManager::exitSystem() {
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

void WorkManager::show_Emp() {
	if (this->m_FileIsEmpty) {
		cout << "�ļ�Ϊ�ջ򲻴���" << endl;
	}
	else if (this->m_EmpNum == 0) {
		cout << "û��ְ����Ϣ" << endl;
	}
	else {
		for (int i = 0; i < m_EmpNum; i++) {
			if (this->m_EmpArray[i]->m_DeptId == 3) {
				this->m_EmpArray[i]->showInfo();
			}else this->m_EmpArray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}

WorkManager::~WorkManager() {
	if (this->m_EmpArray != NULL) {    //������ļ���ɾ�����ˣ���ô��Ҫ������ָ��������ɾ��
		for (int i = 0; i < this->m_EmpNum; i++) {
			if (this->m_EmpArray[i] != NULL) {
				delete this->m_EmpArray[i];     //��ָ��ָ���������ɾ��
			}
		}
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}