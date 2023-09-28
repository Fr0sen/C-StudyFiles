//#define _CRT_SECURE_NO_WARNINGS 1
//#include <cstdio>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//struct ass {
//	float num;
//	string type;
//};
//
//bool cmp(ass a,ass b) {
//	return a.num > b.num;
//}
//
//
//
//int main() {
//	ass array[10];
//	string a, b, c;
//	float d;
//	for (int i = 0; i < 9; i++) {
//		cin >> array[i].num;
//		if (i % 3 == 0) {
//			array[i].type = "W";
//		}
//		else if (i % 3 == 1) {
//			array[i].type = "T";
//		}
//		else {
//			array[i].type = "L";
//		}
//	}
//	printf("%s\n",array[0].type.c_str());
//	sort(array, array + 3,cmp);
//	printf("%s ,%f",array[0].type.c_str(), array[0].num);
//}