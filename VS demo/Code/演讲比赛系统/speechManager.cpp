#include "speechManager.h"
#include <algorithm>
#include <functional>
#include <vector>
#include <deque>
#include <fstream>
#include <iostream>
#include <numeric>
//构造函数
SpeechManager::SpeechManager() {
	//初始化容器和属性
	this->initSpeech();

	//创建12名选手
	this->createSpeaker();
	//获取往届记录
	this->loadRecord();
}
//析构函数
SpeechManager::~SpeechManager() {

}




void SpeechManager::createSpeaker() {
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++) {
		string name = "选手";
		name += nameSeed[i];
		//创建了具体的选手
		speaker sp;
		sp.m_Name = name;

		for (int j = 0; j < 2; j++) {
			sp.m_Score[j] = 0;
		}
		//创建选手编号并且放到v1容器中
		this->v1.push_back(i + 10001);
		//选手编号以及对应选手 放到map容器中
		this->m_Speaker.insert(make_pair(i + 10001,sp));
	}
}

void SpeechManager::speechDraw() {
	cout << "第 << " << this->m_Indexl << " >>轮比赛选手正在抽签" << endl;
	cout << "----------------------------" << endl;
	cout << "抽签后演讲顺序如下： " << endl;
	if (this->m_Indexl == 1) {
		//第一轮的比赛
	  	random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
			cout << *it << " ";
		}
		cout << endl;
	}
	else {
		//第二轮比赛
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++) {
			cout << *it << " ";
		}
		cout << endl;
	}
	cout << "----------------------------" << endl;
	system("pause");

}

void SpeechManager::speechContest() {
	cout << "------------------第《" << this->m_Indexl << "》轮比赛正式开始----------" << endl;
	vector<int> v_Src;//比赛选手的容器

	//六个人一组
	multimap<double, int, greater<double>> groupScore;
	int num = 0;//记录人员的个数,6人一组

	if (this->m_Indexl == 1) {
		v_Src = v1;
	}
	else {
		v_Src = v2;
	}
	//遍历所有的选手 
	for (vector<int> ::iterator it = v_Src.begin(); it != v_Src.end(); it++) {
		num++;
		//评委打分
		deque<double>d;
		for (int i = 0; i < 10; i++) {
			double score = (rand() % 401 + 600)/10.f;
			//cout << score << " ";
			d.push_back(score);
		}
		sort(d.begin(), d.end(), greater<double>());//排序
		d.pop_front();//去除最高分
		d.pop_back();//去除最低分
		double sum = accumulate(d.begin(), d.end(), 0.0f);
		double avg = sum / (double)d.size();//平均分
		//cout << endl;
		//打印平均分
		//cout << "编号：" << *it << "姓名: " << this->m_Speaker[*it].m_Name << " 获取平均分：" << avg << endl;	

		//将平均分放入到map容器里
		this->m_Speaker[*it].m_Score[this->m_Indexl - 1] = avg;
		//将打分数据放入到临时小组的容器中
		groupScore.insert(make_pair(avg, *it));//key是得分,value是具体选手的编号
		//每六个人取出前三名
		if (num % 6 == 0) {
			cout << "第" << num / 6 << "小组比赛名次如下：" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++) {
				cout << "编号：" << it->second << "姓名：" << this->m_Speaker[it->second].m_Name << " 成绩：" <<
					this->m_Speaker[it->second].m_Score[this->m_Indexl - 1] << endl;
			}
			//取走前三名放入到下一个容器中
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end()&&count<3;count++, it++) {
				if (this->m_Indexl == 1) {
					v2.push_back(( * it).second);
				}
				else {
					vVectory.push_back(( * it).second);
				}
			}
			groupScore.clear();//小组容器清空
		}

	}
	cout << "第" << this->m_Indexl << "轮比赛完毕" << endl;
	system("pause");
}

void SpeechManager::showScore() {
	cout << "------------第" << this->m_Indexl << "轮晋级的选手信息如下: " << endl;
	vector<int> v;
	if (this->m_Indexl == 1) {
		v = v2;
	}
	else {
		v = vVectory;
	}

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "选手编号: " << *it << "姓名:" << this->m_Speaker[*it].m_Name <<
			this->m_Speaker[*it].m_Score[this->m_Indexl - 1] << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
	this->showMenu();

}

void SpeechManager::loadRecord() {
	ifstream ifs("speech.csv", ios::in);//读文件

	if (!ifs.is_open()) {
		this->fileIsEmpty = true;
		cout << "文件不存在" << endl;
		ifs.close();
		return;
	}
	char ch;    //先尝试读取一个字节
	ifs >> ch;
	if(ifs.eof()){
		cout << "文件为空" << endl;
		this->fileIsEmpty = true;
		ifs.close();
		return;
	}
	//文件不为空
	vector<string>v;//存放6个string字符串

	this->fileIsEmpty = false;
	ifs.putback(ch);//将上面读取的单个字符再放回来
	string data;
	int index = 0;
	while (ifs >> data) {//每一行
		//cout << data << endl;
		int start = 0;
		int pos = - 1;//查到","位置的变量
		while (true) {
			pos = data.find(",", start);
			if (pos == -1) {
				//没有找到
				break;
			}
			string temp = data.substr(start, pos - start);
			v.push_back(temp);
			start = pos + 1;
		}
		this->m_Record.insert(make_pair(index, v));//记录往届比赛记录的容器
		index++;
	}
	ifs.close();	
	for (map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end(); it++) {
		cout <<"第" << it->first + 1 <<"届" << "冠军得分: " << it->second[0] << "分数： " << it->second[1] << endl;
	}
	
}

void SpeechManager::showRecord() {
	if (this->fileIsEmpty) {
		cout << "文件不存在，或者记录为空!" << endl;
	}
	for (int i = 0; i < this->m_Record.size(); i++) {
		cout << "第" << i + 1 << "届" << "冠军编号：" << this->m_Record[i][0] << "得分： " << this->m_Record[i][1] << " "
			"亚军军编号：" << this->m_Record[i][2] << "得分： " << this->m_Record[i][3] << " "
			"季军编号：" << this->m_Record[i][4] << "得分： " << this->m_Record[i][5] << endl;
	}
	system("pause");
	system("cls");
}

void SpeechManager::saveScore() {
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);//用追加的方式写文件

	//将每个选手数据 写入到文件中
	for (vector<int>::iterator it = vVectory.begin(); it != vVectory.end(); it++) {  //冠军编号，得分，亚军xxxx季军xxxx
		ofs << *it << "," << this->m_Speaker[*it].m_Score[1] << ",";
	}
	ofs << endl;
	//关闭文件
	ofs.close();
	cout << "记录已经保存完了" << endl;
	this->fileIsEmpty = false;
}

void SpeechManager::startSpeech() {
	//第一轮比赛
	//1.抽签
	this->speechDraw();

	//2.比赛
	this->speechContest();

	//3.显示比赛结果
	this->showScore();
	//第二轮比赛
	this->m_Indexl++;
	//1.抽签
	this->speechDraw();

	//2.比赛
	this->speechContest();

	//3.打分，显示结果
	this->showScore();

	//4.保存比赛结果
	this->saveScore();
	cout << "本届比赛完毕" << endl;
	system("pause");
	system("cls"); 
}

void SpeechManager::clearRecord() {
	cout << "是否确定清空文件？" << endl;
	cout << "1.是" << endl;
	cout << "2.否" << endl;
	int select = 0;
	cin >> select;
	if (select == 1) {
		ofstream ofs("speech.csv", ios::trunc);  //如果存在文件，先删除，再创建
		ofs.close();

		this->initSpeech();
		this->createSpeaker();
		this->loadRecord();
		cout << "清空成功!";
	}


}

void SpeechManager::initSpeech() {
	//容器都置空
	this->v1.clear();
	this->v2.clear();
	this->vVectory.clear();
	this->m_Speaker.clear();
	this->m_Indexl = 1;
	this->m_Record.clear();//初始化记录容器

}



void SpeechManager::exitSystem() {
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

void SpeechManager::showMenu() {
	cout << "*********************" << endl;
	cout << "***欢迎参加演讲比赛**" << endl;
	cout << "***1.开始演讲比赛****" << endl;
	cout << "***2.查看往届记录****" << endl;
	cout << "***3.清空比赛记录****" << endl;
	cout << "***0.退出比赛程序****" << endl;
	cout << "*********************" << endl;
}