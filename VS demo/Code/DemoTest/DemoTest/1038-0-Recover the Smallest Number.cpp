//#include <cstdio>
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//int N;
//string nums[10001];
//
//bool cmp(string a, string b) {
//	return a + b < b + a;
//	
//	/*int i = 0;
//	while (i < a.length() && i < b.length()) {
//		if (a[i] < b[i]) {
//			return a[i] < b[i];
//		}
//		else if (a[i] > b[i]) {
//			return a[i] > b[i];
//		}
//		else i++;
//	}
//	if (a.length() > b.length()) {
//		if (a[i] < b[0]) {
//			return a[i] < b[i];
//		}
//		else return a[i] > b[i];
//	}
//	else if(a.length()<b.length())
//	{
//		if (b[i] < a[0]) {
//			return b[i] < a[i];
//		}
//		else return b[i] > a[i];
//	}
//	else return a[i] < b[i];*/
//}
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> nums[i];
//	}
//	sort(nums, nums + N, cmp);
//	string lastString = "";
//	for (int i = 0; i < N; i++) {
//		lastString += nums[i];  // 012134
//	}
//	int len = lastString.length();
//	/*while (lastString[0] == '0') {
//		for (int i = 0; i < len; i++) {
//			lastString[i] = lastString[i+1];
//		}
//		len--;
//	}
//	printf("%s", lastString.c_str());*/
//	int i = 0;
//	for (; lastString[i] == '0'; i++);
//	if (i == lastString.size())cout << 0;
//	while (i < lastString.size()) {
//		cout << lastString[i];
//		i++;
//	}
//}
