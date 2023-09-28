//#define _CRT_SECURE_NO_WARNINGS 1
//#include <cstdio>
//#include <cctype>
//#include <iostream>
//#include <vector>
//
//using namespace std;
//struct player {
//	string ID_number;
//	string Sign_in_time;
//	string Sign_out_time;
//};
//
//int main() {
//	int K,firsttime=0,lasttime=0,minTime,maxTime,P1,P2;
//	vector<string> v;
//	cin >> K;
//	player ply[100];
//	for (int i = 0; i < K;i++) {
//		cin >> ply[i].ID_number >> ply[i].Sign_in_time >> ply[i].Sign_out_time;
//		for (int k = 0; k < 8; k++) {
//			if (k != 2 || k != 5) {
//				firsttime += (ply[i].Sign_in_time[k]-'0');
//				firsttime *= 10;
//				lasttime += (ply[i].Sign_out_time[k]-'0');
//				lasttime *= 10;
//			}
//		}
//		if (i == 0) {
//			minTime = firsttime;
//			maxTime = lasttime;
//		}
//		cout << firsttime << " " << lasttime;
//		printf("\n");
//		if (firsttime < minTime) {
//			minTime = firsttime;
//			P1 = i;
//		}
//		if (lasttime > maxTime) {
//			maxTime = lasttime;
//			P2 = i;
//		}
//		firsttime = 0;
//		lasttime = 0;
//	}
//	cout << ply[P1].ID_number << " " << ply[P2].ID_number;
//}
////5
////CS301111 15:30 : 28 17 : 00 : 10
////SC3021234 08 : 00 : 00 11 : 25 : 25
////CS301133 21 : 45 : 00 21 : 58 : 40
////d 07 : 30 : 28 17 : 00 : 10
////e 15 : 30 : 18 23 : 00 : 10