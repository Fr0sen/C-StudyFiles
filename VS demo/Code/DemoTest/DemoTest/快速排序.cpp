//#include <iostream>
//using namespace std;
//#define N 99;
//
//void swap1(int arr[], int L, int R) {
//	int temp = arr[R];
//	arr[R] = arr[L];
//	arr[L] = temp;
//}
//
//
//int* partition(int arr[], int L, int R) {//������������   1 3 2 4 9 4
//	int less = L - 1;  //<�߽�
//	int more = R;      //>�߽�
//	while (L < more) {
//		if (arr[L] < arr[R]) {
//			swap1(arr, ++less, L++);
//		}
//		else if (arr[L]>arr[R]) {
//			swap1(arr, --more, L);
//		}
//		else L++;	
//	}
//	swap1(arr, more, R);//����ٰ�RԪ�ػ����м�λ��
//	int p[] = { less + 1,more };
//	return p;
//}
//
//void quickSort(int arr[], int L, int R) {
//	if (L < R) {
//		//cout << rand() * (R - L + 1);
//		swap1(arr, L + (rand()%(100)/(float)(100))* (R - L + 1), R);//���ѡ��һ�����������ұ�
//		int* p = partition(arr, L, R);//p�ǵ����������߽���ұ߽�
//		quickSort(arr, L, p[0] - 1);   //<��
//		quickSort(arr, p[0] - 1,R);    //>��
//	}
//}
//
//
//
//
//int main() {
//	int arr[5] = { 1,2,4,9,3 };
//	quickSort(arr,0,4);
//	cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];	
//}


//void QuickSort() {
//
//}
//
//void Partition() {
//	
//}
//
//int main() {
//
//}