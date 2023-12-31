#pragma once
#include "Manager.h"
using namespace std;
#include <fstream>
#include <algorithm>
#include "globalFile.h"
#include "Teacher.h"
#include "Identity.h"
#include "computerRoom.h"
#include "Student.h"


Manager::Manager() {


}

void Manager::initVector() {
	//确保容器清空状态
	vStu.clear();
	vTea.clear();
	//读取信息 学生、老师
	ifstream ifs;
	ifs.open(STUDENT_FILE, ios::in);//读取
	if (!ifs.is_open()) {
		cout << "文件读取失败" << endl;
		return;
	}
	Student s;
	while (ifs >> s.m_Id && ifs >> s.m_Name && ifs >> s.m_Pwd) {
		vStu.push_back(s);
	}
	cout << "当前学生数量为：" << vStu.size() << endl;
	ifs.close();

	//读取信息  老师
	ifs.open(TEACHER_FILE, ios::in);
	Teacher t;
	while (ifs >> t.m_EmpId && ifs >> t.m_Name && ifs >> t.m_Pwd) {
		vTea.push_back(t);
	}
	cout << "当前老师的数量为:" << vTea.size() << endl;
	ifs.close();
	 


}

bool Manager::checkRepeat(int id, int type) {
	if (type == 1) {
		for (vector<Student>::iterator it = vStu.begin(); it != vStu.end(); it++) {
			if (id == it->m_Id) {
				return true;
			}
		}
	}
	else 
	{
		for(vector<Teacher>::iterator it=vTea.begin();it!=vTea.end();it++){
			if (id == it->m_EmpId) {
				return true;  
			}
		}
	}
	return false;
}

Manager::Manager(string name, string pwd) {

	//初始化管理员信息
	this->m_Name = name;
	this->m_Pwd = pwd;
	//初始化容器，获取到所有文件中 老师、学生信息
	this->initVector();

	//初始化机房信息
	ifstream ifs;
	ifs.open(COMPUTER_FILE, ios::in);
	computerRoom com;
	while (ifs >> com.m_ComId && ifs >> com.m_MaxNum) {
		vCom.push_back(com);
	}
	ifs.close();
	cout << "机房的数量为：" << vCom.size() << endl;

}

//菜单界面
void Manager::openMenu() {
	cout << "\t欢迎管理员" << this->m_Name << "登录！" << endl;
	cout << "\t1.添加账号" << endl;
	cout << "\t2.查看账号" << endl;
	cout << "\t3.查看机房" << endl;
	cout << "\t4.清空预约" << endl;
	cout << "\t0.注销登录" << endl;
	cout << "\t请输入您的选择" << endl;

}
void Manager::addPerson() {
	cout << "请输入添加账号的类型" << endl;
	cout << "1.添加学生" << endl;
	cout << "2.添加老师" << endl;
	string fileName;//操作的文件名
	string tip;//提示id号
	string errorTip;

	ofstream ofs;
	int select = 0;
	cin >> select;
	if (select == 1) {
		//添加的是学生
		fileName = STUDENT_FILE;
		tip = "请输入学号:";
		errorTip = "学号重复，请重新输入";
	}
	else {
		fileName = TEACHER_FILE;
		tip = "请输入职工编号";
		errorTip = "职工号重复，请重新输入";
	}
	ofs.open(fileName, ios::out | ios::app);//利用追加方式写文件
	int id;
	string name;
	string pwd;
	cout << tip << endl;

	while (true) {
		cin >> id;
		bool ret = checkRepeat(id, select);
		if (ret) {
			cout << errorTip << endl;
		}
		else break;
	}

	cout << "请输入姓名:" << endl;
	cin >> name;
	cout << "请输入密码" << endl;
	cin >> pwd;
	//向文件中添加数据
	ofs << id << " " << name << " " << pwd << " " << endl;
	
	if (select == 1) {
		Student s(id, name, pwd);
		vStu.push_back(s);
	}
	else {
		Teacher s(id, name, pwd);
		vTea.push_back(s);
	}

	cout << "添加成功" << endl;
	system("pause");
	system("cls");
	ofs.close();	 

	this->initVector();
}

bool cmpTea(Teacher &a,Teacher &b) {
	return a.m_EmpId < b.m_EmpId;
}

bool cmpStu(Student& a, Student& b) {
	return a.m_Id < b.m_Id;
}

void printStu(Student &s) {//加引用快一旦
	cout << "学号：" << s.m_Id << "姓名: " << s.m_Name << "密码：" << s.m_Pwd << endl;
}
void printTea(Teacher& s) {//加引用快一旦
	cout << "学号：" << s.m_EmpId << "姓名: " << s.m_Name << "密码：" << s.m_Pwd << endl;
}


void Manager::showPerson() {
	cout << "请选择查看内容：" << endl;
	cout << "1.查看所有学生" << endl;
	cout << "2.查看所有老师" << endl;
	int select = 0;
	cin >> select;

	if (select == 1) {
		//查看学生 
		sort(vStu.begin(), vStu.end(), cmpStu);
		for_each(vStu.begin(), vStu.end(), printStu);	
	}
	else {
		//查看老师
		sort(vTea.begin(), vTea.end(), cmpTea);
		for_each(vTea.begin(), vTea.end(), printTea);

	}

	system("pause");
	system("cls");
	
}

void Manager::showComputer() {
	cout << "机房信息如下：" << endl;
	for (vector<computerRoom>::iterator it = vCom.begin(); it != vCom.end(); it++) {
		cout << "机房编号：" << it->m_ComId << "机房最大容量:" << it->m_MaxNum << endl;
	}
	system("pause");
	system("cls");

}
void Manager::cleanFile() {
	ofstream ofs(ORDER_FILE, ios::trunc);
	ofs.close();
	cout << "清空成功!" << endl;
	system("pause");
	system("cls");
}


