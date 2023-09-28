//#include <map>
//#include <iostream>
//using namespace std;
//
//class MyCompare {  //仿函数
//public:
//	bool operator()(int v1, int v2) const {//重载的符号，第二个是参数列表
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
//	m.insert(pair<int, int>(1, 10));//匿名队组,放进去之后就析构了
//	m.insert(pair<int, int>(2, 10));//匿名队组,放进去之后就析构了
//	m.insert(pair<int, int>(3, 10));//匿名队组,放进去之后就析构了
//	map<int, int> m2;
//	m2 = m;
//	map<int, int>m3(m2);
//	map<int, int, MyCompare>m4;  //自定义排序
//
//	//插入和删除
//		
//	m.insert(make_pair(2, 20));//不用写模板参数
//	//第三种
//	m.insert(map<int, int>::value_type(3, 30));
//
//	//第四种 ，这种方式也可以用于修改
//	m[4] = 40;
//	m.find(4);//返回的是迭代器
//
//	//[]不建议插入，用途是利用key访问value
//	m.erase(4);
//	m.erase(m.begin(), m.end());
//	m.clear();
//
//}
