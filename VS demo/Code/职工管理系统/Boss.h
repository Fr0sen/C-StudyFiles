#pragma once
#include <iostream>
#include "Worker.h"
using namespace std;
#include <string>

class Boss :public Worker {   //ְ������  ����������һЩְ��ר���ķ���
public:
	Boss(int id, string name, int dId);
	virtual  void showInfo();
	virtual string getDeptName();

};