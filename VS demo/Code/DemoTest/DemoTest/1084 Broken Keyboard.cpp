//#include <iostream>
//#include <cstdio>
//#include <string>
//#include <unordered_map>
//using namespace std;
//unordered_map<char,int> m;
//unordered_map<char, int>::iterator it;
//
//int main() {
//	string s1, s2;
//	cin >> s1 >> s2;
//	for (int i = 0; i < s1.size(); i++) {
//		if(isalpha(s1[i]))
//		s1[i] = toupper(s1[i]);
//	}
//	for (int i = 0; i < s2.size(); i++) {
//		if (isalpha(s2[i]))
//		s2[i] = toupper(s2[i]);
//	}
//	for (int i = 0, j = 0; i < s1.size(); i++) {
//		if (s1[i] != s2[j]) {
//			if (m[s1[i]] != 1) {
//				m[s1[i]] = 1;
//				cout << s1[i];
//			}
//		}
//		else j++;
//	}
//}