//#include <iostream>
//using namespace std;
//
//void swapInt(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////�������������͵ĺ���
//void swapDouble(double& a, double& b) {
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
//template<typename T2>
//void mySwap(T2& a, T2& b) {
//	T2 temp = a;
//	a = b;
//	b = temp;
//}
//
//
//template<class T1>  //ģ����
//void mySwap2(T1& a, T1& b) {
//	T1 temp = a;
//	a = b;
//	b = temp;
//}
//
////ģ�����Ҫȷ����T���������Ͳſ���ʹ��
//template <class k>
//void func() {
//	cout << "func����" << endl;
//}
//void test02() {
//	func<int> ();//����Ҫ���дһ�����Ͳſ���ʹ�÷���
//}
//
//
//
////ͨ����������
////���� �Ӵ�С ѡ������
//
//template <class T>
//void mySort(T t[],int len) {
//	for (int i = 0; i < len; i++) { //ÿ���ں����λ����һ����С�ķ���ǰ���λ�ã�Ȼ��ǰ����±����
//		int max = i;
//		for (int j = i + 1; j < len; j++) {
//			//�϶������ֵ�ȱ���������ֵҪС��˵��j�±��Ԫ�ز������������ֵ
//			if (t[max] < t[j]) {
//				max = j;
//			}
//		}
//		if (max != i) {
//			//����max��i��Ԫ��
//			swap(t[max], t[i]);
//		}
//	}
//}
//
////�ṩһ����ӡ�����ģ��
//template<class T>
//void printArray(T arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//void test03() {
//	char a[] = "asdfsav";
//	mySort(a, sizeof(a));
//	printArray(a, sizeof(a));
//}
//
//
//
//int main() {
//	////���ַ�ʽʹ��
//	////1. �Զ������Ƶ�
//	//long a=2, b=1;
//	//mySwap(a, b);
//	////2.��ʾָ������
//	//mySwap<long>(a, b);  //�����Ŵ���T
//
//	test03();	
//}