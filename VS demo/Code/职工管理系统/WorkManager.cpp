#include "WorkManager.h"
#include <fstream>



void WorkManager:: Show_Menu() {
	cout << "****************" << endl;
	cout << "欢迎使用职工管理系统" << endl;
	cout << "0.退出管理程序" << endl;
	cout << "1.增加职工信息" << endl;
	cout << "2.显示职工信息" << endl;
	cout << "3.删除离职职工" << endl;
	cout << "4.修改职工信息" << endl;
	cout << "5.查找职工信息" << endl;
	cout << "6.按照编号排序" << endl;
	cout << "7.清空所有文档" << endl;
	cout << "****************" << endl;
	cout << endl;
}

void WorkManager::exitSystem() {
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

void WorkManager::show_Emp() {
	if (this->m_FileIsEmpty) {
		cout << "文件为空或不存在" << endl;
	}
	else if (this->m_EmpNum == 0) {
		cout << "没有职工信息" << endl;
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
	if (this->m_EmpArray != NULL) {    //如果是文件被删除掉了，那么需要将所有指针代码进行删除
		for (int i = 0; i < this->m_EmpNum; i++) {
			if (this->m_EmpArray[i] != NULL) {
				delete this->m_EmpArray[i];     //将指针指针数组进行删除
			}
		}
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
	}
}