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
	worker = new   Employee(1, "����", 1);
	worker->showInfo();
	delete worker;
	worker = new   Manager(2, "��er",2);
	worker->showInfo();
	delete worker;
	worker = new	Boss(3, "��s", 3);
	worker->showInfo();
	delete worker;*/

	WorkManager wm;
	int choice = 0;
	//wm.init_Emp();
	while (true) {
		wm.Show_Menu();
		cout << "����������ѡ��:" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0:   //�˳�
			system("pause");
			wm.exitSystem();
			break;
		case 1:  //����ְ��
			wm.Add_Emp();
			break;
		case 2:  //��ʾְ��
			wm.show_Emp();
			break;
		case 3:  //ɾ��ְ��
			wm.Del_Emp();
			break;
		case 4:  //�޸�ְ��
			wm.Mod_Emp();
			break;
		case 5:  //����ְ��
			wm.Find_Emp();
			break;
		case 6:  //���ձ������
			wm.Sort_Emp();
			break;
		case 7:  //��������ĵ�
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