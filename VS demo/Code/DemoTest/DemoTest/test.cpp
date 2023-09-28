//#include <iostream>
//using namespace std;
//
//void swapInt(int& a, int& b) {
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////交换两个浮点型的函数
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
//template<class T1>  //模板类
//void mySwap2(T1& a, T1& b) {
//	T1 temp = a;
//	a = b;
//	b = temp;
//}
//
////模板必须要确定出T的数据类型才可以使用
//template <class k>
//void func() {
//	cout << "func调用" << endl;
//}
//void test02() {
//	func<int> ();//必须要随便写一个类型才可以使用方法
//}
//
//
//
////通用数组排序
////规则 从大到小 选择排序
//
//template <class T>
//void mySort(T t[],int len) {
//	for (int i = 0; i < len; i++) { //每次在后面的位置找一个最小的放在前面的位置，然后前面的下标后移
//		int max = i;
//		for (int j = i + 1; j < len; j++) {
//			//认定的最大值比遍历出的数值要小，说明j下标的元素才是真正的最大值
//			if (t[max] < t[j]) {
//				max = j;
//			}
//		}
//		if (max != i) {
//			//交换max和i的元素
//			swap(t[max], t[i]);
//		}
//	}
//}
//
////提供一个打印数组的模板
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
//	////两种方式使用
//	////1. 自动类型推导
//	//long a=2, b=1;
//	//mySwap(a, b);
//	////2.显示指定类型
//	//mySwap<long>(a, b);  //尖括号代表T
//
//	test03();	
//}