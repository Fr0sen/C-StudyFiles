#pragma once
#include <cstdio>
#include <string>
using namespace std;
class Identity  //��ݳ�����
{
public:
	virtual void openMenu() = 0; //ÿ����ݶ�Ӧ�Ĳ˵����治һ����ֻ��Ҫд���ӿڼ���,����д�Ĵ��麯��
	string m_Name;
	string m_Pwd;
};
