#include "Boss.h"
//这里只需要将没写的父类方法写上即可，不用再写类了，只写方法

Boss::Boss(int id,string name,int dId) {
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}

void Boss::showInfo() {
	cout << "职工编号: " << this->m_Id
		<< "\t职工姓名：" << this->m_Name
		<< "\t岗位" << this->getDeptName()
		<< "\t岗位职责：管理公司所有事务" << endl;
}

string Boss::getDeptName() {
	return string("总裁");
}


