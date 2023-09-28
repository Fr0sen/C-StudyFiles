#pragma once
#include <iostream>
#include <vector>
#include "speaker.h"
#include <map>
using namespace std;

class SpeechManager {
public:
	//���캯��
	SpeechManager();
	//��������
	~SpeechManager();

	//��ʼ������������
	void initSpeech();

	//����12��ѡ��
	void createSpeaker();

	//�˵�����
	void showMenu();
	//�˳�����
	void exitSystem();

	vector<int> v1;//��һ�� 12��
	vector<int> v2;//6��
	vector<int> vVectory;//ʤ����ǰ����

	map<int, speaker > m_Speaker;  //��Ϊÿ���˵ı�Ŷ������ظ�

	void startSpeech();

	void speechDraw();

	void clearRecord();

	void speechContest();	//����

	void showScore();//��ʾ�÷�

	int m_Indexl;//�������ִ�

	void saveScore();//����������ļ���

	void loadRecord();//��ȡ��¼

	void showRecord();//

	bool fileIsEmpty;//�ж��ļ��Ƿ�Ϊ��
	map<int, vector<string>> m_Record;//��������¼������
};