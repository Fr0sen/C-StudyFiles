////#include <cstdio>
////#include <iostream>
////#include <string>
////#include <cctype>
////
////using namespace std;
////
////bool isPalindromic(long long N) {
////    string a = to_string(N);
////    if (a.size() == 1) {
////        return true;
////    }
////    for (int i = 0; i <= a.size() / 2; i++) {//12321 01234  123321
////        if (a[i] != a[a.size() - i - 1]) {
////            return false;
////        }
////    }
////    return true;
////}
////
////long long Reverse(long long N) {
////    string a = to_string(N);   //12345  01234
////    string b = a;
////    long long t = 0;
////    if (a.size() == 1) {
////        return N;
////    }
////    else {
////        for (int i = 0; i < a.size(); i++) {
////            b[i] = a[a.size() - i - 1];//b="54321"
////        }
////        for (int i = 0; i < a.size(); i++) {
////            t *= 10;
////            t += b[i] - '0';
////        }
////        return t;
////    }
////}
////
////int main() {
////    long long N, K ,reverse;   //与其用string，不如用int数组。！！！
////    cin >> N >> K;
////    long long tempK=K;
////    if (isPalindromic(N)) {
////        cout << N << endl;
////        cout << 0;
////    }
////    else {
////        while (K--) {
////            reverse = Reverse(N);
////            N += reverse;
////            if (isPalindromic(N)) {
////                cout << N << endl;
////                cout << tempK - K;
////                return 0;
////            }
////        }
////        cout << N << endl;
////        cout << tempK;
////    }
////}
//
//
//#include <cstdio>
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int ispalindromic(int digit[], int len) {
//	int i;
//	for (i = 0; i < len; i++) {
//		if (digit[i] != digit[len - 1 - i])break;
//	}
//	if (i == len)return 1;
//	else return 0;
//}
//
//int main() {
//	int digit[100] = { 0 },reverse[100];
//	int K, i, j;
//	long long N;
//	cin >> N >> K;
//	string s = to_string(N);
//	for (i = 0; i < s.size(); i++)digit[i] = s[s.size() - 1 - i] - '0';
//	int len = s.size();
//	j = 0;
//	while (!ispalindromic(digit, len)) {
//		for (i = 0; i < len; i++)reverse[i] = digit[len - 1 - i];
//		int jinwei = 0;//进位思想
//		for (i = 0; i < len; i++) {
//			digit[i] += reverse[i] + jinwei;
//			if (digit[i] >= 10) {
//				digit[i] -= 10;
//				jinwei = 1;
//			}
//			else jinwei = 0;
//		}
//		if (jinwei == 1) {
//			digit[len] = 1;
//			len++;
//		}
//		if (++j == K)break;
//	}
//	for (i = len - 1; i >= 0; i--)cout << digit[i];
//	cout << endl;
//	cout << j;
//}