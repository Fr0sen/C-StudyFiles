#include "WorkManager.h"
#include "employee.h"
#include "boss.h"
#include <fstream>
#include "Worker.h"
#include "manager.h"

#define FILENAME "empFile.txt"

int WorkManager::get_EmpNum() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	int dId;
	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> dId) {  //һ��һ�еĶ�
		//ͳ����������
		num++;
	} 
	return num++;
}

void WorkManager::Find_Emp() {
	if (this->m_FileIsEmpty) {
		cout << "�ļ������ڻ��¼Ϊ��!" << endl;
	}
	else {
		cout << "��������ҵķ�ʽ��" << endl;
		cout << "1.����ְ����Ų���" << endl;
		cout << "2.������������" << endl;
		int select = 0;
		cin >> select;
		if (select == 1) {
			int id;
			cout << "��������ҵ�ְ����ţ�" << endl;
			cin >> id;
			int ret = IsExist(id);
			if (ret != -1) {
				cout << "���ҳɹ�!��ְ����Ϣ���£�" << endl;
				this->m_EmpArray[ret]->showInfo();
			}
			else {
				cout << "����ʧ�ܣ����޴���" << endl;
			}
		}
		else if (select == 2) {
			string name;
			cout << "��������ҵ�����:" << endl;
			cin >> name;
			bool flag = false;
			for (int i = 0; i < m_EmpNum; i++) {
				if (m_EmpArray[i]->m_Name == name) {
					cout << "���ҳɹ���ְ�����Ϊ��"
						<< m_EmpArray[i]->m_Id
						<< " �ŵ���Ϣ���£�" << endl;
					flag = true;
					this->m_EmpArray[i]->showInfo();
				}
			}
			if (flag == false) {
				cout << "���޴���" << endl;
			}
		}
		system("pause");
		system("cls");
	}
}

void WorkManager::Clean_File() {
	cout << "ȷ����գ�" << endl;
	cout << "1.ȷ��" << endl;
	cout << "2.����" << endl;
	int select = 0;
	cin >> select;
	if (select == 1) {
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();
		if (this->m_EmpArray != NULL) {
			for (int i = 0; i < this->m_EmpNum; i++) {
				if (this->m_EmpArray[i] != NULL) {
					delete this->m_EmpArray[i];
				}
			}
			this->m_EmpNum = 0;
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_FileIsEmpty = true;
		}
	}
	system("pause");
	system("cls");
}

void WorkManager::Sort_Emp() {
	if (this->m_FileIsEmpty) {
		cout << "�ļ������ڻ��߼�¼Ϊ��!" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "��ѡ������ʽ" << endl;
		cout << "1.ְ��������" << endl;
		cout << "2.ְ���Ž���" << endl;
		int select = 0;
		cin >> select;
		for (int i = 0; i < m_EmpNum; i++) { 
			int minOrMax = i;                                   //һ����һ����Сֵ��ѡ������
			for (int j = i + 1; j < m_EmpNum; j++) {
				if (select == 1) { //����
					if (m_EmpArray[minOrMax]->m_Id > m_EmpArray[j]->m_Id) {
						minOrMax = j;
					}
				}
				else {//����
					if (m_EmpArray[minOrMax]->m_Id < m_EmpArray[j]->m_Id) {
						minOrMax = j;
					}
				}
			}
			if (i != minOrMax) {
				Worker* temp = m_EmpArray[i];
				m_EmpArray[i] = m_EmpArray[minOrMax];
				m_EmpArray[minOrMax] = temp;
			}
		}
		cout << "����ɹ����������Ϊ��" << endl;
		this->save();
		this->show_Emp();
	}

}

void WorkManager::Mod_Emp() {
	if (this->m_FileIsEmpty) {
		cout << "�ļ������ڻ��߼�¼Ϊ��!" << endl;
	}
	else { 
		cout << "�������޸�ְ���ı��" << endl;
		int id;
		cin >> id;
		int ret = this->IsExist(id);
		if (ret != -1) {
			delete this->m_EmpArray[ret];
			int	newId = 0;
			string newName = "";
			int dSelect = 0;
			cout << "�鵽��" << id << "��ְ������������ְ���ţ�" << endl;
			cin >> newId;
			cout << "��������" << endl;
			cin >> newName;
			cout << "�����λ��" << endl;
			cout << "1.��ְͨ��" << endl;
			cout <<"3.�ϰ�" << endl;
			cin >> dSelect;
			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(newId, newName, dSelect);
				break;
			case 3:
				worker = new Boss(newId, newName, dSelect);
			default:
				break;
			}
			this->m_EmpArray[ret] = worker;
			cout << "�޸ĳɹ���"  << endl;
			this->save();
		}
		else {
			cout << "���޴���" << endl;
		}
		system("pause");
		system("cls");
	}
}

void WorkManager::init_Emp() {  //Ϊ�˶�ȡ�ϴα������ļ��е�Ա����Ϣ
	ifstream ifs;
	ifs.open(FILENAME, ios::in); 
	int id;
	string name;
	int dId;
	int index=0;
	while (ifs >> id && ifs >> name && ifs >> dId) {
		Worker* worker = NULL;
		if (dId == 1)//��ְͨ��
		{
			worker = new Employee(id, name, dId);
			this->m_EmpArray[index] = worker;  //�ŵ��Ѿ����ٺõ����鵱��
		}else if(dId == 3){
			worker = new Boss(id, name, dId);
			this->m_EmpArray[index] = worker;  //�ŵ��Ѿ����ٺõ����鵱��
		}
		else if (dId == 2) {
			worker = new Manager(id, name, dId);
			this->m_EmpArray[index] = worker;
		}
		index++;
	}
	ifs.close();


}

WorkManager::WorkManager() {
	this->m_EmpNum = 0;
	this->m_EmpArray = NULL;

	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	if (!ifs.is_open()) {
		cout << "�ļ�������" << endl;
		
		ifs.close();
		return;
	}
	

	//2.�ļ����ڣ�����Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof()) {
		//�ļ�Ϊ��
		cout << "�ļ�Ϊ�գ�" << endl;
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL; 
		ifs.close();
		return;
	}



	////��ʼ������
	//this->m_EmpNum = 0;
	//this->m_EmpArray = NULL;

	//3.�ļ����ڣ����Ҽ�¼����
	int num = this->get_EmpNum();
	cout << "ְ������Ϊ" << num << endl;
	this->m_EmpNum = num;
	this->m_EmpArray = new Worker * [this->m_EmpNum]; //����һ������
	this->init_Emp();

	for (int i = 0; i < this->m_EmpNum; i++) {
		cout << "ְ�����: " << this->m_EmpArray[i]->m_Id 
			<< "������" << this->m_EmpArray[i]->m_Name 
			<< "���ű��:" << this->m_EmpArray[i]->m_DeptId << endl;
	}
}

void WorkManager::save() {
	ofstream ofs;
	ofs.open(FILENAME, ios::out);//д��
	for (int i = 0; i < m_EmpNum; i++) {
		ofs << this->m_EmpArray[i]->m_Id << " "  <<
			this->m_EmpArray[i]->m_Name << " "  << 
			this->m_EmpArray[i]->m_DeptId << endl;
	}
	ofs.close();
}

int WorkManager::IsExist(int id) {
	int index = -1;
	for (int i = 0; i < this->m_EmpNum; i++) {
		if (this->m_EmpArray[i]->m_Id == id) {
			index = i;
			break;
		}
	}
	return index;
}
void WorkManager::Del_Emp() {
	if (this->m_FileIsEmpty) {
		cout << "�ļ������ڻ��߼�¼Ϊ��!" << endl;
	}
	else {
		cout << "��������Ҫɾ��ְ����ţ�" << endl;
		int id = 0;
		cin >> id;
		int index = this->IsExist(id);
		if (index != -1) { //˵��ְ�����ڲ���Ҫɾ����index�ϵ�ְ��
			//����ǰ��
			for (int i = index; i < this->m_EmpNum - 1; i++) {
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;//����һ����
			//����ͬ�����ļ���
			this->save();
			cout << "ɾ���ɹ�!";
		}
		else {
			cout << "ɾ��ʧ��,δ�ҵ���ְ��" << endl; 
		}
	}
	system("pause");
	system("cls");
}

void WorkManager::Add_Emp() {
	cout << "���������ְ��������" << endl;

	int addNum = 0;
	cin >> addNum;
	if (addNum > 0) {
		//���
		//��������¿ռ��С
		int newSize = this->m_EmpNum + addNum;
		Worker** newSpace = new Worker * [newSize];//����ÿ��ָ���Ա������
		if (this->m_EmpArray != NULL) {
			for (int i = 0; i <this->m_EmpNum; i++) { //��С
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//�������������
		for (int i = 0; i < addNum; i++) {
			int id;
			string name;
			int dSelect;
			cout << "�������" << i + 1 << " ����ְ�����:" << endl;
			cin >> id;
			cout << "�������" << i + 1 << " ����ְ������:" << endl;
			cin >> name;
			cout << "��ѡ���ְ����λ:" << endl << "1.��ְͨ��" << endl << "2.����" << endl << "3.�ϰ�" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}
			//��������ְ��ָ��Ҫ���浽���鵱��
			newSpace[this->m_EmpNum + i] = worker;
		}
		//�ͷ�ԭ�еĿռ�
		delete[] this->m_EmpArray;
		this->m_EmpArray = newSpace;
		this->m_EmpNum = newSize;
		this->m_FileIsEmpty = false;//����һ��ְ����Ϊ��

		this->save();
		cout << "�ɹ����" << addNum << "����ְ����" << endl;
	}
	else {
		cout << "��������" << endl;
	}

	system("pause");
	system("cls");
}