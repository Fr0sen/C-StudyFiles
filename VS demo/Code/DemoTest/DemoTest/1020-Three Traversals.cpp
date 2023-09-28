//#include <cstdio>
//#include <iostream>
//#include <queue>
//#include <stack>
////用指针吧
//using namespace std;
//int N;
//int postOrder[32], inOrder[32], levelOrder[32];   //左是/2，右是*2
//
//struct node {
//	node* left, * right;
//	int num;
//};
//node tree;
//
//void InOrder(int left,int right,node tree) {
//	for (int i = 0; i < right; i++) {
//		if (inOrder[i] == tree.num) {
//			
//		}
//	}
//}
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin>>postOrder[i];
//	}
//	for (int i = 0; i < N; i++) {
//		cin>>inOrder[i];
//	}
//	tree.num = postOrder[N - 1];
//	for (int i = 0; i < N - 1; i++) {
//		if (inOrder[i] == tree.num) {
//			tree.left = node t;
//		}
//	}
//	InOrder(0, N-1, tree);
//	for (int i = 0; i < N; i++) {
//		if (i == 0) {
//			printf("%d", levelOrder[i]);
//		}
//		else {
//			printf("% d", levelOrder[i]);
//		}
//	}
//}


//#include <iostream>
//
//using namespace std;
//
//struct node {
//	int value;
//	node* left, * right;
//};
//
//int N, Post[40], In[40];

//node* makenode(int h1,int t1,int h2,int t2)
//{  //返回值是根的指针
//	if (h1 > t1) return NULL;
//	node* p = new node;
//	p->value = Post[t1];
//	int index;
//	for (index = h2; In[index] != Post[t1]; index++);
//	p->left = makenode(h1, index - 1 - h2 + h1, h2, index - 1);
//	p->right = makenode(index - h2 + h1, t1 - 1, index + 1, t2);
//	return p; 
//}

//int main() 
//{
//	cin >> N;
//	int i, j, k;
//	for (i = 0; i < N; i++) 
//	{
//		cin >> Post[i];
//	}
	//for (i = 0; i < N; i++) 
	//{
	//	cin >> In[i];
	//}
	//node* root = makenode(0,N-1,0,N-1);
	//node* Queue[40];
	//int head = 0, tail = 0;
	//Queue[tail++] = root;
//	while (head < tail) {
//		if (head != 0) {
//			cout << ' ';
//		}
//		node* p = Queue[head++];
//		cout << p->value;
//		if (p->left)Queue[tail++] = p->left;
//		if (p->right)Queue[tail++] = p->right;
//	}
//
//}