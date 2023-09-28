//#include <iostream>
//#include <cstdio>
//#include <string>
//using namespace std;
////建筑物类 
//class Building {
//	//goodGay
//friend void goodGay(Building building);
//public:
//	Building() {
//		m_SittingRoom = "客厅";
//		m_BedRoom = "卧室";
//	}
//
//public:
//	string m_SittingRoom;
//
//	
//private:
//	string m_BedRoom;
//};
//
////全局函数
//void goodGay(Building building) {
//	cout << "好基友全局函数 正在访问:" << building.m_SittingRoom << endl;
//}
//
//void goodGay(Building building) {
//	cout << "好基友全局函数 正在访问:" << building.m_BedRood << endl;
//}
//
//void test01() {
//	Building building;
//	goodGay(building);
//
//}
//
//int main() {
//	test01();	
//}