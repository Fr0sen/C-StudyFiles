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
//	//向小容器添加数据
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
//		//(*it)--容器 vector<int>
//		for (vector<int>::iterator vit = (*it).begin(); vit < (*it).end(); vit++) {
//			cout << *vit << " ";
//		}
//		cout << endl;
//	}
//
//	//将小容器插入到大的容器当中
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
//	v.push_back(p5);//尾插
//	//遍历
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {   //it可以理解为指针
//		cout << "姓名：" << (*it).m_Name << "年龄：" << (*it).m_Age << endl;
//		cout << "姓名：" << it->m_Name << "年龄：" << it->m_Age << endl;
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
//	//存放自定义数据类型的指针
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
//	v.push_back(&p5);//尾插
//	//遍历
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++) {   //it可以理解为指针
//		cout << "姓名：" << ( * it)->m_Name << "年龄：" <<(*it)->m_Age << endl; //需要使用(*it)
//		/*cout << "姓名：" << it->m_Name << "年龄：" << it->m_Age << endl;*/
//	}
//}
//
//
//void test01() {
//	int a;
//	vector<int> v;
//	//向容器中插入数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//
//	////通过迭代器访问容器中的数据
//	//vector<int>::iterator itBegin = v.begin();//起始迭代器
//	//vector<int>::iterator itEnd = v.end();//容器中最后一个元素的下一个位置
//
//	////第一种遍历方式
//	//while (itBegin != itEnd) {  //最后一个元素的后面就说明结束了
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//
//	//第二种遍历方式
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << endl;
//	}
//	//第三种遍历方式
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