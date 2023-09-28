//	//#include <iostream>
//	//#include <cstdio>
//	//#include <string>
//
//	//using namespace std;
//
//	//int main() {
//	//	string s1, s2;
//	//	getline(cin, s1);
//	//	int len1 = s1.length();
//	//	getline(cin, s2);
//	//	for (int i = 0; i < len1;i++) {
//	//		for (int j = 0; j < s2.length(); j++) {
//	//			if (s1[i] == s2[j]) {
//	//				for (int k = i; k < s1.length(); k++) {
//	//					s1[k] = s1[k + 1];
//	//				}
//	//				len1--;
//	//			}
//	//		}
//	//	}
//	//	for (int i = 0; i < len1; i++) {
//	//		cout << s1[i];
//	//	}
//	//
//#include <iostream>
//#include <cstdio>
//#include <string>
//using namespace std;
//
//int main() {
//	int show[128] = { 0 };//用ASCII码来标记！！！！
//	string s1, s2;
//	getline(cin, s1);
//	getline(cin, s2);
//	for (char c : s2) {
//		show[c] = 1;
//	}
//	for (char c : s1) {
//		if (!show[c])cout << c;
//	}
//}