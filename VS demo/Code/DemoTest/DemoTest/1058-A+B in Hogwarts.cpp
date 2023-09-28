//#include <string>
//#include <cstdio>
//#include <iostream>
//using namespace std;
//
//struct Num
//{
//	int G, S, K;
//};
//
//int main() {
//	Num a, b;
//	string a1, b1;
//	cin >> a1 >> b1;
//	int count = 0;
//	int sum = 0;
//	for (int i = 0; i < a1.length(); i++) {
//		if (i == a1.length() - 1) {
//			sum *= 10;
//			sum += a1[i] - '0';
//			a.K = sum;
//		}
//		else {
//			if (a1[i] == '.') {
//				/*if (count == 0) {
//
//				}
//				else if (count == 1) {
//
//				}else */
//				switch (count)
//				{
//				case 0: a.G = sum; sum = 0; count++; break;
//				case 1: a.S = sum; sum = 0; count++; break;
//				default:break;
//				}
//			}
//			else {
//				sum *= 10;
//				sum += a1[i] - '0';
//			}
//		}
//	}
//
//	count = 0;
//	sum = 0;
//	for (int i = 0; i < b1.length(); i++) {
//		if (i == b1.length() - 1) {
//			sum *= 10;
//			sum += b1[i] - '0';
//			b.K = sum;
//		}
//		else {
//			if (b1[i] == '.') {
//				/*if (count == 0) {
//				}
//				else if (count == 1) {
//				}else */
//				switch (count)
//				{
//				case 0: b.G = sum; sum = 0; count++; break;
//				case 1: b.S = sum; sum = 0; count++; break;
//				default:break;
//				}
//			}
//			else {
//				sum *= 10;
//				sum += b1[i] - '0';
//			}
//		}
//	}
//
//	Num s;
//	s.G = a.G + b.G;
//	s.S = a.S + b.S;
//	s.K = a.K + b.K;
//	s.S += s.K / 29;
//	s.K = s.K % 29;
//	s.G += s.S / 17;
//	s.S = s.S % 17;
//	cout << s.G << "." << s.S << "." << s.K;
//
//}
//
