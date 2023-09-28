//#include <iostream>
//#include <cstdio>
//#include <vector>
//using namespace std;
//struct Prime{
//	long long int num;
//	int count = 1;
//};
//
//vector<Prime> ans;
//
//void findPrime(long long int a) {   //97532468 = 2 
//	for (int i = 2; i <= a; i++) {
//		if (a % i == 0) {
//			Prime k;
//			k.num = i;
//			bool f = true;
//			for (int j = 0; j < ans.size(); j++) {
//				if (i == ans[j].num) {
//					ans[j].count++;
//					f = false;
//					break;
//				}
//			}
//			if (f)ans.emplace_back(k);
//			findPrime(a / i);
//			return;
//		}
//	}
//}
//
//int main() {
//	long long int N;
//	cin >> N;
//	if (N == 1)cout << 1 << "=" << 1;
//	else {
//		findPrime(N);
//		cout << N << "=";
//		for (int i = 0; i < ans.size(); i++) {
//			if (i!=0)cout << "*";
//			cout << ans[i].num;
//			if (ans[i].count > 1)cout << "^" << ans[i].count;
//		}
//	}
//	
//}