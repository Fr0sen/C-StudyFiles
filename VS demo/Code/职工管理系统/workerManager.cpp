#include "WorkManager.h"
#include "employee.h"
#include "boss.h"
#include <fstream>
#include "Worker.h"
#include "manager.h"

#define FILENAME "empFile.txt"

int WorkManager::get_EmpNum() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	int dId;
	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> dId) {  //一行一行的读
		//统计人数变量
		num++;
	} 
	return num++;
}

void WorkManager::Find_Emp() {
	if (this->m_FileIsEmpty) {
		cout << "文件不存在或记录为空!" << endl;
	}
	else {
		cout << "请输入查找的方式：" << endl;
		cout << "1.按照职工编号查找" << endl;
		cout << "2.按照姓名查找" << endl;
		int select = 0;
		cin >> select;
		if (select == 1) {
			int id;
			cout << "请输入查找的职工编号：" << endl;
			cin >> id;
			int ret = IsExist(id);
			if (ret != -1) {
				cout << "查找成功!该职工信息如下：" << endl;
				this->m_EmpArray[ret]->showInfo();
			}
			else {
				cout << "查找失败，查无此人" << endl;
			}
		}
		else if (select == 2) {
			string name;
			cout << "请输入查找的姓名:" << endl;
			cin >> name;
			bool flag = false;
			for (int i = 0; i < m_EmpNum; i++) {
				if (m_EmpArray[i]->m_Name == name) {
					cout << "查找成功，职工编号为："
						<< m_EmpArray[i]->m_Id
						<< " 号的信息如下：" << endl;
					flag = true;
					this->m_EmpArray[i]->showInfo();
				}
			}
			if (flag == false) {
				cout << "查无此人" << endl;
			}
		}
		system("pause");
		system("cls");
	}
}

void WorkManager::Clean_File() {
	cout << "确认清空？" << endl;
	cout << "1.确认" << endl;
	cout << "2.返回" << endl;
	int select = 0;
	cin >> select;
	if (select == 1) {
		ofstream ofs(FILENAME, ios::trunc);
		ofs.close();
		if (this->m_EmpArray != NULL) {
			for (int i = 0; i < this->m_EmpNum; i++) {
				if (this->m_EmpArray[i] != NULL) {
					delete this->m_EmpArray[i];
				}
			}
			this->m_EmpNum = 0;
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_FileIsEmpty = true;
		}
	}
	system("pause");
	system("cls");
}

void WorkManager::Sort_Emp() {
	if (this->m_FileIsEmpty) {
		cout << "文件不存在或者记录为空!" << endl;
		system("pause");
		system("cls");
	}
	else {
		cout << "请选择排序方式" << endl;
		cout << "1.职工号升序" << endl;
		cout << "2.职工号降序" << endl;
		int select = 0;
		cin >> select;
		for (int i = 0; i < m_EmpNum; i++) { 
			int minOrMax = i;                                   //一轮找一个最小值，选择排序
			for (int j = i + 1; j < m_EmpNum; j++) {
				if (select == 1) { //升序
					if (m_EmpArray[minOrMax]->m_Id > m_EmpArray[j]->m_Id) {
						minOrMax = j;
					}
				}
				else {//降序
					if (m_EmpArray[minOrMax]->m_Id < m_EmpArray[j]->m_Id) {
						minOrMax = j;
					}
				}
			}
			if (i != minOrMax) {
				Worker* temp = m_EmpArray[i];
				m_EmpArray[i] = m_EmpArray[minOrMax];
				m_EmpArray[minOrMax] = temp;
			}
		}
		cout << "排序成功，排序后结果为：" << endl;
		this->save();
		this->show_Emp();
	}

}

void WorkManager::Mod_Emp() {
	if (this->m_FileIsEmpty) {
		cout << "文件不存在或者记录为空!" << endl;
	}
	else { 
		cout << "请输入修改职工的编号" << endl;
		int id;
		cin >> id;
		int ret = this->IsExist(id);
		if (ret != -1) {
			delete this->m_EmpArray[ret];
			int	newId = 0;
			string newName = "";
			int dSelect = 0;
			cout << "查到：" << id << "号职工，请输入新职工号：" << endl;
			cin >> newId;
			cout << "输入姓名" << endl;
			cin >> newName;
			cout << "输入岗位：" << endl;
			cout << "1.普通职工" << endl;
			cout <<"3.老板" << endl;
			cin >> dSelect;
			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(newId, newName, dSelect);
				break;
			case 3:
				worker = new Boss(newId, newName, dSelect);
			default:
				break;
			}
			this->m_EmpArray[ret] = worker;
			cout << "修改成功！"  << endl;
			this->save();
		}
		else {
			cout << "查无此人" << endl;
		}
		system("pause");
		system("cls");
	}
}

void WorkManager::init_Emp() {  //为了读取上次保存在文件中的员工信息
	ifstream ifs;
	ifs.open(FILENAME, ios::in); 
	int id;
	string name;
	int dId;
	int index=0;
	while (ifs >> id && ifs >> name && ifs >> dId) {
		Worker* worker = NULL;
		if (dId == 1)//普通职工
		{
			worker = new Employee(id, name, dId);
			this->m_EmpArray[index] = worker;  //放到已经开辟好的数组当中
		}else if(dId == 3){
			worker = new Boss(id, name, dId);
			this->m_EmpArray[index] = worker;  //放到已经开辟好的数组当中
		}
		else if (dId == 2) {
			worker = new Manager(id, name, dId);
			this->m_EmpArray[index] = worker;
		}
		index++;
	}
	ifs.close();


}

WorkManager::WorkManager() {
	this->m_EmpNum = 0;
	this->m_EmpArray = NULL;

	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	if (!ifs.is_open()) {
		cout << "文件不存在" << endl;
		
		ifs.close();
		return;
	}
	

	//2.文件存在，数据为空
	char ch;
	ifs >> ch;
	if (ifs.eof()) {
		//文件为空
		cout << "文件为空！" << endl;
		this->m_EmpNum = 0;
		this->m_FileIsEmpty = true;
		this->m_EmpArray = NULL; 
		ifs.close();
		return;
	}



	////初始化属性
	//this->m_EmpNum = 0;
	//this->m_EmpArray = NULL;

	//3.文件存在，并且记录数据
	int num = this->get_EmpNum();
	cout << "职工人数为" << num << endl;
	this->m_EmpNum = num;
	this->m_EmpArray = new Worker * [this->m_EmpNum]; //创建一个数组
	this->init_Emp();

	for (int i = 0; i < this->m_EmpNum; i++) {
		cout << "职工编号: " << this->m_EmpArray[i]->m_Id 
			<< "姓名：" << this->m_EmpArray[i]->m_Name 
			<< "部门编号:" << this->m_EmpArray[i]->m_DeptId << endl;
	}
}

void WorkManager::save() {
	ofstream ofs;
	ofs.open(FILENAME, ios::out);//写入
	for (int i = 0; i < m_EmpNum; i++) {
		ofs << this->m_EmpArray[i]->m_Id << " "  <<
			this->m_EmpArray[i]->m_Name << " "  << 
			this->m_EmpArray[i]->m_DeptId << endl;
	}
	ofs.close();
}

int WorkManager::IsExist(int id) {
	int index = -1;
	for (int i = 0; i < this->m_EmpNum; i++) {
		if (this->m_EmpArray[i]->m_Id == id) {
			index = i;
			break;
		}
	}
	return index;
}
void WorkManager::Del_Emp() {
	if (this->m_FileIsEmpty) {
		cout << "文件不存在或者记录为空!" << endl;
	}
	else {
		cout << "请输入想要删除职工编号：" << endl;
		int id = 0;
		cin >> id;
		int index = this->IsExist(id);
		if (index != -1) { //说明职工存在并且要删除掉index上的职工
			//数据前移
			for (int i = index; i < this->m_EmpNum - 1; i++) {
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;//少了一个人
			//数据同步到文件中
			this->save();
			cout << "删除成功!";
		}
		else {
			cout << "删除失败,未找到该职工" << endl; 
		}
	}
	system("pause");
	system("cls");
}

void WorkManager::Add_Emp() {
	cout << "请输入添加职工数量：" << endl;

	int addNum = 0;
	cin >> addNum;
	if (addNum > 0) {
		//添加
		//计算添加新空间大小
		int newSize = this->m_EmpNum + addNum;
		Worker** newSpace = new Worker * [newSize];//保存每个指针成员的数组
		if (this->m_EmpArray != NULL) {
			for (int i = 0; i <this->m_EmpNum; i++) { //大小
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//批量添加新数据
		for (int i = 0; i < addNum; i++) {
			int id;
			string name;
			int dSelect;
			cout << "请输入第" << i + 1 << " 个新职工编号:" << endl;
			cin >> id;
			cout << "请输入第" << i + 1 << " 个新职工姓名:" << endl;
			cin >> name;
			cout << "请选择该职工岗位:" << endl << "1.普通职工" << endl << "2.经理" << endl << "3.老板" << endl;
			cin >> dSelect;

			Worker* worker = NULL;
			switch (dSelect)
			{
			case 1:
				worker = new Employee(id, name, 1);
				break;
			case 2:
				worker = new Manager(id, name, 2);
				break;
			case 3:
				worker = new Boss(id, name, 3);
				break;
			default:
				break;
			}
			//将创建的职工指针要保存到数组当中
			newSpace[this->m_EmpNum + i] = worker;
		}
		//释放原有的空间
		delete[] this->m_EmpArray;
		this->m_EmpArray = newSpace;
		this->m_EmpNum = newSize;
		this->m_FileIsEmpty = false;//更新一下职工不为空

		this->save();
		cout << "成功添加" << addNum << "名新职工！" << endl;
	}
	else {
		cout << "输入有误" << endl;
	}

	system("pause");
	system("cls");
}