//#include <iostream>
//#include <cstdio>
//#include <vector>
//using namespace std;
//
//void printVector(vector<int> &v) {
//	for (vector<int >::iterator it = v.begin(); it < v.end(); it++) {//it��ָ�룬һ��Ҫ��ס
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////��������
//void test01() {
//	vector<int> v1;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//	}
//	printVector(v1);
//	//�������䷽ʽ���й���
//	vector<int >v2(v1.begin(), v1.end());
//	printVector(v2);
//	//n��elem�ķ�ʽ���й���
//	vector<int> v3(10, 100);  //һ�ٸ�10
//	printVector(v3);
//	//��������
//	vector<int> v4(v3);
//	v2 = v1;
//	v3.assign(v1.begin(), v1.end());//ǰ�պ�����
//	//n��elem��ʽ��ֵ
//	v4.assign(10, 100);
//	printVector(v4);
//	if (v1.empty()) {
//		cout << "v1Ϊ��" << endl;
//	}
//	else {
//		cout << "v1��Ϊ��" << endl;
//		cout << "v1������Ϊ:" << v1.capacity() << endl; //��������չ�ı�size��
//		cout << "v1��size��" << v1.size() << endl;
//	}
//	v1.resize(15);//���Ĭ����0����µ�λ��
//	v1.resize(5);//�����Ĳ��ֻ�ɾ����������������
//	cout << v1.capacity();
//
//}
//
//
//void test02() {
//	vector<int > v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//
//	v1.pop_back();//βɾ
//	v1.insert(v1.begin(), 100);//��ͷ������һ��100
//	v1.insert(v1.begin(),3, 100);//��ͷ������3��100
//	//ɾ��
//	v1.erase(v1.begin());
//	v1.erase(v1.begin(), v1.end());
//	v1.clear();//ȫɾ��
//
//}
//
////��������
//
//void test03() {
//	vector<int>v1;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//	}
//	printVector(v1);
//	vector<int >v2;
//	v1.swap(v2);
//	printVector(v1);
//	printVector(v2);
//	
//
//}
//
////2.ʵ����;������swap���������ڴ�ռ�
//
//void test04() {
//	vector<int> v;
//	for (int i = 0; i < 100000; i++) {
//		v.push_back(i);
//	}
//	cout << "v������:" << v.capacity() << endl;//����ʮ���ʱ�����չ��ʮ������
//	cout << "v�Ĵ�С��" << v.size() << endl;
//	v.resize(3);
//	//����swap�����ڴ�
//	vector<int >(v).swap(v);
//}
//
////Ԥ���ռ�reserve
//void test05() {
//	vector<int> v;
//	v.reserve(100000);//��Ԥ����
//	int num = 0; //��¼�����˼����ڴ�ռ�
//	int* p = NULL;
//	for (int i = 0; i < 10000; i++) {
//		v.push_back(i);
//		if (p != &v[0]) {
//			p = &v[0];
//			num++;
//		}
//	}
//	cout << "num = " << num << endl;
//
//}
//
//
//
//
//int main() {
//	test05(); 
//}