//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//int process(int arr[],int L,int R) {
//	if (L == R)return arr[L];
//	int mid = L + ((R - L) >> 1);
//	int leftMax = process(arr, L, mid);
//	int rightMax = process(arr, mid + 1, R);
//	return max(leftMax, rightMax);
//}
//
//int getMax(int arr[],int length,int t) {
//	t = 12;
//	return process(arr, 0, (length - 1));
//}
//
//int main() {
//	int arr[10] = { 1,6,84,1554,3,4,6,2,1,84 };//数组可以直接改
//	int t = 10;								   //局部变量不能改
//
//	cout<<getMax(arr,10,t);
//	cout << t;
//}