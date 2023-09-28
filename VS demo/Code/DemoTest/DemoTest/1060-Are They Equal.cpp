//#include <cstdio>
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//int a_[300] = { 0 }, b_[300] = { 0 };
//int* a = a_ + 150, * b = b_ + 150;
//
//void putsto(string s, int* digit) 
//{
//	int i, j, k;
//	for (i = 0; i < s.size(); i++) {
//		if (s[i] == '.')break;	
//	}
//	if (i == s.size()) {//没显式出现小数点
//		for (i = 0; i < s.size(); i++) {
//			digit[s.size() - 1 - i] = s[i] - '0';
//		}
//	}
//	else {//显式出现小数点
//		for (j = 0; j < i; j++) {//整数部分
//			digit[i - 1 - j] = s[j] - '0';
//		}
//		for (j = i + 1; j < s.size(); j++) {//小数部分
//			digit[i - j] = s[j] - '0';
//		}
//	}
//}
//
//bool checksame() 
//{
//	
//}
//
//int  main() 
//{
//	int N;
//	string s1, s2;
//	cin >> N >> s1 >> s2;
//	putsto(s1, a);
//	putsto(s2, b);
//
//	checksame();
//
//}
//
