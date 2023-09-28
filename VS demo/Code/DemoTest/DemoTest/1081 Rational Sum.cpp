//#include <iostream>
//#include <cstdio>
//#include <string>
//#include <algorithm>
//using namespace std;
//int N;
//struct Num{
//	long long int sign = 1;
//	long long int numerator = 0;
//	long long int denominator = 0;
//};
//
//Num num[101];
//Num answer;
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		string s;
//		cin >> s;
//		if (s[0] == '-') {
//			num[i].sign *= -1;
//			int j = 1;
//			for (; s[j]!='/'; j++) {
//				if (j == 1) {
//					num[i].numerator += s[j] - '0';
//				}
//				else {
//					num[i].numerator *= 10;
//					num[i].numerator += s[j] - '0';
//				}
//			}
//			j++;
//			num[i].denominator += s[j] - '0';
//			j++;
//			for (; j <s.size(); j++) {
//				num[i].denominator *= 10;
//				num[i].denominator += s[j] - '0';
//			}
//			num[i].numerator *= num[i].sign;
//		}else{
//			int j = 0;
//			for (; s[j] != '/'; j++) {
//				if (j == 0) {
//					num[i].numerator += s[j] - '0';
//				}
//				else {
//					num[i].numerator *= 10;
//					num[i].numerator += s[j] - '0';
//				}
//			}
//			j++;
//			num[i].denominator += s[j] - '0';
//			j++;
//			for (; j < s.size(); j++) {
//				num[i].denominator *= 10;
//				num[i].denominator += s[j] - '0';
//			}
//			num[i].numerator *= num[i].sign;
//		}
//	}
//	answer = num[0];
//	for (int i = 1; i < N; i++) {
//		if (answer.denominator != num[i].denominator) {
//			if (answer.denominator < num[i].denominator) {
//				if (num[i].denominator % answer.denominator == 0) { 
//					answer.numerator = (num[i].denominator / answer.denominator) * answer.numerator + num[i].numerator;
//					answer.denominator = num[i].denominator;
//				}
//				else {
//					 //  8 / 3  2/5
//					answer.numerator = answer.numerator * num[i].denominator;
//					num[i].numerator = num[i].numerator * answer.denominator;
//					answer.denominator = answer.denominator * num[i].denominator;
//					answer.numerator += num[i].numerator;
//				}
//			}
//			else { 
//
//				if (answer.denominator % num[i].denominator == 0) {
//					answer.numerator += (answer.denominator / num[i].denominator) * num[i].numerator ;
//				}
//				else {
//					//  8/3  2/5
//					answer.numerator = answer.numerator * num[i].denominator;
//					num[i].numerator = num[i].numerator * answer.denominator;
//					answer.denominator = answer.denominator * num[i].denominator;
//					answer.numerator += num[i].numerator;
//				}
//			}
//		}
//		else {
//			answer.numerator += num[i].numerator;
//		}
//	}
//	if (answer.numerator < answer.denominator) {  
//		int ppp = 1;
//		while (ppp <= answer.numerator) {
//			if (answer.numerator % ppp == 0 && answer.denominator % ppp == 0 && ppp != 1) {
//				answer.numerator = answer.numerator / ppp;
//				answer.denominator = answer.denominator / ppp;
//				ppp = 1;
//			}
//			else ppp++;
//		}
//		cout << answer.numerator << '/' << answer.denominator;
//	}
//	else {
//		cout << answer.numerator / answer.denominator;
//		answer.numerator -= (answer.numerator / answer.denominator) * answer.denominator;
//		if (answer.numerator % answer.denominator != 0){
//			int ppp = 1;
//			while (ppp <= answer.numerator) {
//				if (answer.numerator% ppp == 0 && answer.denominator % ppp == 0 && ppp != 1) {
//					answer.numerator = answer.numerator / ppp;
//					answer.denominator = answer.denominator / ppp;
//					ppp = 1;
//				}
//				else ppp++;
//			}
//			cout << " " << answer.numerator % answer.denominator << "/" << answer.denominator;
//		}
//	}
//}