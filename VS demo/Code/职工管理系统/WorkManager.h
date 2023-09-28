#pragma once              //只编译一次,防止头文件重复包含
#include <cstdio> 
#include <string>
#include <iostream>
#include "Worker.h"
using namespace std;

class WorkManager {
public:
	bool m_FileIsEmpty;
	WorkManager();
	void Clean_File();
	void Find_Emp();
	void Sort_Emp();
	void Show_Menu();
	void Mod_Emp();
	~WorkManager();
	void exitSystem();
	void init_Emp();//初始化员工
	//记录职工人数
	int m_EmpNum;
	//职工数组的指针
	Worker** m_EmpArray;
	int get_EmpNum();
	void Add_Emp();
	void save();  //保存文件
	void show_Emp();
	void Del_Emp();
	int IsExist(int id);

};

