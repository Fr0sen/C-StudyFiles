////ÿ��һ��������һ��������Ϊpush
////ÿ��push���ؿ�����û�������������ǲ���push
////ÿ��pop��	������û�������������ǲ���push
//
//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//#include <stack>
//#include <vector>
//using namespace std;
//
//struct node {
//	int key;
//	node* left, *right;
//};
//int N;
//vector<int> v;
//void makenode(node*& root) {
//	string s;
//	int i;
//	cin>> i;//push�ַ���һ���Ѿ���������,ֱ�ӽ���push��������
//	root = new node;
//	root->key = i;
//	cin >> s;
//	if (s == "Push") {
//		makenode(root->left);
//	}
//	else root->left = NULL;
//	s = "";
//	cin >> s;
//	if (s == "Push") {
//		makenode(root->right);
//	}
//	else root->right = NULL;
//}
//
//void postordertraversal(node* root) {
//	if (root == NULL)return;
//	postordertraversal(root->left);
//	postordertraversal(root->right);
//	v.emplace_back(root->key);
//}
//
//int main() {
//	int i, j, k;
//	cin >> i;
//	node* tree = NULL;
//	string s;
//	cin >> s;
//	makenode(tree);
//
//	postordertraversal(tree);
//
//	for (i = 0; i < v.size(); i++) {
//		if (i)cout << ' ';
//		cout << v[i];
//	}
//}