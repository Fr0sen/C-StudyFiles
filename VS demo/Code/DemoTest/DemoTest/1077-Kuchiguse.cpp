//#include <iostream>
//#include <cstdio>
//#include <string>
//using namespace std;
//
//string s[101];
//string answer="";
//int pos;
//int N;
//
//bool find(int pos) {
//	bool flag = true;
//	for (int i = 0; i < N - 1; i++) {
//		if (s[i][s[i].size() - pos - 1] != s[i + 1][s[i + 1].size() - pos - 1 ])return false;
//	}
//	return true;
//}
//int main() {
//	cin >> N;
//	int minlength = 257;
//	getchar();
//	for (int i = 0; i < N; i++) {
//		getline(cin, s[i]);
//		if (minlength > s[i].length())minlength = s[i].length();
//	}
//	for (pos = 0; pos < minlength; pos++) {
//		if (!find(pos))break;
//	}
//	bool flags = false;
//	if (pos != 0); {
//		for (int i = s[0].length() - pos; i < s[0].length(); i++) {
//			if (s[0][i] == ' '&&flags==false) {
//				continue;
//			}
//			flags = true;
//			answer += s[0][i];
//		}
//	}
//	if (answer == "")cout << "nai";
//	else cout << answer;
//}