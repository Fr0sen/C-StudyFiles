//#include <map>
//#include <iostream>
//using namespace std;
//
//class MyCompare {  //�º���
//public:
//	bool operator()(int v1, int v2) const {//���صķ��ţ��ڶ����ǲ����б�
//		return v1 > v2;
//	}
//};
//
//void printMap(map<int, int>& m) {
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
//		cout << "key =" << (*it).first << "value = :" << it->second << endl;
//	}
//}
//
//void test01() {
//	map<int, int> m;
//	m.insert(pair<int, int>(1, 10));//��������,�Ž�ȥ֮���������
//	m.insert(pair<int, int>(2, 10));//��������,�Ž�ȥ֮���������
//	m.insert(pair<int, int>(3, 10));//��������,�Ž�ȥ֮���������
//	map<int, int> m2;
//	m2 = m;
//	map<int, int>m3(m2);
//	map<int, int, MyCompare>m4;  //�Զ�������
//
//	//�����ɾ��
//		
//	m.insert(make_pair(2, 20));//����дģ�����
//	//������
//	m.insert(map<int, int>::value_type(3, 30));
//
//	//������ �����ַ�ʽҲ���������޸�
//	m[4] = 40;
//	m.find(4);//���ص��ǵ�����
//
//	//[]��������룬��;������key����value
//	m.erase(4);
//	m.erase(m.begin(), m.end());
//	m.clear();
//
//}
