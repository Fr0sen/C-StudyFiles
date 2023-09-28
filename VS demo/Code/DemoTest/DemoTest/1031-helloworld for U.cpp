//#include <cstdio>
//#include <string>
//#include <iostream>
//
//using namespace std;
//
//int main() {
//	string s;
//	cin >> s;
//	int i = 0;
//	int length = (s.length() + 2) / 3;     //helloworld                    0123456789   length = 3      3 4 5 6
//	for (; i < length-1; i++) {
//		printf("%c",s[i]);
//		for (int j = 0; j < s.length()-length*2; j++) {
//			printf(" ");
//		}
//		printf("%c\n", s[s.length() - i - 1]);
//	}
//	for (; i < s.length() - length+1; i++) {
//		printf("%c",s[i]);
//	}
//}