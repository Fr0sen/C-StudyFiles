////#include<cstdio>
////#include<iostream>
////#include<string>
////#include <stack>
////using namespace std;
////int N, a[1000];
////
////struct tree {
////	int key;
////	tree *left, *right;
////};
////stack<tree*> sta;
////
////void makeTree(int pos) {
////	if (pos == N)return;
////	else {
////		tree* p = new tree;
////		p->key = a[pos];
////		//sta.push(p);
////		tree* top = sta.top();
////		if (p->key <= top->key) {
////			sta.top()->left = p;
////			sta.push(p);
////			makeTree(++pos);
////		}
////		else {
////			tree* top = new tree;
////			while (!sta.empty()) {
////				if (p->key > sta.top()->key) {
////					top = sta.top();
////					sta.pop();
////				}
////				else {
////					top = sta.top();
////					sta.pop();
////					break;
////				}
////			}
////			top->right = p;
////			sta.push(p);
////			makeTree(++pos);
////		}
////	}
////}
////
////int main() {
////	cin >> N;
////	for (int i = 0; i < N; i++) {
////		cin >> a[i];
////	}
////	tree* p = new tree;
////	p->key = a[0];
////	sta.push(p);
////	makeTree(1);
////}
//
//#include<cstdio>
//#include<iostream>
//#include<string>
//#include <stack>
//#include <vector>
//using namespace std;
//int N, a[1000];
//int used;
//
//struct node {
//	int data;
//	node * left, * right;
//};
//
//vector<int> post;
//void postordertraverse(node* root) {
//	if (!root)return;
//	postordertraverse(root->left);
//	postordertraverse(root->right);
//	post.emplace_back(root->data);
//}
//
//node* makeBST(int cursor,int ceil,int floor) {
//	node* p = new node;
//	used++;
//	p->data = a[cursor];
//	int i;
//	for (i = cursor + 1; i < N && a[i] >= floor && a[i] < a[cursor]; i++);
//	if (i == cursor + 1)p->left = NULL;
//	else p->left = makeBST(cursor + 1, a[cursor],floor);
//	if (i < N && a[i] >= a[cursor] && a[i] < ceil)p->right = makeBST(i, ceil, a[cursor]);
//	else p->right = NULL;
//	return p;
//}
//
//
//node* makeMBST(int cursor, int ceil, int floor) {
//	node* p = new node;
//	used++;
//	p->data = a[cursor];
//	int i;
//	for (i = cursor + 1; i < N && a[i] <ceil && a[i] >= a[cursor]; i++);
//	if (i == cursor + 1)p->left = NULL;
//	else p->left = makeMBST(cursor + 1, ceil, a[cursor]);
//	if (i < N && a[i] <a[cursor] && a[i] >=floor)p->right = makeMBST(i, a[cursor], floor);
//	else p->right = NULL;
//	return p;
//}
//
//
//int main() {
//	int i, j, k;
//	cin >> N;
//	for (i = 0; i < N; i++)cin >> a[i];
//	used = 0;
//	node * root=makeBST(0, 1000000000, -1000000000);
//	if (used == N) {
//		cout << "YES" << endl;
//		postordertraverse(root);
//		for (i = 0; i < post.size(); i++) {
//			if (i)cout << ' ';
//			cout << post[i];
//		}
//	}
//	else {
//		used = 0;
//		root = makeMBST(0, 1000000000, -1000000000);
//		if (used == N) {
//			cout << "YES" << endl;
//			postordertraverse(root);
//			for (i = 0; i < post.size(); i++) {
//				if (i)cout << ' ';
//				cout << post[i];
//			}
//		}
//		else cout << "NO";
//		return 0;
//	}
//}