////#include <iostream>
////#include <cstdio>
////#include <string>
////using namespace std;
////
////int Red, Green, Blue;
////string RedS="", GreenS="", BlueS="";
////
////int main() {
////	cin >> Red >> Green >> Blue;
////	//ºì
////	int shi, ge;
////	shi = Red / 13;
////	ge = Red % 13;
////	if (shi <= 9) {
////		RedS += to_string(shi);
////	}
////	else if(shi==10) {
////		RedS [0] = 'A';
////	}
////	else if (shi == 11) {
////		RedS[0] = 'B';
////	}
////	else if (shi == 12) {
////		RedS[0] = 'C';
////	}
////	if (ge <= 9) {
////		RedS += to_string(ge);
////	}
////	else if (ge == 10) {
////		RedS[1] = 'A';
////	}
////	else if (ge == 11) {
////		RedS[1] = 'B';
////	}
////	else if (ge == 12) {
////		RedS[1] = 'C';
////	}
////	//ÂÌ
////
////	shi = Green / 13;
////	ge = Green % 13;
////	if (shi <= 9) {
////		GreenS += to_string(shi);
////	}
////	else if (shi == 10) {
////		GreenS+= 'A';
////	}
////	else if (shi == 11) {
////		GreenS+= 'B';
////	}
////	else if (shi == 12) {
////		GreenS+= 'C';
////	}
////	if (ge <= 9) {
////		GreenS += to_string(ge);
////	}
////	else if (ge == 10) {
////		GreenS += 'A';
////	}
////	else if (ge == 11) {
////		GreenS += 'B';
////	}
////	else if (ge == 12) {
////		GreenS += 'C';
////	}
////	
////	//À¶
////	shi = Blue / 13;
////	ge = Blue % 13;
////	if (shi <= 9) {
////		BlueS += to_string(shi);
////	}
////	else if (shi == 10) {
////		BlueS += 'A';
////	}
////	else if (shi == 11) {
////		BlueS += 'B';
////	}
////	else if (shi == 12) {
////		BlueS += 'C';
////	}
////	if (ge <= 9) {
////		BlueS += to_string(ge);
////	}
////	else if (ge == 10) {
////		BlueS += 'A';
////	}
////	else if (ge == 11) {
////		BlueS += 'B';
////	}
////	else if (ge == 12) {
////		BlueS += 'C';
////	}
////
////	printf("#%s%s%s",RedS.c_str(), GreenS.c_str(), BlueS.c_str());
////}
//
//#include <iostream>
//using namespace std;
//
//void print(int a) {
//	if (a > 9)cout << 'A' + a - 10;
//	else cout << a;
//}
//int main() {
//	cout << '#';
//	for (int i = 0; i < 3; i++) {
//		int j;
//		cin >> j;
//		print(j/13);
//		print(j%13);
//	}
//}