#pragma once
#include <iostream>
#include <string>
using namespace std;

class Worker {   //���й��˵���
public:
	virtual void showInfo() = 0;     //��ʾ������Ϣ
	virtual string getDeptName() = 0;//��ȡ��λ����
	int m_Id;
	string m_Name;
	int m_DeptId;
	
private:
	static int count;
};