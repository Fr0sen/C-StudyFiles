#pragma once
#include <cstdio>
#include <string>
using namespace std;
class Identity  //身份抽象类
{
public:
	virtual void openMenu() = 0; //每个身份对应的菜单界面不一样，只需要写出接口即可,所以写的纯虚函数
	string m_Name;
	string m_Pwd;
};
