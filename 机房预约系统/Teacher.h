#pragma once
#include <iostream>
#include "Identity.h"
#include <vector>
using namespace std;


class Teacher:public Identity
{
public:
	Teacher();
	Teacher(int empId, string name, string pwd);
	virtual void openMenu();
	void showAllOrder();//查看所有预约
	void validOrder();//审核预约
	int m_EmpId; //教师编号
};

