////23   10111   11101   29,并且要先判断自己是不是质数,在判断反向后是不是质数
//#include<iostream>
//#include<cstdio>
//
//using namespace std;
//
//int isprime(int n) {
//	if (n < 2)return 0;
//	for (int i = 2; i * i <= n; i++) {
//		if (n % i == 0)return 0;
//	}
//	return 1;
//}
//
//int translate(string N, int r) {
//	int Sum = 0;
//	for (int i = N.size() - 1, unit = 1; i >= 0; i--, unit *= r) {
//		Sum += unit * (N[i] - '0');
//	}
//	return Sum;
//}
//
//int main() {
//	while (1) {
//		int n, r;
//		cin >> n >> r;
//		if (n < 0)break;
//		if (!isprime(n))cout << "No\n"; //
//		else {
//			string N = "";   //314变成"413"
//			while (n != 0) {
//				N += '0' + n % r;
//				n /= r;
//			}
//			int value = translate(N, r);
//			if (isprime(value))cout << "Yes\n";//转化之后的数也要是质数
//			else cout << "No\n";
//
//		}
//	}
//}