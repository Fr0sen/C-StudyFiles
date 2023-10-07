#include<iostream>
#include "globalFile.h"
#include "Student.h"
#include "Teacher.h"
#include "Manager.h"
#include <vector>
#include <fstream>
#include "Identity.h"
using namespace std;

//����ѧ���Ӳ˵�����
void studentMenu(Identity*& student) {
	while (true) {
		//����ѧ���Ӳ˵�
		student ->openMenu();
		Student* stu = (Student*)student;//ǿ��ת��
		int select = 0;
		cin >> select;
		if (select == 1) {
			//����ԤԼ
			stu->applyOrder();
		}
		else if (select == 2) {
			//�鿴����ԤԼ
			stu->showMyOrder();
		}
		else if (select == 3) {
			//�鿴������ԤԼ
			stu->showAllOrder();
		}
		else if (select == 4) {
			//ȡ��ԤԼ
			stu->cancelOrder();

		}
		else {
			//ע����¼
			delete student;
			cout << "ע���ɹ���" << endl;
			system("pause");
			system("cls");
			return;
		}


	}
}


//�����ʦ�Ӳ˵�������
void teacherMenu(Identity*& teacher) {
	while (true) {
		//�����Ӳ˵�����
		teacher->openMenu();
		Teacher* tea = (Teacher*)teacher;
		int select = 0;//�����û�ѡ��
		cin >> select;
		if (select == 1) {
			tea->showAllOrder();//�鿴����ԤԼ
		}
		else if (select == 2) {
			tea->validOrder();//���ԤԼ
		}
		else {
			delete teacher;
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}

//�������Ա�Ӳ˵�����
void managerMenu(Identity*& manager) { 
	while (true) {
		//���ù���Ա�Ӳ˵�
		manager->openMenu();
		//������ָ��תΪ����ָ�룬���������������ӿ�
		Manager* man = (Manager*)manager;

		int select = 0;
		//�����û�ѡ��
		cin >> select;
		if (select == 1) {//����˺�
			cout << "����˺�" << endl;
			man->addPerson();
		}
		else if (select == 2) {//�鿴�˺�
			cout << "�鿴�˺�" << endl;
			man->showPerson();
		}else if(select ==3){//�鿴����
			cout << "�鿴����" << endl;
			man->showComputer();
		}
		else if(select ==4) {
			cout << "���ԤԼ" << endl;
			man->cleanFile();
		}
		else {
			delete manager;
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}
	}

}



void LoginIn(string fileName1, int type) {
	Identity* person = NULL; //�ȴ���һ������ָ�룬������ͬ������ͻ��ø���ָ��ָ��ͬ���������ַ�ռ�
	ifstream ifs;  //���ļ�
	ifs.open(fileName1, ios::in);
	if (!ifs.is_open()) {
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}
	//׼�������û�����Ϣ
	int id = 0;
	string name;
	string pwd;
	
	//�ж����
	if (type == 1)//ѧ�����
	{
		cout << "���������ѧ��" << endl;
		cin >> id;
	}
	else if (type == 2) {
		cout << "����������ְ����:" << endl;
		cin >> id;
	}
	cout << "�������û�����" << endl;
	cin >> name;
	cout << "���������룺" << endl;
	cin >> pwd;

	int fileId;
	string fileName, filePwd;
	if (type == 1) {
		//ѧ�������֤
		while (ifs >> fileId && ifs >> fileName && ifs >> filePwd) {
			if (id == fileId&&name==fileName&&pwd==filePwd) {
				cout << "ѧ����֤�ɹ�" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, pwd); 
				ifs.close();
				studentMenu(person);
				return;
			}
		}
	}
	else if (type == 2) {
		//��ʦ�����֤
		while (ifs >> fileId && ifs >> fileName && ifs >> filePwd) {
			if (id == fileId && name == fileName && pwd == filePwd) {
				cout << "��ʦ��֤�ɹ�" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);
				ifs.close();
				teacherMenu(person);
				return;
			}
		}
	}
	else if (type == 3) {
		//����Ա�����֤
		while (ifs >> fileName && ifs >> filePwd) {
			if (name == fileName && pwd == filePwd) {
				cout << "����Ա��֤�ɹ�" << endl;
				system("pause");
				system("cls");
				person = new Manager(name, pwd);
				ifs.close();
				//�������Ա�Ӳ˵�����
				managerMenu(person);
				return;
			}
		}
	}
 	cout << "��֤��¼ʧ��" << endl;
	system("pause");
	system("cls");
	return;

}

int main() {

	int select;
	while (1){
		cout << "===��ӭ����ϵͳ===" << endl;
		cout << "===1.����ѧ��===" << endl;
		cout << "===2.������ʦ===" << endl;
		cout << "===3.���ǹ���Ա===" << endl;
		cout << "===4.�˳�===" << endl;
		cout << "����������ѡ��" << endl;

		cin >> select;

		switch (select)
		{
		case 1://ѧ��
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2://��ʦ
			LoginIn(TEACHER_FILE, 2);
			break;
		case 3://����Ա
			LoginIn(ADMIN_FILE, 3);
			break;
		case 4://�˳�
			cout << "��ӭ�´�ʹ��";
			system("pause");
			return 0;
			break;
		default:
			cout << "��������������ѡ��" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}