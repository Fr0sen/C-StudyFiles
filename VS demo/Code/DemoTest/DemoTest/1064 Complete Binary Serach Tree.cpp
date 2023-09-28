////#include <cstdio>
////#include <iostream>
////#include <string>
////#include <algorithm>
////using namespace std;
////int N;
////int node[1001] = {-1};
////int tree[1001] = {-1};
////int pos = 1;
////bool cmp(int a, int b) {
////	return a < b;
////}
////
////int findPar(int i) {
////	if (node[i / 2] != -1)return i / 2;
////	else return -1;
////}
////
////int findleft(int i) {
////	if (node[i * 2] != -1)return i * 2;
////	else return -1;
////}
////
////int findright(int i) {
////	if (node[i * 2 + 1] != -1)return i * 2 + 1;
////	else return -1;
////}
////
////void find(int i) {
////	if(findright(i))
////	if (findPar(i) != -1)tree[pos++] = node[findPar(i)];
////	
////}
////
////int main() {
////	cin >> N;
////	for (int i = 1; i <= N; i++) {
////		cin >> node[i];
////	}
////	sort(node + 1, node + N + 1, cmp);
////	int i = 1;
////	do{
////		i *= 2;
////	} while (i < N);
////	i /= 2;
////	tree[pos++] = node[i];//第一个结点
////
////	
////}
////
//
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <queue>
//using namespace std;
//
//int N;
//int a[1001];
//vector<int> inorder;
//vector<int> data1;
//void inordertraverse(int i) 
//{
//	if (i > N)return;
//	inordertraverse(i * 2);
//	inorder.emplace_back(i);
//	inordertraverse(i * 2 + 1); 
//}
//
//int main() {
//	int i, j, k;
//	cin >> N;
//	inordertraverse(1);
//	for (i = 0; i < N; i++) {
//		cin >> j;
//		data1.emplace_back(j);
//	}
//	sort(data1.begin(), data1.end());
//	for (i = 0; i < N; i++) {
//		a[inorder[i]] = data1[i];
//	}
//	queue<int >Q;
//	Q.push(1);
//	while (Q.size()) {
//		i = Q.front();
//		Q.pop();
//		if (i > 1)cout << ' ';
//		cout << a[i];
//		if (i * 2 <= N)Q.push(i*2);
//		if (i * 2 + 1 <= N)Q.push(i * 2 + 1);
//	}
//}