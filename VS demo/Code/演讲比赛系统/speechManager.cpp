#include "speechManager.h"
#include <algorithm>
#include <functional>
#include <vector>
#include <deque>
#include <fstream>
#include <iostream>
#include <numeric>
//���캯��
SpeechManager::SpeechManager() {
	//��ʼ������������
	this->initSpeech();

	//����12��ѡ��
	this->createSpeaker();
	//��ȡ�����¼
	this->loadRecord();
}
//��������
SpeechManager::~SpeechManager() {

}




void SpeechManager::createSpeaker() {
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++) {
		string name = "ѡ��";
		name += nameSeed[i];
		//�����˾����ѡ��
		speaker sp;
		sp.m_Name = name;

		for (int j = 0; j < 2; j++) {
			sp.m_Score[j] = 0;
		}
		//����ѡ�ֱ�Ų��ҷŵ�v1������
		this->v1.push_back(i + 10001);
		//ѡ�ֱ���Լ���Ӧѡ�� �ŵ�map������
		this->m_Speaker.insert(make_pair(i + 10001,sp));
	}
}

void SpeechManager::speechDraw() {
	cout << "�� << " << this->m_Indexl << " >>�ֱ���ѡ�����ڳ�ǩ" << endl;
	cout << "----------------------------" << endl;
	cout << "��ǩ���ݽ�˳�����£� " << endl;
	if (this->m_Indexl == 1) {
		//��һ�ֵı���
	  	random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
			cout << *it << " ";
		}
		cout << endl;
	}
	else {
		//�ڶ��ֱ���
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
	cout << "------------------�ڡ�" << this->m_Indexl << "���ֱ�����ʽ��ʼ----------" << endl;
	vector<int> v_Src;//����ѡ�ֵ�����

	//������һ��
	multimap<double, int, greater<double>> groupScore;
	int num = 0;//��¼��Ա�ĸ���,6��һ��

	if (this->m_Indexl == 1) {
		v_Src = v1;
	}
	else {
		v_Src = v2;
	}
	//�������е�ѡ�� 
	for (vector<int> ::iterator it = v_Src.begin(); it != v_Src.end(); it++) {
		num++;
		//��ί���
		deque<double>d;
		for (int i = 0; i < 10; i++) {
			double score = (rand() % 401 + 600)/10.f;
			//cout << score << " ";
			d.push_back(score);
		}
		sort(d.begin(), d.end(), greater<double>());//����
		d.pop_front();//ȥ����߷�
		d.pop_back();//ȥ����ͷ�
		double sum = accumulate(d.begin(), d.end(), 0.0f);
		double avg = sum / (double)d.size();//ƽ����
		//cout << endl;
		//��ӡƽ����
		//cout << "��ţ�" << *it << "����: " << this->m_Speaker[*it].m_Name << " ��ȡƽ���֣�" << avg << endl;	

		//��ƽ���ַ��뵽map������
		this->m_Speaker[*it].m_Score[this->m_Indexl - 1] = avg;
		//��������ݷ��뵽��ʱС���������
		groupScore.insert(make_pair(avg, *it));//key�ǵ÷�,value�Ǿ���ѡ�ֵı��
		//ÿ������ȡ��ǰ����
		if (num % 6 == 0) {
			cout << "��" << num / 6 << "С������������£�" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++) {
				cout << "��ţ�" << it->second << "������" << this->m_Speaker[it->second].m_Name << " �ɼ���" <<
					this->m_Speaker[it->second].m_Score[this->m_Indexl - 1] << endl;
			}
			//ȡ��ǰ�������뵽��һ��������
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end()&&count<3;count++, it++) {
				if (this->m_Indexl == 1) {
					v2.push_back(( * it).second);
				}
				else {
					vVectory.push_back(( * it).second);
				}
			}
			groupScore.clear();//С���������
		}

	}
	cout << "��" << this->m_Indexl << "�ֱ������" << endl;
	system("pause");
}

void SpeechManager::showScore() {
	cout << "------------��" << this->m_Indexl << "�ֽ�����ѡ����Ϣ����: " << endl;
	vector<int> v;
	if (this->m_Indexl == 1) {
		v = v2;
	}
	else {
		v = vVectory;
	}

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "ѡ�ֱ��: " << *it << "����:" << this->m_Speaker[*it].m_Name <<
			this->m_Speaker[*it].m_Score[this->m_Indexl - 1] << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
	this->showMenu();

}

void SpeechManager::loadRecord() {
	ifstream ifs("speech.csv", ios::in);//���ļ�

	if (!ifs.is_open()) {
		this->fileIsEmpty = true;
		cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}
	char ch;    //�ȳ��Զ�ȡһ���ֽ�
	ifs >> ch;
	if(ifs.eof()){
		cout << "�ļ�Ϊ��" << endl;
		this->fileIsEmpty = true;
		ifs.close();
		return;
	}
	//�ļ���Ϊ��
	vector<string>v;//���6��string�ַ���

	this->fileIsEmpty = false;
	ifs.putback(ch);//�������ȡ�ĵ����ַ��ٷŻ���
	string data;
	int index = 0;
	while (ifs >> data) {//ÿһ��
		//cout << data << endl;
		int start = 0;
		int pos = - 1;//�鵽","λ�õı���
		while (true) {
			pos = data.find(",", start);
			if (pos == -1) {
				//û���ҵ�
				break;
			}
			string temp = data.substr(start, pos - start);
			v.push_back(temp);
			start = pos + 1;
		}
		this->m_Record.insert(make_pair(index, v));//��¼���������¼������
		index++;
	}
	ifs.close();	
	for (map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end(); it++) {
		cout <<"��" << it->first + 1 <<"��" << "�ھ��÷�: " << it->second[0] << "������ " << it->second[1] << endl;
	}
	
}

void SpeechManager::showRecord() {
	if (this->fileIsEmpty) {
		cout << "�ļ������ڣ����߼�¼Ϊ��!" << endl;
	}
	for (int i = 0; i < this->m_Record.size(); i++) {
		cout << "��" << i + 1 << "��" << "�ھ���ţ�" << this->m_Record[i][0] << "�÷֣� " << this->m_Record[i][1] << " "
			"�Ǿ�����ţ�" << this->m_Record[i][2] << "�÷֣� " << this->m_Record[i][3] << " "
			"������ţ�" << this->m_Record[i][4] << "�÷֣� " << this->m_Record[i][5] << endl;
	}
	system("pause");
	system("cls");
}

void SpeechManager::saveScore() {
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);//��׷�ӵķ�ʽд�ļ�

	//��ÿ��ѡ������ д�뵽�ļ���
	for (vector<int>::iterator it = vVectory.begin(); it != vVectory.end(); it++) {  //�ھ���ţ��÷֣��Ǿ�xxxx����xxxx
		ofs << *it << "," << this->m_Speaker[*it].m_Score[1] << ",";
	}
	ofs << endl;
	//�ر��ļ�
	ofs.close();
	cout << "��¼�Ѿ���������" << endl;
	this->fileIsEmpty = false;
}

void SpeechManager::startSpeech() {
	//��һ�ֱ���
	//1.��ǩ
	this->speechDraw();

	//2.����
	this->speechContest();

	//3.��ʾ�������
	this->showScore();
	//�ڶ��ֱ���
	this->m_Indexl++;
	//1.��ǩ
	this->speechDraw();

	//2.����
	this->speechContest();

	//3.��֣���ʾ���
	this->showScore();

	//4.����������
	this->saveScore();
	cout << "����������" << endl;
	system("pause");
	system("cls"); 
}

void SpeechManager::clearRecord() {
	cout << "�Ƿ�ȷ������ļ���" << endl;
	cout << "1.��" << endl;
	cout << "2.��" << endl;
	int select = 0;
	cin >> select;
	if (select == 1) {
		ofstream ofs("speech.csv", ios::trunc);  //��������ļ�����ɾ�����ٴ���
		ofs.close();

		this->initSpeech();
		this->createSpeaker();
		this->loadRecord();
		cout << "��ճɹ�!";
	}


}

void SpeechManager::initSpeech() {
	//�������ÿ�
	this->v1.clear();
	this->v2.clear();
	this->vVectory.clear();
	this->m_Speaker.clear();
	this->m_Indexl = 1;
	this->m_Record.clear();//��ʼ����¼����

}



void SpeechManager::exitSystem() {
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

void SpeechManager::showMenu() {
	cout << "*********************" << endl;
	cout << "***��ӭ�μ��ݽ�����**" << endl;
	cout << "***1.��ʼ�ݽ�����****" << endl;
	cout << "***2.�鿴�����¼****" << endl;
	cout << "***3.��ձ�����¼****" << endl;
	cout << "***0.�˳���������****" << endl;
	cout << "*********************" << endl;
}