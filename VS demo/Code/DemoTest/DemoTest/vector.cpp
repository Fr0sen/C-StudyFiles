//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//class Person {
//public:
//	Person(string name,int age) {
//		this->m_Name = name;
//		this->m_Age = age;
//	
//	}
//	string m_Name;
//	int m_Age;
//};
//
//void test03() {
//	vector <vector<int>>v;
//	vector <int> v1;
//	vector <int> v2;
//	vector <int> v3;
//	vector <int> v4;
//
//	//��С�����������
//	for (int i = 0; i < 4; i++) {
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//
//	for (vector<vector<int>>::iterator it = v.begin(); it < v.end(); it++) {
//		//(*it)--���� vector<int>
//		for (vector<int>::iterator vit = (*it).begin(); vit < (*it).end(); vit++) {
//			cout << *vit << " ";
//		}
//		cout << endl;
//	}
//
//	//��С�������뵽�����������
//
//}
//
//void test02() {
//	vector<Person> v;
//	Person p1("aaa", 10);
//	Person p2("aaa", 10);
//	Person p3("aaa", 10);
//	Person p4("aaa", 10);
//	Person p5("aaa", 10);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);//β��
//	//����
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {   //it�������Ϊָ��
//		cout << "������" << (*it).m_Name << "���䣺" << (*it).m_Age << endl;
//		cout << "������" << it->m_Name << "���䣺" << it->m_Age << endl;
//	}
//
//}
//
//
//void myPrint(int val) {
//	
//}
//
//
//void test08() {
//
//	//����Զ����������͵�ָ��
//	vector<Person*> v;
//	Person p1("aaa", 10);
//	Person p2("aaa", 10);
//	Person p3("aaa", 10);
//	Person p4("aaa", 10);
//	Person p5("aaa", 10);
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);//β��
//	//����
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++) {   //it�������Ϊָ��
//		cout << "������" << ( * it)->m_Name << "���䣺" <<(*it)->m_Age << endl; //��Ҫʹ��(*it)
//		/*cout << "������" << it->m_Name << "���䣺" << it->m_Age << endl;*/
//	}
//}
//
//
//void test01() {
//	int a;
//	vector<int> v;
//	//�������в�������
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//
//	////ͨ�����������������е�����
//	//vector<int>::iterator itBegin = v.begin();//��ʼ������
//	//vector<int>::iterator itEnd = v.end();//���������һ��Ԫ�ص���һ��λ��
//
//	////��һ�ֱ�����ʽ
//	//while (itBegin != itEnd) {  //���һ��Ԫ�صĺ����˵��������
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//
//	//�ڶ��ֱ�����ʽ
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << endl;
//	}
//	//�����ֱ�����ʽ
//	/*for each (object var in collection_to_loop)
//	{
//
//	}*/
//	for_each(v.begin(), v.end(), myPrint);
//
//}
//
//
//int main() {
//	test03();
//	return 0;
//}