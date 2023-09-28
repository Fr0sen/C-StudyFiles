////#include <cstdio>
////#include <iostream>
////#include <cctype>
////#include <string>
////#include <algorithm>
////using namespace std;
////
////int A[200001];
////
////bool cmp(int a,int b) {
////	return a < b;
////}
////
////int main() {
////	int i = 2,N1,N2;
////	int j = 0;
////	cin >> N1;
////	for (; j < N1; j++) {
////		cin >> A[j];
////	}
////	cin >> N2;
////	for (; j < N1+N2; j++) {
////		cin >> A[j];
////	}
////	sort(A, A + N1 + N2, cmp);
////	if (N1 + N2 != 0) printf("%d", A[(N1 + N2) / 2]);
////}
////
//
//
//
////方法2:满分
//
////#include <cstdio>
////#include <iostream>
////#include <vector>
////#include <algorithm>
////using namespace std;
////
////int main() {
////	vector<int >v;
////	int i, j, k;
////	cin >> j;
////	while (j--) {
////		scanf("%d", &i);
////		v.emplace_back(i);
////	}
////	cin >> j;
////	while (j--) {
////		scanf("%d", &i);
////		v.emplace_back(i);
////	}
////	sort(v.begin(), v.end());
////	cout << v[(v.size() - 1) / 2];
////}
//
////方法3:归并排序
//
//#include <cstdio>
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int a[200000], b[200000], c[400000];
//	int i, j1, j2, k;
//	cin >> j1;
//	for (i = 0; i < j1;i++) {
//		scanf("%d", a+i);
//	}
//	cin >> j2;
//	for (i = 0; i < j2;i++) {
//		scanf("%d", b + i);
//	}
//	
//	int i1, i2;
//	for (i1 = i2 = i = 0; i1 < j1 && i2 < j2;) {
//		if (a[i1] < b[i2])c[i++] = a[i1++];
//		else c[i++] = b[i2++];
//	}
//	while (i1 < j1)c[i++] = a[i1++];
//	while (i2 < j2)c[i++] = b[i2++];
//	cout << c[(j1 + j2 - 1) / 2];
//}