#pragma once
#include <iostream>
#include "Worker.h"
using namespace std;
#include <string>

class Employee :public Worker {   //职工的类  ，用来抽象一些职工专属的方法
public:
	Employee(int id, string name, int dId);
	virtual  void showInfo();
	virtual string getDeptName();
};