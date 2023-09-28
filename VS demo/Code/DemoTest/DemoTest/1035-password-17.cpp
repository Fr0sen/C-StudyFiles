//#include <cstdio>
//#include <iostream>
//#include <string>
//using namespace std;
//int N;
//struct UserCount
//{
//	string name, password;
//	bool flag = 0;
//};
//UserCount userCount[1001];
//
//bool Modify(int pos) {
//	for (int i = 0; i < userCount[pos].password.length(); i++) {
//		if (userCount[pos].password[i]=='1') {
//			userCount[pos].password[i] = '@';
//			userCount[pos].flag = 1;
//		}
//		if (userCount[pos].password[i] == '0') {
//			userCount[pos].password[i] = '%';
//			userCount[pos].flag = 1;
//		}
//		if (userCount[pos].password[i] == 'l') {
//			userCount[pos].password[i] = 'L';
//			userCount[pos].flag = 1;
//		}
//		if (userCount[pos].password[i] == 'O') {
//			userCount[pos].password[i] = 'o';
//			userCount[pos].flag = 1;
//		}
//	}
//	return userCount[pos].flag;
//}
//
//int main() {
//	cin >> N;
//	int Sum = 0;
//	for (int i = 0; i < N; i++) {
//		string name, pass;
//		cin >> userCount[i].name >> userCount[i].password;
//		if (Modify(i)) {
//			userCount[i].flag = 1;
//			Sum++;
//		}
//	}
//	if (Sum==0) {
//		if (N == 1) {
//			printf("There is 1 account and no account is modified");
//
//		}
//		else {
//			printf("There are %d account and no account is modified", N);
//		}
//	}
//	else if(Sum!=0) {
//		cout << Sum << endl;
//		for (int i = 0; i < N; i++) {
//			if (userCount[i].flag == 1) {
//				printf("%s %s\n", userCount[i].name.c_str(), userCount[i].password.c_str());
//			}
//		}
//	}
//}