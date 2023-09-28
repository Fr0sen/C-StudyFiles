//#include <cstdio>
//#include <iostream>
//using namespace std;
////10031566489492+1648794911115613444=?
//
//
//int a[1001], b[1001], ans[1001];
//int length_a = 0, length_b = 0;
//int d = 0; //进位
//
//int main() {
//	int pos = 1,num;
//	while (isdigit(num = getchar())) {//这里num会变成49 是ascii码
//		a[pos++] = num - '0';
//		length_a++;
//	}
//	pos = 1;
//	while (isdigit(num = getchar())) {
//		b[pos++] = num - '0';
//		length_b++;
//	}
//	pos = 1000;
//	while (length_a != 0 && length_b != 0) {//1314+529
//		int nums;
//		nums = a[length_a--] + b[length_b--] + d;
//		d = 0;
//		ans[pos] = nums % 10;
//		pos--;
//		d = nums / 10;
//	}
//	bool flag = false;
//	if (length_a != 0) {
//		while (length_a != 0) {
//			ans[pos] = a[length_a--] + d;
//			pos--;
//			d = 0;
//		}
//		for (; pos <= 1000; pos++) {
//			if (flag == false) {
//				if (ans[pos] == 0) {
//					flag = true;
//					continue;
//				}
//			}
//			cout << ans[pos];
//		}
//	}
//	else if (length_b != 0) {
//		while (length_b != 0) {
//			ans[pos] = b[length_b--] + d;
//			pos--;
//			d = 0;
//		}
//		for (; pos <= 1000; pos++) {
//			if (flag == false) {
//				if (ans[pos] == 0) {
//					flag = true;
//					continue;
//				}
//			}
//			cout << ans[pos];
//		}
//	}
//	else {
//		ans[pos] = d;
//		pos--;
//		d = 0;
//		for (; pos <= 1000; pos++) {
//			if (flag == false) {
//				if (ans[pos] == 0) {
//					flag = true;
//					continue;
//				}
//			}
//			cout << ans[pos];
//		}
//	}
//}