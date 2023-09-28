//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <queue>
////保证每个队列都要小于SIZE；
////	最近使用算法是cache的置换策略，置换出最近很久没被访问过的页面，当cache是满的并且新页面需要进来。
////  k代表最近使用过的数字。不同于lru，lruk要维护两个 不同的队列。对于历史请求和cache。
//// 数据在历史队列中不会被扔到cache中除非他被访问了k次
//
////来了数据，先判断cache queue中有没有，如果有，则出队再入队，
//
//using namespace std;
//int K, queue_size, N;
//
//struct page {
//	int num;
//	int cishu;
//};
//page temp;
//vector<page> Historial, Cache;
//int historial_size = 0, cache_size = 0;
//int main() {
//	cin >> K >> queue_size >> N;
//	for (int i = 0; i < N; i++) {
//		page p;
//		cin >> p.num;
//		p.cishu = 1;
//		bool cachefind = false;
//		for (int j = 0; j < Cache.size(); j++) {
//			if (p.num == Cache[j].num) {//cache中有，放到最后面   1 8 5 9  1 5 9 8
//				cachefind = true;
//				temp = Cache[j];
//				for (int i = j; i < cache_size-1; i++) {
//					Cache[i] = Cache[i + 1];
//				}
//				Cache[cache_size - 1] = temp;
//				break;
//			}
//		}
//		if (cachefind == false) {//cache中没有找到，去历史队列中找
//			if (historial_size == 0) {
//				historial_size++;
//				Historial.emplace_back(p);
//			}
//			else {
//				bool lishizhongyou = false;
//				for(int j=0;j< historial_size;j++){//历史中有，加次数
//					if (p.num == Historial[j].num) {
//						Historial[j].cishu++;
//						temp = Historial[j];
//						for (int i = j; i < historial_size - 1; i++) {
//							Historial[i] = Historial[i + 1];
//						}
//						Historial[historial_size - 1] = temp;
//						lishizhongyou = true;
//						if (Historial[j].cishu == K) {//插入cache中,插入的同时要把他从队列里提走
//							cache_size++;
//							if (cache_size > queue_size) {
//								cache_size--;
//								for (int t = 0; t < cache_size - 1; t++) {
//									Cache[t].num = Cache[t + 1].num;
//									Cache[t].cishu = Cache[t + 1].cishu;
//								}
//								Cache[cache_size - 1] = Historial[j];
//							}
//							else {
//								Cache.emplace_back(Historial[j]);
//							}
//							//踢走
//							for (int t = j; t < historial_size-1; t++) {
//								Historial[t].num = Historial[t+1].num;
//								Historial[t].cishu = Historial[t + 1].cishu;
//							}
//							Historial.pop_back();
//							historial_size--;
//						}
//					}
//				}
//				if (lishizhongyou == false) {//历史中没有
//					historial_size++;
//					if (historial_size > queue_size) {
//						historial_size--;
//						for (int t = 0; t < historial_size - 1; t++) {
//							Historial[t].num = Historial[t + 1].num;
//							Historial[t].cishu = Historial[t + 1].cishu;
//						}
//						Historial[historial_size - 1].num = p.num;
//						Historial[historial_size - 1].cishu = p.cishu;
//					}
//					else {
//						Historial.emplace_back(p);
//					}
//				}
//			}
//		}
//	}
//	if (historial_size == 0) {
//		cout << '-' << endl;
//	}
//	else {
//		for (int i = 0; i < historial_size; i++) {
//			if (i == 0) {
//				cout << Historial[i].num;
//			}
//			else cout << " " << Historial[i].num;
//		}
//		cout << endl;
//	}
//	if (cache_size == 0) {
//		cout << '-' << endl;
//	}
//	else {
//		for (int i = 0; i < cache_size; i++) {
//			if (i == 0) {
//				cout << Cache[i].num;
//			}
//			else cout << " " << Cache[i].num;
//		}
//	}
//}
