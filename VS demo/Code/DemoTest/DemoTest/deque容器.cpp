//#include <deque>
//#include <cstdio>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//void printDeque(const deque<int>& d) {
//	for (deque<int> ::const_iterator it = d.begin(); it != d.end(); it++) {
//		//*it = 100;
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////deque ���캯��
//void test01() {
//	deque<int> d1;
//	for (int i = 0; i < 10; i++) {
//		d1.push_back(i);
//	}
//	printDeque(d1);
//	cout << endl;
//	//���俽��
//	deque<int> d2(d1.begin(), d1.end());
//
//	deque<int >d3(10);
//	printDeque(d3);
//}
////deque��ֵ����
//void test02() {
//	deque<int> d1;
//	deque<int> d2;
//	d2 = d1;
//	deque<int> d3;
//	d3.assign(d1.begin(), d1.end());
//
//	deque<int>d4;
//	d4.assign(10, 100);
//	if (d1.empty()) {
//		cout << "d1Ϊ��" << endl;
//	}
//	else {
//		cout << "d1��Ϊ��" << endl;
//		cout << "d1�Ĵ�СΪ��" << d1.size() << endl;
//	}
//
//	//����ָ����С
//	d1.resize(15, 1);//��Ļ�����1���
//	d1.resize(15);
//	printDeque(d1);
//	d1.resize(5);
//
//
//	//����ɾ��
//	d1.push_back(10);
//	d1.push_back(105);
//	d1.push_front(16);
//	d1.push_front(161);
//	d1.pop_front();
//	printDeque(d1);
//	//ͷɾ
//
//	d1.insert(d1.begin(), 1000);//���õ���������
//
//	d1.insert(d1.begin(), 2, 1000);//������
//
//	deque<int> d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//	d1.insert(d1.begin(), d2.begin(), d2.end());//����һ�����䣬��Ϊ��������������������
//	//ɾ��
//	deque<int> ::iterator it = d1.begin();
//	it++;
//	d1.erase(it);
//	printDeque(d1);
//
//	//�������䷽ʽɾ��
//	d1.erase(d1.begin(), d1.end());
//	d1.clear(); 
//	printDeque(d1);
//}
//
//
////deque���ݴ�ȡ
//void test05() {
//	deque<int> d;
//	d.push_back(102155);
//	d.push_back(1210);
//	d.push_back(101);
//	d.push_back(102);
//	d.push_back(10);
//	d.push_front(123);
//	cout << d[2] << endl;
//	cout << d.at(2);
//
//	
//}
//
////deque����
//void test_sort() {
//	deque<int> d;
//	d.push_back(20);
//	d.push_back(30);
//	d.push_back(50);
//	d.push_back(10);
//	d.push_front(1);
//
//	//����֧��������ʵĵ�����������������sort����ֱ�ӽ�������
//	//vectorҲ��������sort
//	sort(d.begin(), d.end());//Ĭ������
//
//
//}
//
//int main() {
//	test_sort();
//}