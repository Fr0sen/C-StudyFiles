//#include <cstdio>
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	vector<int> digit;
//	int N, b;
//	cin >> N >> b;
//	while (N != 0) {
//		digit.emplace_back(N % b);
//		N /= b;
//	}
//	int i, j, k;
//	for (i = 0; i < digit.size(); i++) {
//		if (digit[i] != digit[digit.size() - i - 1])break;
//	}
//	if (i == digit.size()) {
//		cout << "Yes\n";
//	}
//	else {
//		cout << "No\n";
//	}
//	for (i = digit.size() - 1; i >= 0; i--) {
//		if (i == digit.size() - 1) printf("%d", digit[i]);
//		else cout << " " << digit[i];
//	}
//}