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
	void showAllOrder();//�鿴����ԤԼ
	void validOrder();//���ԤԼ
	int m_EmpId; //��ʦ���
};

