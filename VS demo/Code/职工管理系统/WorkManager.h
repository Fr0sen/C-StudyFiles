#pragma once              //ֻ����һ��,��ֹͷ�ļ��ظ�����
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
	void init_Emp();//��ʼ��Ա��
	//��¼ְ������
	int m_EmpNum;
	//ְ�������ָ��
	Worker** m_EmpArray;
	int get_EmpNum();
	void Add_Emp();
	void save();  //�����ļ�
	void show_Emp();
	void Del_Emp();
	int IsExist(int id);

};

