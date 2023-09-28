//#include <stack>
//using namespace std;
//#include <queue>
//#include <iostream>
//
//void test01() {
//	stack<int> s;
//	//入入栈
//
//	s.push(10);
//	s.push(20);
//
//	cout << s.top();
//
//	//只要栈不为空，就查看栈顶，并且执行出栈操作
//	while (!s.empty()) {
//		cout << "栈顶元素为" << s.top();
//	}
//}
//class Person {
//public:
//	Person(string name, int age) {
//		this->names = name;
//		this->ages = age;
//	}
//	string names;
//	int ages;
//
//};
//void test02() {
//	queue<Person> q;
//	Person p1("唐三", 12);
//	Person p2("三", 126);
//	Person p3("唐", 1872);
//	Person p4("唐三 sad", 129);
//	q.push(p1);
//	q.push(p2);
//	while (!q.empty()) {
//		cout << "队头元素--姓名：" << q.front().names << endl;
//		cout << q.back().ages;
//		q.pop();
//	}
//	cout << "队列大小" << q.size();
//}
//
//
//int main() {
//
//}