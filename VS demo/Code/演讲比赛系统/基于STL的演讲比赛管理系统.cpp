#include "speaker.h"
#include <iostream>
#include <cstdio>
#include <ctime>
#include "speechManager.h"

using namespace std;

int main() {
	SpeechManager sm;
	srand((unsigned int)time(NULL));
	//测试创建是否成功
	/*for (map<int, speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++) {
		cout << "编号:" << it->first << " 姓名： " << it->second.m_Name << "得分:" << it->second.m_Score[0] << endl;
	}*/

	int choice=1;
	while (choice) {
		sm.showMenu();
		cout << "请输入您的选择：";
		cin >> choice;
		switch (choice)
		{
		case 0:sm.exitSystem();  break;
		case 1:sm.startSpeech(); break;
		case 2:sm.clearRecord(); break;
		case 3: break;
		default:
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}