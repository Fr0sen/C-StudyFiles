//#include <string>
//#include <cstdio>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//struct Bill
//{
//	string name;
//	int startTime, endTime,type; //时间将字符串转化为int是最好
//	int minute;
//	double money;
//};
//
//struct User
//{
//	string userName, time, condition;
//	int type;
//	int Time;
//};
//
//
//int tollArray[24];
//int N,minTime,month;
//User user[1001];
//Bill offline[1001];
//
//bool cmp(Bill a,Bill b) {
//	return a.startTime < b.startTime;
//}
//
//int Minute(int startTime, int endTime) { //02 00 01       04 23 59     59+23*60+24*60*2
//	int day, hour, minute, sumTime;
//	day = endTime / 10000 - startTime / 10000;
//	hour = (endTime % 10000) / 100 - (startTime % 10000) / 100;
//	minute = (endTime % 100) - (startTime % 100);
//	sumTime = day * 24 * 60 + hour * 60 + minute;
//	return sumTime;
//}
//
//double Money(int startTime, int endTime) {
//	int startDay, startHour, startMinute, endDay, endHour, endMinute;
//	double money = 0;
//	startDay = startTime / 10000;
//	startHour = startTime % 10000 / 100;
//	startMinute = startTime % 100;
//	endDay = endTime / 10000;
//	endHour = (endTime % 10000) / 100 ;
//	endMinute = endTime % 100;
//	//开加	020001  042359
//	for (int i = 0; !(startDay==endDay&&startHour==endHour&&startMinute==endMinute); i++) {//学到了思想
//		startMinute++;
//		money += tollArray[startHour] * 0.01;
//		if (startMinute == 60) {
//			startHour++;
//			startMinute = 0;
//			if (startHour == 24) {
//				startDay++;
//				startHour = 0;
//			}
//		}
//	}
//	return money;
//}
//string userString[1001] = {""};
//int t = 0;
//int main() {
//	//输入
//	for (int i = 0; i < 24; i++) {
//		cin >> tollArray[i];
//	}
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> user[i].userName >> user[i].time >> user[i].condition;
//		month = (user[i].time[0]-'0') * 10 + (user[i].time[1]-'0');
//		user[i].Time = ((user[i].time[3] - '0') * 100000) + ((user[i].time[4] - '0') * 10000) + ((user[i].time[6] - '0') * 1000) + ((user[i].time[7] - '0') * 100) + ((user[i].time[9] - '0') * 10) + ((user[i].time[10] - '0'));
//		if (user[i].condition == "off-line") {
//			offline[i].type = 1;
//			offline[i].name = user[i].userName;
//			offline[i].endTime = ((user[i].time[3]-'0') * 100000) + ((user[i].time[4] - '0') * 10000) + ((user[i].time[6] - '0') * 1000) + ((user[i].time[7] - '0') * 100) + ((user[i].time[9] - '0') * 10) + ((user[i].time[10] - '0'));//计算时间的算法
//			//offline[i].startTime = offline[i].endTime;
//			offline[i].minute = 0;
//			offline[i].money = 0;
//		}
//	}
//	for (int i = 0; i < 1001; i++) {  //配对
//		if (offline[i].type == 1) {
//			minTime = 0;
//			int a = -1, b = -1;
//			for (int j = 0; j < N; j++) {
//				if (user[j].userName == offline[i].name && user[j].Time < offline[i].endTime) {
//					if (minTime == 0 && user[j].condition=="on-line") {
//						minTime = offline[i].endTime - user[j].Time;
//						offline[i].startTime = user[j].Time;
//						offline[i].minute = Minute(offline[i].startTime, offline[i].endTime);
//						offline[i].money = Money(offline[i].startTime, offline[i].endTime);
//						a = i, b = j;
//					}
//					if (offline[i].endTime - user[j].Time < minTime && user[j].condition == "on-line") {
//						minTime = offline[i].endTime - user[j].Time;
//						offline[i].startTime = user[j].Time;
//						offline[i].minute = Minute(offline[i].startTime, offline[i].endTime);
//						offline[i].money = Money(offline[i].startTime, offline[i].endTime);
//						a = i, b = j;
//					}
//				}
//			}
//			if (a > -1 && b > -1 && user[b].condition == "off-line") {
//				offline[a].name = "";
//			}
//			if (a != b && a != -1 && b != -1) {
//				user[a].userName = "";
//				user[b].userName = "";
//			}
//			if (offline[i].minute == 0) {
//				offline[i].name = "";
//			}
//		}
//	}
//	string name;
//	for (int j = 0; j < N; j++) {//从姓名开始排序一次
//		int t = 0;
//		for (int i = 0; i < N; i++) {
//			if (offline[i].name!=""&&t==0) {
//				name = offline[i].name;
//				t++;
//			}
//			else if(offline[i].name!="") {
//				if (offline[i].name < name) {
//					name = offline[i].name;
//				}
//			}
//		}
//		double moneySum = 0;
//		if (name != "") {
//			printf("%s %02d\n", name.c_str(), month);
//			sort(offline, offline + N, cmp);
//			for (int k = 0; k < N; k++) {
//				if (offline[k].name == name) {
//					printf("%02d:%02d:%02d %02d:%02d:%02d %d $%02.02f\n", offline[k].startTime / 10000, (offline[k].startTime % 10000) / 100, offline[k].startTime % 100, offline[k].endTime / 10000, (offline[k].endTime % 10000) / 100, offline[k].endTime % 100, offline[k].minute, offline[k].money);
//					moneySum += offline[k].money;
//					offline[k].name = "";
//				}
//			}
//			printf("Total amount: $%02.02f\n", moneySum);
//		}
//		name = "";
//		/*for (int k = 0; k < N; k++) {
//			if (offline[k].name != "")
//				printf("%s %02d\n", offline[k].name.c_str(), month);
//			if (offline[k].name == name) {
//				printf("%02d:%02d:%02d %02d:%02d:%02d %d $%02.02f\n", offline[k].startTime / 10000, (offline[k].startTime % 10000) / 100, offline[k].startTime % 100, offline[k].endTime / 10000, (offline[k].endTime % 10000) / 100, offline[k].endTime % 100, offline[k].minute, offline[k].money);
//				moneySum += offline[k].money;
//				offline[k].name = "";
//				printf("Total amount: $%02.02f\n", moneySum);
//			}
//		}*/
//	}
//
//	//for (int i=0; i < 1001; i++) {//day = endTime / 10000 - startTime / 10000;//hour = (endTime % 10000) / 100 - (startTime % 10000) / 100;//minute = (endTime % 100) - (startTime % 100);
//	//			if (offline[i].name !="") {
//	//				printf("%s %02d\n", offline[i].name.c_str(), month);
//	//				printf("%02d:%02d:%02d %02d:%02d:%02d %d $%02.02f\n",offline[i].startTime/10000, (offline[i].startTime % 10000) / 100, offline[i].startTime %100, offline[i].endTime / 10000, (offline[i].endTime % 10000) / 100, offline[i].endTime % 100,offline[i].minute, offline[i].money);
//	//			}
//	//	}
//	//输出
//	/*for (int i = 0; i < N; i++) {
//		printf("%s %02d\n", offline[i].name.c_str(), month);
//		printf("%d %02.02f\n\n", offline[i].minute, offline[i].money);
//	}*/
//	
//}

//#include<cstdio>
//#include<iostream>
//
//using namespace std;
//
//int main() {
//	
//}