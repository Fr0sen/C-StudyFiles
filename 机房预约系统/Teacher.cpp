#pragma once
#include "Teacher.h"
#include <string>
#include "orderFile.h"
using namespace std;

Teacher::Teacher() {

}
Teacher::Teacher(int empId, string name, string pwd) {
	//��ʼ������
	this->m_EmpId = empId;
	this->m_Name = name;
	this->m_Pwd = pwd;
}
void Teacher::openMenu() {
	cout << "��ӭ��ʦ��" << this->m_Name << "��¼��" << endl;
	cout << "\t1.�鿴����ԤԼ" << endl;
	cout << "\t2.���ԤԼ" << endl;
	cout << "\t0.ע����¼" << endl;
	cout << "\t����������ѡ��" << endl;
}
void Teacher::showAllOrder() {
	OrderFile of;
	if (of.m_Size == 0) {
		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}
	for (int i = 0; i < of.m_Size; i++) {
		cout << i + 1 << "�� ";
		cout << " ԤԼ����" << of.m_orderData[i]["date"];
		cout << " ʱ��Σ�" << (of.m_orderData[i]["interval"]=="1"?"����":"����");
		cout << " ѧ�� ��" << of.m_orderData[i]["stuId"];
		cout << " ������" << of.m_orderData[i]["stuName"];
		cout << " �������: " << of.m_orderData[i]["roomId"];
		string status = " ״̬�� ";
		//1.����� 2��ԤԼ -1ԤԼʧ�� 0 ȡ��ԤԼ
		if (of.m_orderData[i]["status"] == "1") {
			status += "�����";
		}
		else if (of.m_orderData[i]["status"] == "2") {
			status += "ԤԼ�ɹ�";
		}
		else if (of.m_orderData[i]["status"] == "-1") {
			status += "ԤԼʧ��,���δͨ��";
		}
		else {
			status += "ԤԼ��ȡ��";
		}
		cout << status << endl;
	}
	system("pause");
	system("cls");
}
void Teacher::validOrder() {
	OrderFile of;
	if (of.m_Size == 0) {
		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}
	vector<int>v;
	int index = 0;
	cout << "����˵�ԤԼ��¼���£�" << endl;
	for (int i = 0; i < of.m_Size; i++) {
		if (of.m_orderData[i]["status"] == "1") {
			v.push_back(i); 
			cout << ++index << "�� ";
			cout << "ԤԼ���ڣ���" << of.m_orderData[i]["date"];
			cout << " ʱ��Σ� " << (of.m_orderData[i]["interval"]=="1"?"����":"����");
			cout << " ѧ����ţ� " << of.m_orderData[i]["stuId"];
			cout << " ѧ��������" << of.m_orderData[i]["stuName"];
			cout << " ������ţ�" << of.m_orderData[i]["roomId"];
			string status = "״̬������� ";
			cout << status << endl;
		}
	}
	cout << "��������˵�ԤԼ��¼��0������" << endl;
	int select = 0;//�����û�ѡ���ԤԼ��¼
	int ret = 0;//����ԤԼ�����¼
	while (true) {
		cin >> select;
		if (select >= 0 && select <= v.size()) {
			if (select == 0) {
				break;
			}
			else {
				cout << "��������˽��" << endl;
				cout << "1.ͨ��" << endl;
				cout << "2.��ͨ��" << endl;
				cin >> ret;
				if (ret == 1) {
					//ͨ�����
					of.m_orderData[v[select - 1]]["status"] = "2";
				}
				else {
					//��ͨ�����
					of.m_orderData[v[select - 1]]["status"] = "-1";
				}
				of.updateOrder();//����ԤԼ��¼
				cout << "������" << endl;
				break;
			}
		}
		cout << "�����������������룡" << endl;
	}
	system("pause");
	system("cls");
}
//Teacher:: ~Teacher() {
//
//}