//#include <iostream>
//#include <cstdio>
//using namespace std;
//
//int merge(int arr[], int L, int mid, int R);
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
//int merge(int arr[], int L, int mid, int R) {
//	//int* help = new int[10];
//	int* help = new int[R - L + 1];
//	int length_help = R - L + 1;
//	int i = 0;
//	int p1 = L;
//	int p2 = mid + 1;
//	int res = 0;
//	while (p1 <= mid && p2 <= R) {
//		if (arr[p1] <= arr[p2])break;                              //这里做优化
//		else cout << arr[p1] << " " << arr[p2] << endl;            //这里做优化
//		help[i++] = arr[p1] <= arr[p2] ? arr[p1++] :  arr[p2++];
//	}
//	while (p1 <= mid) {
//		for (int j = mid +1; j <= R;j++) {							//这里做优化
//			if ((p1) == mid)break;
//			if (arr[p1 + 1] > arr[j])cout << arr[p1 + 1] << " " << arr[j] << endl;
//		}
//		help[i++] = arr[p1++];
//	}
//	while (p2 <= R) {
//		help[i++] = arr[p2++];
//	}
//	for (int i = 0; i < length_help; i++) {
//		arr[L + i] = help[i];
//	}
//	return res;
//}
//
//int main() {
//	int arr[] = { 9,6,1,4,79,2,3 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	process(arr, 0, length - 1);
//	for (int i = 0; i < length; i++) {
//		/*cout << arr[i] << " ";*/
//	}
//}
//
//
//
