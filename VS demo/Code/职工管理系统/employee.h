#pragma once
#include <iostream>
#include "Worker.h"
using namespace std;
#include <string>

class Employee :public Worker {   //ְ������  ����������һЩְ��ר���ķ���
public:
	Employee(int id, string name, int dId);
	virtual  void showInfo();
	virtual string getDeptName();
};