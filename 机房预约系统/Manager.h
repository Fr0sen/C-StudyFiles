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
	//默认构造
	Manager();
	//有参构造
	Manager(string name, string pwd);

	virtual void openMenu();
	void addPerson();
	void showPerson();
	void showComputer();
	void cleanFile();

	//初始化容器
	void initVector();
	//学生容器
	vector<Student>vStu;
	//教师容器
	vector<Teacher>vTea;

	bool checkRepeat(int id, int type);


	//机房信息
	vector<computerRoom> vCom;

};