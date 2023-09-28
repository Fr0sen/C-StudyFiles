//#include <cstdio>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int NC, NP,sumMoney=0;
//int posit_coupon=0, posit_prodect=0;
//int coupon[100001], product[100001];
//
//bool cmp_pos(int a, int b) {
//	return a > b;
//}
//
//bool cmp_nega(int a, int b) {
//	return a < b;
//}
//
//int main() {
//	scanf("%d", &NC);
//	for (int i = 0; i < NC; i++) {
//		int a;
//		scanf("%d", &a);
//		coupon[i] = a;
//	}
//	scanf("%d",&NP);
//	for (int i = 0; i < NP; i++) {
//		int a;
//		scanf("%d", &a);
//		product[i]=a;
//	}
//	sort(coupon, coupon + NC, cmp_pos);
//	sort(product, product + NP, cmp_pos);
//	bool flag = 0;
//	while (NC > 0 && NP > 0 && flag==0) {
//		if (coupon[0] > 0 && product[0] >0) {
//			sumMoney += coupon[0] * product[0];
//			for (int i = 1; i < NC; i++) {  //全部前移一次
//				coupon[i - 1] = coupon[i];
//				product[i - 1] = product[i];
//			}
//			NC--;
//			NP--;
//		}
//		else {
//			sort(coupon, coupon + NC, cmp_nega);
//			sort(product, product + NP, cmp_nega);
//			if (coupon[0] < 0 && product[0] < 0) {
//				sumMoney += coupon[0] * product[0];
//				for (int i = 1; i < NC; i++) {  //全部前移一次
//					coupon[i - 1] = coupon[i];
//					product[i - 1] = product[i];
//				}
//				NC--;
//				NP--;
//			}
//			else {
//				flag = 1;
//			}
//		}
//		
//	}
//	printf("%d", sumMoney);
//}
