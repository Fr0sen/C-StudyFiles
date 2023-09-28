//#include <iostream>
//using namespace std;
//
//int main() {
//	int M;
//	cin >> M;
//	string earliest_signin = "999", latest_signout = "000";
//	string earliest, latest;
//	while (M--) {
//		string s1, s2, s3;
//		cin >> s1 >> s2 >> s3;
//		if (s2 < earliest_signin) {
//			earliest_signin = s2;
//			earliest = s1;
//		}
//		if (s3 > latest_signout) {
//			latest_signout = s3;
//			latest = s1;
//		}
//	}
//	cout << earliest << ' ' << latest;
//}