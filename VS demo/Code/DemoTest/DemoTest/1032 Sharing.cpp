//#include <string>
//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//struct Str {
//	string addr, ptr;
//	string data;
//};
//
//Str nodes[10001];
//Str str1[10001], str2[10001];
//
//string findNext(string ptr,int length) {   //返回的是这个结点的地址
//	for (int i = 0; i < length; i++) {
//		if (ptr == nodes[i].addr) {
//			//cout << nodes[i].data <<' ';
//			return nodes[i].ptr;
//		}
//	}
//}
//
//int main() {
//	string ADDR1, ADDR2;
//	int sumNode;
//	cin >> ADDR1 >> ADDR2 >> sumNode;
//	string ptr1 = ADDR1, ptr2 = ADDR2;
//	for (int i = 0; i < sumNode; i++) {
//		cin >> nodes[i].addr >> nodes[i].data >> nodes[i].ptr;
//	}
//	if (ptr1 == ptr2) {
//		cout << nodes[0].addr;
//		return 0;
//	}
//	for (int i = 0; i < 2 * sumNode-1; i++) {
//		ptr1 = findNext(ptr1, sumNode);
//		ptr2 = findNext(ptr2, sumNode);
//		if (!(ptr1 != "-1" && ptr2 != "-1")&&i==0)
//			return 0;
//		if (ptr1 == "-1") {
//			ptr1 = ADDR2;
//		}
//		if (ptr2 == "-1") {
//			ptr2 = ADDR1;
//		}
//		if (ptr1 == ptr2) {
//			cout << ptr1;
//			return 0;
//		}	
//		
//	}
//	cout << -1;
//	return 0;
//}
