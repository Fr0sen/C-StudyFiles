//#include <iostream>
//#include <string>
//#include <cstdio>
//using namespace std;
//
//int main() {
//	int N;
//	cin >> N;
//	long long A, B, C;
//	for (int i = 0; i < N; i++) {
//		//cin >> A >> B >> C;//cin���ջ����ʧ�ܣ�������Ҫ��scanf
//		scanf("%lld%lld%lld", &A, &B, &C);
//		long long sum = A + B;
//		bool signal;	
//		if (A > 0 && B > 0 && sum < 0)signal = true;//��������������һ��ΪA+B>C
//		else if (A < 0 && B < 0 && sum >= 0)signal = false;
//		else {
//			if (sum > C)signal = true;
//			else signal = false;
//		} 
//		if (signal == true)printf("Case #%d: true\n",i+1);
//		else printf("Case #%d: false\n",i+1);
//	}
//}