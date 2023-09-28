//#define _CRT_SECURE_NO_WARNINGS 1
//#include<cstdio>
//#include<iostream>
//#include<vector>
//#include<cctype>
//
//using namespace std;
//vector<int> v1,v2;
//
//
//
//void show(int sum) {
//	switch (sum)
//	{
//		case 0:
//			cout << "zero";
//			break;
//		case 1:
//			cout << "one";
//			break;
//		case 2:
//			cout << "two";
//			break;
//		case 3:
//			cout << "three";
//			break;
//		case 4:
//			cout << "four";
//			break;
//		case 5:
//			cout << "five";
//			break;
//		case 6:
//			cout << "six";
//			break;
//		case 7:
//			cout << "seven";
//			break;
//		case 8:
//			cout << "eight";
//			break;
//		case 9:
//			cout << "nine";
//			break;
//		default:
//			break;
//	}
//}
//
//int main() {
//	char c;
//	int K=1,N,sum=0;
//	cin >> N;
//	while (N!=0) {
//		v1.emplace_back(N%10);//相当于反向栈
//		N /= 10;
//	}
//	for (int i = 0; i < v1.size();i++) {
//		sum += v1[i];
//		//cout << v[i];
//	}
//	while (sum != 0) {
//		v2.emplace_back(sum % 10);//相当于反向栈
//		sum /= 10;
//	}
//	while (!v2.empty()) {
//		if (K != 1) {
//			cout << ' ';
//		}
//		//cout << v2[v2.size() - 1]<<' ';
//		show(v2[v2.size()-1]);
//		v2.pop_back();
//		K++;
//	}
//}