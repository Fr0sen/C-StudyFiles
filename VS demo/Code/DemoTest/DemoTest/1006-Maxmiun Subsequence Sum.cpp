//#define _CRT_SECURE_NO_WARNINGS 1
//#include <cstdio>
//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <cctype>
//#include <vector>
//
//using namespace std;
//vector<int> v;
//int array1[10000] = { 0 };
//
//struct P {
//	int sum;
//	int left;
//	int right;
//};
//
//P Find(int gap) {
//	int max=0,sum=0,k=gap;
//	P p;
//	for (int i = 0; i+k <= v.size(); i++) {
//		int j = i;
//		while (gap) {
//			sum += array1[j];
//			j++;
//			gap--;
//		}
//		if (sum > max) {
//			max = sum;
//			p.sum = max;
//			p.left = i;
//			p.right = j;
//		}
//		gap = k;
//		sum = 0;
//	}
//	return p;
//}
//
//int main() {
//	int K,a,max=0,maxleft,maxright;
//	bool flag=0;
//	P p,q;
//	int left, right, MaxSum, sum = 0;
//	cin >> K;
//	while (K--) {
//		cin >> a;
//		if (a >= 0) flag = 1;
//		v.emplace_back(a);
//	}
//	for (int i = 0; i < v.size(); i++) {
//		array1[i] = v[i];
//	}
//	if (flag == 0) {
//		cout <<"0 " << array1[0] << " " << array1[v.size() - 1];
//		return 0;
//	}
//	for (int i = 1; i <= v.size(); i++) {
//		q = Find(i);
//		sum = q.sum;
//		if (sum > max || i == 1) {
//			max = sum;
//			p.sum = max;
//			p.left = q.left;
//			p.right = q.right;
//		}
//	}
//	cout << p.sum <<" " << p.left <<" " << p.right;
//}