//#include <string>
//#include <cstdio>
//#include <iostream>
//#include <unordered_map>
//using namespace std;
//unordered_map<string, int> M;
//
//int preferword_times = 0;
//string preferword;
//
//int main() {
//	string s;
//	getline(cin, s);
//	int i, j, k, isalphanum[128] = {0};//用于判断是否是字母
//	for (i = '0'; i <= '9'; i++)isalphanum[i] = 1;
//	for (i = 'a'; i <= 'z'; i++)isalphanum[i] = 1;
//	for (i = 'A'; i <= 'Z'; i++)isalphanum[i] = 1;
//	for (char& c : s) {
//		c = tolower(c);
//	}
//	for (i = 0; i < s.size();) {
//		while (i < s.size() && isalphanum[s[i] == 0])i++;
//		if (i == s.size())break;
//		for (j = i + 1; j < s.size() && isalphanum[s[j]] == 1; j++);
//		string temp = s.substr(i, j - i);
//		k = ++M[temp];
//		if (k > preferword_times ||(k==preferword_times&&temp<preferword) ) {
//			preferword_times = k;
//			preferword = temp;	
//		}
//		i = j;
//	}
//	cout << preferword << ' ' << preferword_times;
//}