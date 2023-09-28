//#include<set>
//#include<iostream>
//using namespace std;
//
//class MyCompare {  //仿函数
//public:
//	bool operator()(int v1,int v2) const {//重载的符号，第二个是参数列表
//		return v1 > v2;
//	}
//
//};
//
//class Person {
//public:
//	Person(string name, int age) {
//		names = name;
//		ages = age;
//	}
//	string names;
//	int ages;
//
//};
//
//class MyComparePerson {  //仿函数
//public:
//	bool operator()(const Person& v1, const Person& v2) const {//重载的符号，第二个是参数列表
//		return v1.ages > v2.ages;
//	}
//
//};
//
//void test02() {
//
//	//自定义数据类型都会制定排序规则
//	set<Person> s;
//	Person p1("li", 12);
//	Person p4("li3", 1212);
//	Person p3("li2", 125);
//	Person p2("li1", 1261);
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//
//	for (set<Person>::iterator it = s.begin(); it != s.end(); it++) {
//		cout << "姓名： " << it->names << "年龄： " << it->ages << endl;
//	}	
//
//}
//
//void printSet(const set<int> s1) {
//	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++) {
//		cout << *it << " ";
//	}
//
//	//遍历容器
//}
//
//void test01() {
//	set<int> s1;
//	s1.insert(10);
//	s1.insert(310);
//	s1.insert(1410);
//	s1.insert(1680);
//	s1.insert(10);//所有的元素在插入的时候会自动排序
//	//set不允许插入重复元素
//	printSet(s1);
//
//	//拷贝构造
//	set<int> s2(s1);
//	printSet(s2);
//	cout << *s2.find(310);//返回一个迭代器,用解引用访问数据
//	cout << s2.count(10);//要么1要么0
//
//}
//
////set和multiset
//void test01() {
//	set<int > s;
//
//	pair<set<int>::iterator, bool>ret = s.insert(10);  //用pair来查是否插入成功
//	if (ret.second) {
//		cout << "插入成功" << endl;
//	}
//	else cout << "插入失败" << endl;
//
//	ret = s.insert(10);
//	if (ret.second) {
//		cout << "插入成功" << endl;
//	}
//	else cout << "插入失败" << endl;
//	
//	multiset<int> ms;
//	//允许插入重复的值
//	ms.insert(10);
//	ms.insert(10);
//
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++) {
//		cout << *it << endl;
//	}
//	cout << endl;
//
//	set<int, MyCompare>s2;//按照仿函数的排序规则进行排序
//}
//
//
//
//
//int main() {
//
//}