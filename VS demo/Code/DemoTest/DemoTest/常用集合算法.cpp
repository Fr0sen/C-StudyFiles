//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//#include <vector>
//#include <fstream>
//void myPrint(int val) {
//	cout << val << " ";
//}
//
//void test01() {
//	vector<int> v1;
//	vector<int> v2;
//
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//		v2.push_back(i + 5);
//	}
//	vector<int> vTarget;
//	//Ŀ��������ǰ���ٿռ�
//	//����������С�ļ��ɣ���Ϊ�ǽ���
//	vTarget.resize(min(v1.size(), v2.size()));
//
//	//��ȡ���� set_intersection
//	vector<int>::iterator itEnd = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), vTarget.end(), myPrint);
//
//	//��ȡ������
//	vTarget.resize(v1.size() + v2.size());
//	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), vTarget.end(), myPrint);
//
//	//��ȡ�set_union
//	vTarget.resize(max(v1.size(), v2.size()));
//	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
//	for_each(vTarget.begin(), vTarget.end(), myPrint);
//
//
//}
//
