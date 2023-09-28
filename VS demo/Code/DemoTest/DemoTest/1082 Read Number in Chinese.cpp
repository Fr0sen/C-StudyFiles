//#include <string>
//#include <cstdio>
//#include <iostream>
//
//using namespace std;
//string read[10] = { "", "yi","er","san","si","wu","liu","qi","ba","jiu" };
//string digit[10] = { "" , "Yi","Qian","Bai","Shi","","Qian","Bai","Shi",""};//5是分界线
//int readPos[10] = { -1 ,-1,-1,-1,-1,-1,-1,-1,-1,-1 };
//
//int main() { // 100800    [-1,-1,-1,-1,1,0,0,8,0,0]
//	string s;
//	cin >> s;
//	int flag = false;
//	if (s[0] == '0') {
//		cout << "ling";
//		return 0;
//	}
//	if (s[0] == '-') {
//		flag = true;
//		cout << "Fu";
//		for (int i = s.length() - 1, j = 0; i >= 1; i--,j++) {
//			readPos[9 - j] = s[i] - '0';
//		}
//	}
//	else {
//		for (int i = s.length() - 1, j = 0; i >= 0; i--, j++) {
//			readPos[9 - j ] = s[i] - '0';
//		}
//	}
//	bool flagleft = false, flagright = false;
//	for (int i = 0; i < 10; i++) {
//		if (flag&&readPos[i] == 0) {
//			if (flag && readPos[i + 1] != 0)cout << " ling";
//		}
//		if (readPos[i] != -1) {
//			if (i != 9) {
//				if (i == 5) {
//					if (flag && readPos[i] != 0) {
//						cout << " " << read[readPos[i]] << " " << "Wan";
//						flag = true;
//					}
//					else if (flag && readPos[i] == 0) {
//						cout << " Wan";
//						flag = true;
//					}else if(!flag&&readPos[i] != 0){
//						cout << read[readPos[i]] << " " << "Wan";
//						flag = true;
//					}
//				}
//				else {
//					if (flag && readPos[i] != 0) {
//						cout << " " << read[readPos[i]] << " " << digit[i];
//						flag = true;
//					}
//					else if (readPos[i] != 0) {
//						cout << read[readPos[i]] << " " << digit[i];
//						flag = true;
//					}
//				}
//			}
//			else {
//				if (flag&&readPos[i] != 0)cout << " " << read[readPos[i]] << endl;
//				else {
//					cout << read[readPos[i]] << endl;
//				}
//			}
//		}
//	}
//}