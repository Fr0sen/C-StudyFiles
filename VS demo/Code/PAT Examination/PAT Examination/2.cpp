//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <vector>
//#include <queue>
////��֤ÿ�����ж�ҪС��SIZE��
////	���ʹ���㷨��cache���û����ԣ��û�������ܾ�û�����ʹ���ҳ�棬��cache�����Ĳ�����ҳ����Ҫ������
////  k�������ʹ�ù������֡���ͬ��lru��lrukҪά������ ��ͬ�Ķ��С�������ʷ�����cache��
//// ��������ʷ�����в��ᱻ�ӵ�cache�г�������������k��
//
////�������ݣ����ж�cache queue����û�У�����У����������ӣ�
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
//			if (p.num == Cache[j].num) {//cache���У��ŵ������   1 8 5 9  1 5 9 8
//				cachefind = true;
//				temp = Cache[j];
//				for (int i = j; i < cache_size-1; i++) {
//					Cache[i] = Cache[i + 1];
//				}
//				Cache[cache_size - 1] = temp;
//				break;
//			}
//		}
//		if (cachefind == false) {//cache��û���ҵ���ȥ��ʷ��������
//			if (historial_size == 0) {
//				historial_size++;
//				Historial.emplace_back(p);
//			}
//			else {
//				bool lishizhongyou = false;
//				for(int j=0;j< historial_size;j++){//��ʷ���У��Ӵ���
//					if (p.num == Historial[j].num) {
//						Historial[j].cishu++;
//						temp = Historial[j];
//						for (int i = j; i < historial_size - 1; i++) {
//							Historial[i] = Historial[i + 1];
//						}
//						Historial[historial_size - 1] = temp;
//						lishizhongyou = true;
//						if (Historial[j].cishu == K) {//����cache��,�����ͬʱҪ�����Ӷ���������
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
//							//����
//							for (int t = j; t < historial_size-1; t++) {
//								Historial[t].num = Historial[t+1].num;
//								Historial[t].cishu = Historial[t + 1].cishu;
//							}
//							Historial.pop_back();
//							historial_size--;
//						}
//					}
//				}
//				if (lishizhongyou == false) {//��ʷ��û��
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
