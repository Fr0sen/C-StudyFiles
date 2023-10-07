#include "orderFile.h"
#include "globalFile.h"
#include <fstream>
//���캯��
OrderFile::OrderFile() {
	ifstream ifs;
	ifs.open(ORDER_FILE, ios::in);

	string date, interval, stuId, stuName, roomId, status;
	this->m_Size = 0;
	while (ifs >> date && ifs >> interval && ifs 
		>> stuId && ifs >> stuName && ifs >> roomId && ifs >> status) 
	{
		/*cout << date << endl;
		cout << interval << endl;
		cout << stuId << endl;
		cout << stuName << endl;
		cout << roomId << endl;
		cout << status << endl;*/

		string key;
		string value;
		map<string, string>m;  //С������������data��interval�Ȳ���

		int pos=date.find(":");//�����ָ���,û�ҵ��Ļ��ͻ᷵��-1
		if (pos != -1) {
			key = date.substr(0, pos);  //�ڶ��������Ǽ������������յ��λ��
			value = date.substr(pos + 1, date.size() - pos - 1);  //size = 9,pos = 4 ,size-1-pos = 4
			m.insert(make_pair(key, value));
		}
		pos = interval.find(":");//�����ָ���,û�ҵ��Ļ��ͻ᷵��-1
		if (pos != -1) {
			key = interval.substr(0, pos);  //�ڶ��������Ǽ������������յ��λ��
			value = interval.substr(pos + 1, interval.size() - pos - 1);  //size = 9,pos = 4 ,size-1-pos = 4
			m.insert(make_pair(key, value));
		}
		pos = stuId.find(":");//�����ָ���,û�ҵ��Ļ��ͻ᷵��-1
		if (pos != -1) {
			key = stuId.substr(0, pos);  //�ڶ��������Ǽ������������յ��λ��
			value = stuId.substr(pos + 1, stuId.size() - pos - 1);  //size = 9,pos = 4 ,size-1-pos = 4
			m.insert(make_pair(key, value));
		}
		pos = stuName.find(":");//�����ָ���,û�ҵ��Ļ��ͻ᷵��-1
		if (pos != -1) {
			key = stuName.substr(0, pos);  //�ڶ��������Ǽ������������յ��λ��
			value = stuName.substr(pos + 1, stuName.size() - pos - 1);  //size = 9,pos = 4 ,size-1-pos = 4
			m.insert(make_pair(key, value));
		}
		pos = roomId.find(":");//�����ָ���,û�ҵ��Ļ��ͻ᷵��-1
		if (pos != -1) {
			key = roomId.substr(0, pos);  //�ڶ��������Ǽ������������յ��λ��
			value = roomId.substr(pos + 1, roomId.size() - pos - 1);  //size = 9,pos = 4 ,size-1-pos = 4
			m.insert(make_pair(key, value));
		}
		pos = status.find(":");//�����ָ���,û�ҵ��Ļ��ͻ᷵��-1
		if (pos != -1) {
			key = status.substr(0, pos);  //�ڶ��������Ǽ������������յ��λ��
			value = status.substr(pos + 1, status.size() - pos - 1);  //size = 9,pos = 4 ,size-1-pos = 4
			m.insert(make_pair(key, value));
		}
		/*cout << "key = " << key << endl;
		cout << "value = " << value << endl;*/
		//��С��map�������뵽���map������
		this->m_orderData.insert(make_pair(this->m_Size, m));
		this->m_Size++;
	}
	ifs.close();
	//��������map����
	/*for (map<int, map<string, string>>::iterator it = m_orderData.begin(); it != m_orderData.end(); it++) {
		cout << "����Ϊ " << it->first << "value = " << endl;
		for (map<string, string>::iterator mit = (*it).second.begin(); mit != (*it).second.end(); mit++) {
			cout <<"key: " << mit->first << " " << mit->second << endl;
		}
		cout << endl;
	}*/
}

//����ԤԼ��¼
void OrderFile::updateOrder() {
	if (this->m_Size == 0) {
		return;//ԤԼ��¼0����ֱ��return
	}

	ofstream ofs(ORDER_FILE, ios::out|ios::trunc);//ȫ��ɾ������д
	for (int i = 0; i < this->m_Size; i++) {
		ofs << "data:" << this->m_orderData[i]["data"] << " ";
		ofs << "interval:" << this->m_orderData[i]["interval"] << " ";
		ofs << "stuId:" << this->m_orderData[i]["stuId"] << " ";
		ofs << "stuName:" << this->m_orderData[i]["stuName"] << " ";
		ofs << "roomId:" << this->m_orderData[i]["roomId"] << " ";
		ofs << "status:" << this->m_orderData[i]["status"] << endl;
	}
	ofs.close();
}