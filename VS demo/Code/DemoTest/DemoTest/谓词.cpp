//#include <iostream>
//#include<vector>
//#include <algorithm>
//using namespace std;
//
////�º��� ����ֵ��bool���ͣ���֮Ϊν��
////һԪν��
//class GreaterFive {
//public:
//	bool operator()(int val) {
//		return val > 5;
//	}
//
//};
//
//class MyCompare {
//public:
//	bool operator()(int v1, int v2) {//��Ԫν��
//		return v1 > v2;
//	}
//};
//
////��Ԫν��
//void test02() {
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(30);
//	sort(v.begin(), v.end());
//	for (vector<int> ::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//	//ʹ�ú������� �ı��㷨���ԣ���Ϊ�������Ϊ��С���� 
//	sort(v.begin(), v.end(), MyCompare()); //��������˼�Ǽ���һ����������
//}	
//
//void test01() {
//	vector<int> v;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//
//
//}
