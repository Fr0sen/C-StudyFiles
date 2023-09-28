//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//void merge(int arr[], int L, int mid, int R);
//
//
//void process(int arr[], int L, int R) {
//	if (L == R) {
//		return;
//	}
//	int mid = L + ((R - L) >> 1);
//	process(arr, L, mid);
//	process(arr, mid + 1, R);
//	merge(arr, L, mid, R);
//}
//
//void merge(int arr[], int L, int mid, int R) {
//	int* help = new int[R - L + 1];
//	int length_help = R - L + 1;
//	int i = 0;
//	int p1 = L;
//	int p2 = mid + 1;
//	while (p1 <= mid && p2 <= R) {
//		help[i++] = arr[p1] <= arr[p2] ? arr[p1++] : arr[p2++];
//	}
//	while (p1 <= mid) {
//		help[i++] = arr[p1++];
//	}
//	while (p2 <= R) {
//		help[i++] = arr[p2++];
//	}
//	for (int i = 0; i < length_help; i++) {
//		arr[L + i] = help[i];
//	}
//}
//
//int main() { 
//	int arr[] = { 1,2,9,6,1,4,8,2,5 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	process(arr, 0, length - 1);
//	for (int i = 0; i < length;i++) {
//		cout << arr[i] << " ";
//	}
//}