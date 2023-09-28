#pragma once
#include<vector>
#include <iostream>
#include <cstdio>
using namespace std;
class speaker {
public:
	//编号直接在map容器中创建make_pair
	string m_Name;
	double m_Score[2];//最多两轮得分
};

