////#include <cstdio>
////#include <iostream>
////#include <algorithm>
////
////using namespace std;
////
////struct Customer 
////{
////	int processTime,arriveTime;
////	bool flag = 0;
////	bool wait = 0;
////};
////
////bool cmp(Customer a, Customer b) 
////{
////	return a.arriveTime < b.arriveTime;
////}
////
////int N, K, waitTime = 0;
////Customer customer[10001];
////
////
////int main() { //17:00:01以及以后的顾客不会接受服务
////	cin >> N >> K;
////	for (int i = 0; i < N; i++) 
////	{
////		string timeString;
////		int hour, minute, second;
////		cin >> timeString >> customer[i].processTime;
////		customer[i].processTime = customer[i].processTime * 60;
////		if (customer[i].processTime > 3600)customer[i].processTime = 3600;
////		hour = (timeString[0] - '0') * 10 + (timeString[1] - '0');
////		minute = (timeString[3] - '0') * 10 + (timeString[4] - '0');
////		second = (timeString[6] - '0') * 10 + (timeString[7] - '0');
////		int time = hour * 60 * 60 + minute * 60 + second;
////		customer[i].arriveTime = time;
////	}
////	sort(customer, customer + N, cmp);//来的早的排到最前面
////	for (int i = 0; i < N; i++) {
////		if (customer[i].arriveTime > 17 * 60 * 60) {
////			customer[i].processTime = 0;
////		}
////	}
////	//K个窗口是吧。
////	int windows = K;
////	for (int t = 8 * 60 * 60; t <= 17 * 60 * 60; t++)	
////	{
////		for (int i = 0; i < N; i++) 
////		{
////			if (customer[i].arriveTime <= t && customer[i].processTime > 0) 
////			{ //已经到了，可以被服务
////				//检查还有没有窗口可以为他服务
////				if (customer[i].flag == 0 && windows > 0) 
////				{  //有窗口，还没被服务过，可以服务
////					customer[i].flag = 1;
////					customer[i].processTime--;
////					windows--;
////				}
////				else if (customer[i].flag == 1) //已经在服务了
////				{   
////					customer[i].processTime--;
////				}
////				else if (windows <= 0&&customer[i].wait!=1) //没窗口了
////				{   
////					customer[i].wait = 1;
////					windows--;
////				}
////			}
////			else if (customer[i].processTime == 0 && customer[i].flag == 1) 
////			{
////				windows++;
////				customer[i].processTime--;
////			}
////		}
////		if (windows < 0) {
////			waitTime += 0 - windows;
////		}
////	}
////	double time;
////	time = ((double)(waitTime) / N) / 60;
////	printf("%.1f", time);
////}
//
//#include <cstdio>
//#include <iostream>
//#include <algorithm>
//
//
//using namespace std;
//struct customer {
//	int come_time, process_time, leave_time = 0;
//};
//bool cmp(customer x, customer y) {
//	return x.come_time < y.come_time;
//}
//
//customer c[10001]; 
//int main() {
//	int i, j, N, K;
//	for (i = 0; i < N; i++) {
//		int hh, mm, ss, process_time;
//		char d;
//		cin >> hh >> d >> mm >> d >> ss >> process_time;
//		c[i].come_time = hh * 3600 + mm * 60 + ss;
//		c[i].process_time = process_time * 60;
//		if (c[i].process_time > 3600)c[i].process_time = 3600;
//	}
//	c[N].come_time = 9999999;
//	sort(c, c + N, cmp);
//	int next = 0;
//	int window[K];
//	double Sum = 0;
//	for (i = 0; i < K; i++)window[i] = -1;
//	for (int Time = 28800;c[next].come_time<=61200; Time++) {
//		//送客
//		for (i = 0; i < K; i++) {
//			if (window[i] >= 0) {
//				j = window[i];
//				if (c[j].leave_time == Time) {
//					window[i] = -1;
//				}
//			}
//		}
//		//入队
//		for (i = 0; i < K; i++) {
//			if (window[i] == -1) {
//				if (c[next].come_time <= Time&& c[next].come_time <= 61200) {
//					window[i]=next;
//					next++;
//				}
//			}
//		}
//		//迎客
//		for (i = 0; i < K; i++) {
//			if (window[i] >= 0) {
//				j = window[i];
//				if (c[j].leave_time == 0) {
//					Sum += Time - c[j].come_time;
//					c[j].leave_time = Time + c[j].process_time;
//				}
//			}
//		}
//	}
//	printf("%.1f", Sum / next / 60);	
//}