#pragma once
#include <iostream>
#include <string>
using namespace std;

class Worker {   //所有工人的类
public:
	virtual void showInfo() = 0;     //显示个人信息
	virtual string getDeptName() = 0;//获取岗位名称
	int m_Id;
	string m_Name;
	int m_DeptId;
	
private:
	static int count;
};