#pragma once
#include <iostream>
#include <cstdio>
#include "Identity.h"
using namespace std;
#include "computerRoom.h"
#include <vector>
#include "orderFile.h"
class Student:public Identity
{
public:
	Student();
	Student(int id ,string name,string pwd);
	virtual void openMenu();
	void applyOrder();
	void showAllOrder();
	void showMyOrder();
	void cancelOrder();

	int m_Id;

	//»ú·¿ÈÝÆ÷
	vector<computerRoom> vCom;
};

