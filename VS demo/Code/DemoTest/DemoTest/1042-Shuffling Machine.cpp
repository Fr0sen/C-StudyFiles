//#include <cstdio>
//#include <iostream>
//#include <cctype>
//using namespace std;
//
//string cards[55] = {"","S1","S2","S3","S4","S5","S6","S7","S8","S9","S10","S11","S12","S13","H1","H2","H3","H4","H5","H6","H7","H8","H9","H10","H11","H12","H13","C1","C2","C3","C4","C5","C6","C7","C8","C9","C10","C11","C12","C13","D1","D2","D3","D4","D5","D6","D7","D8","D9","D10","D11","D12","D13","J1","J2"};
//string ans1[55] = { "" };
//int a[55];
//int K;
//int main() {
//	cin >> K;
//	for (int i = 1; i < 55; i++) {
//		int s;
//		cin >> s;
//		a[i] = s;
//	}
//	while (K--) {
//		for (int i = 1; i < 55; i++) {
//			ans1[a[i]] = cards[i];
//		}
//		for (int i = 1; i < 55; i++) {
//			cards[i] = ans1[i];
//		}
//	}
//	for (int i = 1; i < 55; i++) {
//		if (i == 1)cout << ans1[i];
//		else {
//			cout << " " << ans1[i];
//		}
//	}
//}