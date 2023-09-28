//#include<string>
//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//string a;
//int length = 1, maxLength = 1;
//bool findSymmetric(int a1, int b1) {
//	while (a1 < b1) {
//		if (a[a1] != a[b1])return false;
//		a1++;
//		b1--;
//	}
//	return true;
//}
//
//int find(int pos) {
//	int length1 = 1;
//	for (int i=pos; i < a.length(); i++) {
//		if (findSymmetric(pos, i)) {
//			length1 = i - pos +1;
//		}
//	}
//	return length1;
//}
//
//int main() {
//	getline(cin, a);
//	length = a.length();
//	if (length == 1) {
//		printf("1");
//	}
//	else {
//		for (int i = 0; i < a.length(); i++) {
//			if (find(i) > maxLength) {
//				maxLength = find(i);
//			}
//		}
//		cout << maxLength;
//	}
//}