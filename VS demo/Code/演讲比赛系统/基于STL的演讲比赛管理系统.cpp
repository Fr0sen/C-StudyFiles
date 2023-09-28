#include "speaker.h"
#include <iostream>
#include <cstdio>
#include <ctime>
#include "speechManager.h"

using namespace std;

int main() {
	SpeechManager sm;
	srand((unsigned int)time(NULL));
	//���Դ����Ƿ�ɹ�
	/*for (map<int, speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++) {
		cout << "���:" << it->first << " ������ " << it->second.m_Name << "�÷�:" << it->second.m_Score[0] << endl;
	}*/

	int choice=1;
	while (choice) {
		sm.showMenu();
		cout << "����������ѡ��";
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