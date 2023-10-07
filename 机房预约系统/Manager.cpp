#pragma once
#include "Manager.h"
using namespace std;
#include <fstream>
#include <algorithm>
#include "globalFile.h"
#include "Teacher.h"
#include "Identity.h"
#include "computerRoom.h"
#include "Student.h"


Manager::Manager() {


}

void Manager::initVector() {
	//ȷ���������״̬
	vStu.clear();
	vTea.clear();
	//��ȡ��Ϣ ѧ������ʦ
	ifstream ifs;
	ifs.open(STUDENT_FILE, ios::in);//��ȡ
	if (!ifs.is_open()) {
		cout << "�ļ���ȡʧ��" << endl;
		return;
	}
	Student s;
	while (ifs >> s.m_Id && ifs >> s.m_Name && ifs >> s.m_Pwd) {
		vStu.push_back(s);
	}
	cout << "��ǰѧ������Ϊ��" << vStu.size() << endl;
	ifs.close();

	//��ȡ��Ϣ  ��ʦ
	ifs.open(TEACHER_FILE, ios::in);
	Teacher t;
	while (ifs >> t.m_EmpId && ifs >> t.m_Name && ifs >> t.m_Pwd) {
		vTea.push_back(t);
	}
	cout << "��ǰ��ʦ������Ϊ:" << vTea.size() << endl;
	ifs.close();
	 


}

bool Manager::checkRepeat(int id, int type) {
	if (type == 1) {
		for (vector<Student>::iterator it = vStu.begin(); it != vStu.end(); it++) {
			if (id == it->m_Id) {
				return true;
			}
		}
	}
	else 
	{
		for(vector<Teacher>::iterator it=vTea.begin();it!=vTea.end();it++){
			if (id == it->m_EmpId) {
				return true;  
			}
		}
	}
	return false;
}

Manager::Manager(string name, string pwd) {

	//��ʼ������Ա��Ϣ
	this->m_Name = name;
	this->m_Pwd = pwd;
	//��ʼ����������ȡ�������ļ��� ��ʦ��ѧ����Ϣ
	this->initVector();

	//��ʼ��������Ϣ
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);
	computerRoom com;
	while (ifs >> com.m_ComId && ifs >> com.m_MaxNum) {
		vCom.push_back(com);
	}
	ifs.close();
	cout << "����������Ϊ��" << vCom.size() << endl;

}

//�˵�����
void Manager::openMenu() {
	cout << "\t��ӭ����Ա" << this->m_Name << "��¼��" << endl;
	cout << "\t1.����˺�" << endl;
	cout << "\t2.�鿴�˺�" << endl;
	cout << "\t3.�鿴����" << endl;
	cout << "\t4.���ԤԼ" << endl;
	cout << "\t0.ע����¼" << endl;
	cout << "\t����������ѡ��" << endl;

}
void Manager::addPerson() {
	cout << "����������˺ŵ�����" << endl;
	cout << "1.���ѧ��" << endl;
	cout << "2.�����ʦ" << endl;
	string fileName;//�������ļ���
	string tip;//��ʾid��
	string errorTip;

	ofstream ofs;
	int select = 0;
	cin >> select;
	if (select == 1) {
		//��ӵ���ѧ��
		fileName = STUDENT_FILE;
		tip = "������ѧ��:";
		errorTip = "ѧ���ظ�������������";
	}
	else {
		fileName = TEACHER_FILE;
		tip = "������ְ�����";
		errorTip = "ְ�����ظ�������������";
	}
	ofs.open(fileName, ios::out | ios::app);//����׷�ӷ�ʽд�ļ�
	int id;
	string name;
	string pwd;
	cout << tip << endl;

	while (true) {
		cin >> id;
		bool ret = checkRepeat(id, select);
		if (ret) {
			cout << errorTip << endl;
		}
		else break;
	}

	cout << "����������:" << endl;
	cin >> name;
	cout << "����������" << endl;
	cin >> pwd;
	//���ļ����������
	ofs << id << " " << name << " " << pwd << " " << endl;
	
	if (select == 1) {
		Student s(id, name, pwd);
		vStu.push_back(s);
	}
	else {
		Teacher s(id, name, pwd);
		vTea.push_back(s);
	}

	cout << "��ӳɹ�" << endl;
	system("pause");
	system("cls");
	ofs.close();	 

	this->initVector();
}

bool cmpTea(Teacher &a,Teacher &b) {
	return a.m_EmpId < b.m_EmpId;
}

bool cmpStu(Student& a, Student& b) {
	return a.m_Id < b.m_Id;
}

void printStu(Student &s) {//�����ÿ�һ��
	cout << "ѧ�ţ�" << s.m_Id << "����: " << s.m_Name << "���룺" << s.m_Pwd << endl;
}
void printTea(Teacher& s) {//�����ÿ�һ��
	cout << "ѧ�ţ�" << s.m_EmpId << "����: " << s.m_Name << "���룺" << s.m_Pwd << endl;
}


void Manager::showPerson() {
	cout << "��ѡ��鿴���ݣ�" << endl;
	cout << "1.�鿴����ѧ��" << endl;
	cout << "2.�鿴������ʦ" << endl;
	int select = 0;
	cin >> select;

	if (select == 1) {
		//�鿴ѧ�� 
		sort(vStu.begin(), vStu.end(), cmpStu);
		for_each(vStu.begin(), vStu.end(), printStu);	
	}
	else {
		//�鿴��ʦ
		sort(vTea.begin(), vTea.end(), cmpTea);
		for_each(vTea.begin(), vTea.end(), printTea);

	}

	system("pause");
	system("cls");
	
}

void Manager::showComputer() {
	cout << "������Ϣ���£�" << endl;
	for (vector<computerRoom>::iterator it = vCom.begin(); it != vCom.end(); it++) {
		cout << "������ţ�" << it->m_ComId << "�����������:" << it->m_MaxNum << endl;
	}
	system("pause");
	system("cls");

}
void Manager::cleanFile() {
	ofstream ofs(ORDER_FILE, ios::trunc);
	ofs.close();
	cout << "��ճɹ�!" << endl;
	system("pause");
	system("cls");
}


