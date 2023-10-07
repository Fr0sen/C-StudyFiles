#include<iostream>
#include "globalFile.h"
#include "Student.h"
#include "Teacher.h"
#include "Manager.h"
#include <vector>
#include <fstream>
#include "Identity.h"
using namespace std;

//进入学生子菜单界面
void studentMenu(Identity*& student) {
	while (true) {
		//调用学生子菜单
		student ->openMenu();
		Student* stu = (Student*)student;//强制转换
		int select = 0;
		cin >> select;
		if (select == 1) {
			//申请预约
			stu->applyOrder();
		}
		else if (select == 2) {
			//查看自身预约
			stu->showMyOrder();
		}
		else if (select == 3) {
			//查看所有人预约
			stu->showAllOrder();
		}
		else if (select == 4) {
			//取消预约
			stu->cancelOrder();

		}
		else {
			//注销登录
			delete student;
			cout << "注销成功！" << endl;
			system("pause");
			system("cls");
			return;
		}


	}
}


//进入教师子菜单揭秘那
void teacherMenu(Identity*& teacher) {
	while (true) {
		//调用子菜单界面
		teacher->openMenu();
		Teacher* tea = (Teacher*)teacher;
		int select = 0;//接受用户选择
		cin >> select;
		if (select == 1) {
			tea->showAllOrder();//查看所有预约
		}
		else if (select == 2) {
			tea->validOrder();//审核预约
		}
		else {
			delete teacher;
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
		}
	}
}

//进入管理员子菜单界面
void managerMenu(Identity*& manager) { 
	while (true) {
		//调用管理员子菜单
		manager->openMenu();
		//将父类指针转为子类指针，调用子类里其他接口
		Manager* man = (Manager*)manager;

		int select = 0;
		//接受用户选择
		cin >> select;
		if (select == 1) {//添加账号
			cout << "添加账号" << endl;
			man->addPerson();
		}
		else if (select == 2) {//查看账号
			cout << "查看账号" << endl;
			man->showPerson();
		}else if(select ==3){//查看机房
			cout << "查看机房" << endl;
			man->showComputer();
		}
		else if(select ==4) {
			cout << "清空预约" << endl;
			man->cleanFile();
		}
		else {
			delete manager;
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
		}
	}

}



void LoginIn(string fileName1, int type) {
	Identity* person = NULL; //先创建一个父类指针，这样不同的子类就会让父类指针指向不同的新子类地址空间
	ifstream ifs;  //读文件
	ifs.open(fileName1, ios::in);
	if (!ifs.is_open()) {
		cout << "文件不存在" << endl;
		ifs.close();
		return;
	}
	//准备接受用户的信息
	int id = 0;
	string name;
	string pwd;
	
	//判断身份
	if (type == 1)//学生身份
	{
		cout << "请输入你的学号" << endl;
		cin >> id;
	}
	else if (type == 2) {
		cout << "请输入您的职工号:" << endl;
		cin >> id;
	}
	cout << "请输入用户名：" << endl;
	cin >> name;
	cout << "请输入密码：" << endl;
	cin >> pwd;

	int fileId;
	string fileName, filePwd;
	if (type == 1) {
		//学生身份认证
		while (ifs >> fileId && ifs >> fileName && ifs >> filePwd) {
			if (id == fileId&&name==fileName&&pwd==filePwd) {
				cout << "学生认证成功" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, pwd); 
				ifs.close();
				studentMenu(person);
				return;
			}
		}
	}
	else if (type == 2) {
		//教师身份认证
		while (ifs >> fileId && ifs >> fileName && ifs >> filePwd) {
			if (id == fileId && name == fileName && pwd == filePwd) {
				cout << "教师认证成功" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);
				ifs.close();
				teacherMenu(person);
				return;
			}
		}
	}
	else if (type == 3) {
		//管理员身份认证
		while (ifs >> fileName && ifs >> filePwd) {
			if (name == fileName && pwd == filePwd) {
				cout << "管理员认证成功" << endl;
				system("pause");
				system("cls");
				person = new Manager(name, pwd);
				ifs.close();
				//进入管理员子菜单界面
				managerMenu(person);
				return;
			}
		}
	}
 	cout << "验证登录失败" << endl;
	system("pause");
	system("cls");
	return;

}

int main() {

	int select;
	while (1){
		cout << "===欢迎进入系统===" << endl;
		cout << "===1.我是学生===" << endl;
		cout << "===2.我是老师===" << endl;
		cout << "===3.我是管理员===" << endl;
		cout << "===4.退出===" << endl;
		cout << "请输入您的选择" << endl;

		cin >> select;

		switch (select)
		{
		case 1://学生
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2://老师
			LoginIn(TEACHER_FILE, 2);
			break;
		case 3://管理员
			LoginIn(ADMIN_FILE, 3);
			break;
		case 4://退出
			cout << "欢迎下次使用";
			system("pause");
			return 0;
			break;
		default:
			cout << "输入有误，请重新选择" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}