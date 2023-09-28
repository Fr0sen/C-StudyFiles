//#include <cstdio>
//#include <iostream>
//#include <unordered_map>
//
//using namespace std;
//
//unordered_map<int, int>M;
//int main() {
//	int digit[30] = { 0 };
//	string s;
//	cin >> s;
//	int i, jinwei;
//	for (i = 0; i < s.size(); i++) {
//		digit[i] = s[s.size() - 1 - i] - '0'; //从右向左记录
//		M[digit[i]]++;
//	}
//	jinwei = 0;
//	for (i = 0; i < s.size(); i++) {
//		digit[i] = digit[i] * 2 + jinwei;	//从右像左乘2加上进位
//		if (digit[i] >= 10) {
//			digit[i] -= 10;
//			jinwei = 1;
//		}
//		else {
//			jinwei = 0;
//		}
//		M[digit[i]]--;
//		if (M[digit[i]] == 0)M.erase(digit[i]);
//	}
//	if (jinwei == 1) { //最大的数有进位即可
//		digit[s.size()] = 1;
//		M[digit[s.size()]]--;
//		if (M[digit[s.size()]] == 0)M.erase(digit[s.size()]);
//	}
//}
//	if (M.size() == 0) {
//		cout << "Yes\n";
//	}
//	else {
//		cout << "No\n";
//	}
//	if (digit[s.size()] == 1)cout << 1;
//	for (i = s.size() - 1; i >= 0; i--)cout << digit[i];  
//}
// //31415
// //01234
// //43210