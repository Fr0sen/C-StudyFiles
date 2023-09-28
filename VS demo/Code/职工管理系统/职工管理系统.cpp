#include <iostream>
#include <string>
#include "employee.h"
#include "Boss.h"
#include "manager.h"
#include "WorkManager.h"
using namespace std;

void test() {

}

int main() {
	/*Worker* worker = NULL;
	worker = new   Employee(1, "张三", 1);
	worker->showInfo();
	delete worker;
	worker = new   Manager(2, "张er",2);
	worker->showInfo();
	delete worker;
	worker = new	Boss(3, "张s", 3);
	worker->showInfo();
	delete worker;*/

	WorkManager wm;
	int choice = 0;
	//wm.init_Emp();
	while (true) {
		wm.Show_Menu();
		cout << "请输入您的选择:" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0:   //退出
			system("pause");
			wm.exitSystem();
			break;
		case 1:  //增加职工
			wm.Add_Emp();
			break;
		case 2:  //显示职工
			wm.show_Emp();
			break;
		case 3:  //删除职工
			wm.Del_Emp();
			break;
		case 4:  //修改职工
			wm.Mod_Emp();
			break;
		case 5:  //查找职工
			wm.Find_Emp();
			break;
		case 6:  //按照编号排序
			wm.Sort_Emp();
			break;
		case 7:  //清空所有文档
			wm.Clean_File();
			break;
		default:
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}