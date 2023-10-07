#pragma once
#include <iostream>
#include <cstdio>
#include "Student.h"
using namespace std;
#include <vector>
#include <fstream>
#include "globalFile.h"
Student::Student() {
	 
}

Student::Student(int id, string name, string pwd) {
	//��ʼ������
	this->m_Id = id;
	this->m_Name = name;
	this->m_Pwd = pwd;
	//��ʼ��������Ϣ
	ifstream ifs;
	ifs.open(COMPUTER_FILE,ios::in);
	computerRoom com;
	while (ifs >> com.m_ComId && ifs >> com.m_MaxNum) {
		//����ȡ����Ϣ�ŵ�������
		vCom.push_back(com);
	}
	ifs.close();
}

void Student::openMenu() {
	cout << "\t��ӭͬѧ" << this->m_Name << "��¼��" << endl;
	cout << "\t1.����ԤԼ" << endl;
	cout << "\t2.�鿴�ҵ�ԤԼ" << endl;
	cout << "\t3.�鿴����ԤԼ" << endl;
	cout << "\t4.ȡ��ԤԼ" << endl;
	cout << "\t0.ע����¼" << endl;
	cout << "\t����������ѡ��" << endl;
}

void Student::applyOrder() {//����ԤԼ
	cout << "��������ʱ��Ϊ��һ�����壡" << endl;
	cout << "����������ԤԼ��ʱ�䣺" << endl;
	cout << "1.��һ" << endl;
	cout << "2.�ܶ�" << endl;
	cout << "3.����" << endl;
	cout << "4.����" << endl;
	cout << "5.����" << endl;

	int date = 0;    //����
	int interval = 0;//ʱ���
	int room = 0;    //�������

	while (true) {
		cin >> date;
		if (date >= 1 && date <= 5) {
			break;
		}
		cout << "������������������" << endl;
	}
	cout << "����������ԤԼ��ʱ��Σ�" << endl;
	cout << "1.����" << endl;
	cout << "2.����" << endl;
	while (true) {
		cin >> interval;
		if (interval >= 1 && interval <= 2) {
			break;
		}
		cout << "ʱ���������������������" << endl;
	}
	cout << "��ѡ�����:" << endl;
	for (int i = 0; i < vCom.size(); i++) {
		cout << vCom[i].m_ComId << "�Ż�������Ϊ��" << vCom[i].m_MaxNum << endl;
	}
	while (true) {
		cin >> room;
		if (room >= 1 && room <= 3) {
			break;
		}
		cout << "������������������" << endl;
	}
	cout << "ԤԼ�ɹ�!�����---------" << endl;
	ofstream ofs;
	ofs.open(ORDER_FILE, ios::app);

	//�������ﲻ������ӿո���Ϊ�ո����ļ���ȡֹͣ�ı�־
	ofs << "date:" << date << " ";
	ofs << "interval:" << interval << " ";
	ofs << "stuId:" << this->m_Id << " ";
	ofs << "stuName:" << this->m_Name << " ";
	ofs << "roomId:" << room << " ";
	ofs << "status:" << 1 << endl;

	ofs.close();
	system("pause");
	system("cls");

}

void Student::showMyOrder(){//�鿴����ԤԼ
	OrderFile of;
	if (of.m_Size == 0) {
		cout << "��ԤԼ��¼��" << endl;
		system("pause");
		system("cls");
		return;
	}
	for (int i = 0; i < of.m_Size; i++) {
		//string תint
		//string ����.c_str()תconst char*
		//������atoi��const char*��תint
		if (this->m_Id == atoi(of.m_orderData[i]["stuId"].c_str())) {//�ҵ�����ԤԼ
			cout << "ԤԼ���ڣ���" << of.m_orderData[i]["date"];
			cout << " ʱ��Σ� " << (of.m_orderData[i]["interval"]=="1"?"���� " :"���� ");
			cout << "�����ţ�" << of.m_orderData[i]["roomId"];
			string status = " ״̬��";
			//1.����� 2.��ԤԼ -1ԤԼʧ�� 0ȡ��ԤԼ
			if (of.m_orderData[i]["status"] == "1") {
				status += " �����";
			}
			else if(of.m_orderData[i]["status"]=="2") {
				status += " ԤԼ�ɹ�";
			}
			else if (of.m_orderData[i]["status"] == "3") {
				status += " ԤԼʧ�ܣ����δͨ��";
			}
			else {
				status += " ԤԼ��ȡ��";
			}
			cout << status << endl;
		}
	}
	system("pause");
	system("cls");
}

void Student::showAllOrder() {//�鿴����ԤԼ
	OrderFile of;
	if (of.m_Size == 0) {
		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}
	for (int i = 0; i < of.m_Size; i++) {
		cout << i + 1 << "��";
		cout << "ԤԼ���ڣ���" << of.m_orderData[i]["date"];
		cout << " ԤԼʱ���" << (of.m_orderData[i]["interval"] == "1" ? "����" : "����");
		cout << " ѧ�ţ�" << of.m_orderData[i]["stuId"];
		cout << " ������" << of.m_orderData[i]["stuName"];
		cout << " ������ţ�" << of.m_orderData[i]["roomId"];
		string status = "״̬��";
		//1 ����� 2��ԤԼ  -1ԤԼʧ�� 0 ȡ��ԤԼ
		if (of.m_orderData[i]["status"] =="1") {
			status += "�����";
		}
		else if(of.m_orderData[i]["status"]=="2") {
			status += "ԤԼ�ɹ�";
		}
		else if (of.m_orderData[i]["status"] == "-1") {
			status += "ԤԼʧ��,���δͨ��";
		}
		else {
			status += "ԤԼ��ȡ��";
		}
	}
	system("pause");
	system("cls");
}

void Student::cancelOrder() {//ȡ��ԤԼ
	//ȡ��ԤԼ
	OrderFile of;
	if (of.m_Size == 0) {
		cout << "��ԤԼ��¼" << endl;
		system("pause");
		system("cls");
		return;
	}
	cout << "����л�ԤԼ�ɹ��ļ�¼����ȡ����������ȡ���ļ�¼" << endl;
	vector<int> v;//�������������е��±���
	int index = 1;
	for (int i = 0; i < of.m_Size; i++) {
		//���ж��Ƿ�������ѧ��
		if (this->m_Id == atoi(of.m_orderData[i]["stuId"].c_str())) {
			//��ɸѡ״̬ ����л�ԤԼ�ɹ�
			if (of.m_orderData[i]["status"] == "1" || of.m_orderData[i]["status"] == "2") {
				v.push_back(i);
				cout << index++ << "�� ";
				cout << "ԤԼ���ڣ� ��" << of.m_orderData[i]["data"];
				cout << " ʱ��� ��" << (of.m_orderData[i]["interval"] == "1" ? "����" : "����");//��Ϊ���������ȼ��ıȽϣ�����Ҫ����������
				string status = "״̬";
				if (of.m_orderData[i]["status"] == "1") {
					status += "�����";
				}
				else if (of.m_orderData[i]["status"] == "2") {
					status += "ԤԼ�ɹ�";
				}
				cout << status << endl;
			}
		}
	}
	cout << "������ȡ���ļ�¼��0������" << endl;
	int select = 0;
	while (true) {
		cin >> select;
		if (select >= 0 && select <= v.size()) {
			if (select == 0) {
				break;
			}
			else {
				of.m_orderData[v[select - 1]]["status"] = "0";
				//�ļ�����
				of.updateOrder();
				cout << "��ȡ��ԤԼ";
				break;
			}
		}
		cout << "������������������" << endl;
	}
	system("pause");
	system("cls");
}