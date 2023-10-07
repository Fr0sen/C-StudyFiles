#include "orderFile.h"
#include "globalFile.h"
#include <fstream>
//构造函数
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
		map<string, string>m;  //小容器，用来放data，interval等参数

		int pos=date.find(":");//用来分割线,没找到的话就会返回-1
		if (pos != -1) {
			key = date.substr(0, pos);  //第二个参数是几个，而不是终点的位置
			value = date.substr(pos + 1, date.size() - pos - 1);  //size = 9,pos = 4 ,size-1-pos = 4
			m.insert(make_pair(key, value));
		}
		pos = interval.find(":");//用来分割线,没找到的话就会返回-1
		if (pos != -1) {
			key = interval.substr(0, pos);  //第二个参数是几个，而不是终点的位置
			value = interval.substr(pos + 1, interval.size() - pos - 1);  //size = 9,pos = 4 ,size-1-pos = 4
			m.insert(make_pair(key, value));
		}
		pos = stuId.find(":");//用来分割线,没找到的话就会返回-1
		if (pos != -1) {
			key = stuId.substr(0, pos);  //第二个参数是几个，而不是终点的位置
			value = stuId.substr(pos + 1, stuId.size() - pos - 1);  //size = 9,pos = 4 ,size-1-pos = 4
			m.insert(make_pair(key, value));
		}
		pos = stuName.find(":");//用来分割线,没找到的话就会返回-1
		if (pos != -1) {
			key = stuName.substr(0, pos);  //第二个参数是几个，而不是终点的位置
			value = stuName.substr(pos + 1, stuName.size() - pos - 1);  //size = 9,pos = 4 ,size-1-pos = 4
			m.insert(make_pair(key, value));
		}
		pos = roomId.find(":");//用来分割线,没找到的话就会返回-1
		if (pos != -1) {
			key = roomId.substr(0, pos);  //第二个参数是几个，而不是终点的位置
			value = roomId.substr(pos + 1, roomId.size() - pos - 1);  //size = 9,pos = 4 ,size-1-pos = 4
			m.insert(make_pair(key, value));
		}
		pos = status.find(":");//用来分割线,没找到的话就会返回-1
		if (pos != -1) {
			key = status.substr(0, pos);  //第二个参数是几个，而不是终点的位置
			value = status.substr(pos + 1, status.size() - pos - 1);  //size = 9,pos = 4 ,size-1-pos = 4
			m.insert(make_pair(key, value));
		}
		/*cout << "key = " << key << endl;
		cout << "value = " << value << endl;*/
		//将小的map容器放入到大的map容器中
		this->m_orderData.insert(make_pair(this->m_Size, m));
		this->m_Size++;
	}
	ifs.close();
	//测试最大的map容器
	/*for (map<int, map<string, string>>::iterator it = m_orderData.begin(); it != m_orderData.end(); it++) {
		cout << "条数为 " << it->first << "value = " << endl;
		for (map<string, string>::iterator mit = (*it).second.begin(); mit != (*it).second.end(); mit++) {
			cout <<"key: " << mit->first << " " << mit->second << endl;
		}
		cout << endl;
	}*/
}

//更新预约记录
void OrderFile::updateOrder() {
	if (this->m_Size == 0) {
		return;//预约记录0条，直接return
	}

	ofstream ofs(ORDER_FILE, ios::out|ios::trunc);//全部删了重新写
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