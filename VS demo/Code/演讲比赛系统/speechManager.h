#pragma once
#include <iostream>
#include <vector>
#include "speaker.h"
#include <map>
using namespace std;

class SpeechManager {
public:
	//构造函数
	SpeechManager();
	//析构函数
	~SpeechManager();

	//初始化容器和属性
	void initSpeech();

	//创建12名选手
	void createSpeaker();

	//菜单功能
	void showMenu();
	//退出功能
	void exitSystem();

	vector<int> v1;//第一轮 12人
	vector<int> v2;//6人
	vector<int> vVectory;//胜出的前三人

	map<int, speaker > m_Speaker;  //因为每个人的编号都不会重复

	void startSpeech();

	void speechDraw();

	void clearRecord();

	void speechContest();	//比赛

	void showScore();//显示得分

	int m_Indexl;//比赛的轮次

	void saveScore();//保存分数在文件中

	void loadRecord();//读取记录

	void showRecord();//

	bool fileIsEmpty;//判断文件是否为空
	map<int, vector<string>> m_Record;//存放往届记录的容器
};