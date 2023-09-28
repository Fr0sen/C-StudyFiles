//#include <iostream>
//#include <cstdio>
//#include <vector>
//using namespace std;
//
//void printVector(vector<int> &v) {
//	for (vector<int >::iterator it = v.begin(); it < v.end(); it++) {//it是指针，一定要记住
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////容器构造
//void test01() {
//	vector<int> v1;
//	for (int i = 0; i < 10; i++) {
//		v1.push_back(i);
//	}
//	printVector(v1);
//	//利用区间方式进行构造
//	vector<int >v2(v1.begin(), v1.end());
//	printVector(v2);
//	//n个elem的方式进行构造
//	vector<int> v3(10, 100);  //一百个10
//	printVector(v3);
//	//拷贝构造
//	vector<int> v4(v3);
//	v2 = v1;
//	v3.assign(v1.begin(), v1.end());//前闭后开区间
//	//n个elem方式赋值
//	v4.assign(10, 100);
//	printVector(v4);
//	if (v1.empty()) {
//		cout << "v1为空" << endl;
//	}
//	else {
//		cout << "v1不为空" << endl;
//		cout << "v1的容量为:" << v1.capacity() << endl; //容量会扩展的比size大
//		cout << "v1的size是" << v1.size() << endl;
//	}
//	v1.resize(15);//多的默认用0填充新的位置
//	v1.resize(5);//超出的部分会删掉，但是容量不变
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
//	v1.pop_back();//尾删
//	v1.insert(v1.begin(), 100);//在头部插入一个100
//	v1.insert(v1.begin(),3, 100);//在头部插入3个100
//	//删除
//	v1.erase(v1.begin());
//	v1.erase(v1.begin(), v1.end());
//	v1.clear();//全删除
//
//}
//
////容器互换
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
////2.实际用途：巧用swap可以收缩内存空间
//
//void test04() {
//	vector<int> v;
//	for (int i = 0; i < 100000; i++) {
//		v.push_back(i);
//	}
//	cout << "v的容量:" << v.capacity() << endl;//插入十万的时候就扩展到十三万了
//	cout << "v的大小：" << v.size() << endl;
//	v.resize(3);
//	//巧用swap收缩内存
//	vector<int >(v).swap(v);
//}
//
////预留空间reserve
//void test05() {
//	vector<int> v;
//	v.reserve(100000);//先预留好
//	int num = 0; //记录开辟了几次内存空间
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