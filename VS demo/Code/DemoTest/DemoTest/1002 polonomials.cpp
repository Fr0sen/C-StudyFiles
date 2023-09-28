//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <cstdio>
//#include <vector>
//using namespace std;
//
//int main() {
//	int a, b,sum;
//	int length = 0;
//	scanf("%d%d",&a,&b); //-1,234,567
//	sum = a + b;
//	printf("%d\n", sum);
//	if (sum == 0) {
//		printf("0");
//	}
//	if (sum < 0) {
//		printf("-");
//		sum *= -1;
//	}
//	vector<int> array;
//	while (sum!=0) {
//		array.emplace_back(sum%10);
//		sum /= 10;
//		length++;
//	}
//	for (int i = array.size() - 1; i >= 0; i--) {
//		printf("%d", array[i]);
//		if (i>0&&i%3==0) {
//			printf(",");
//		}
//	}
//	return 0;
//}