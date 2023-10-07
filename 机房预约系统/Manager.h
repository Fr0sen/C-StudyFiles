#pragma once
#include <iostream>
#include "Identity.h"
#include <vector>
#include "Teacher.h"
#include "Student.h"
#include <string>
#include "computerRoom.h"
using namespace std;

class Manager :public Identity {
public:
	//Ĭ�Ϲ���
	Manager();
	//�вι���
	Manager(string name, string pwd);

	virtual void openMenu();
	void addPerson();
	void showPerson();
	void showComputer();
	void cleanFile();

	//��ʼ������
	void initVector();
	//ѧ������
	vector<Student>vStu;
	//��ʦ����
	vector<Teacher>vTea;

	bool checkRepeat(int id, int type);


	//������Ϣ
	vector<computerRoom> vCom;

};