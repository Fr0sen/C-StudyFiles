////#include <iostream>
////#include <cstdio>
////#include <string>
////#include <algorithm>
////#include <vector>
////#include <stack>
////using namespace std;
////int N, non_leaf_node, weight_number, sum = 0;
////vector<int> ans;//ÿ�η���ʱ��Ҫ��ջ������֮���ջ��������𰸵�ջ��
////
////struct Tree
////{
////	int weight, length;
////	vector<int> child;
////};
////Tree tree[101];
////stack<Tree> sta;
////
////void find(Tree curNode, int sum) {
////	sum += curNode.weight;
////	ans.emplace_back(curNode.weight);
////	//sta.push(tree[curNode]);
////	if (sum == weight_number) {
////		if (curNode.length == 0) {//��Ҷ�ڵ�
////			for (int i = 0; i < ans.size(); i++) {
////				if (i == 0)cout << ans[i];
////				else cout << " " << ans[i];
////			}
////		}
////		else {
////			ans.pop_back();
////			return;
////		}
////	}
////	else if(sum<weight_number) {
////		for(int i=0;i<curNode.length;i++){
////			find(tree[i], sum);
////		}
////	}
////	else {
////		ans.pop_back();
////		return;
////	}
////}
////
////bool cmp(int a, int b) {
////	return a > b;
////}
////
////int main() {
////	cin >> N >> non_leaf_node >> weight_number;
////	for (int i = 0; i < N; i++) {
////		cin >> tree[i].weight;
////	}
////	for (int i = 0; i < non_leaf_node; i++) {
////		int l;
////		cin >> l;
////		cin >> tree[l].length;
////		for (int j = 0; j < tree[l].length; j++) {
////			int id;
////			cin >> id;
////			tree[l].child.emplace_back(tree[id]);
////		}
////		sort(tree[l].child.begin(), tree[l].child.end(), cmp);
////	}
////	find(tree[0], sum);
////}
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//struct node
//{
//	int weight, num_of_children = 0;
//	vector<int >children;
//};
//
//int N, M, S;
//node n[100];
//vector<int> path;  //���Ե�ջ����
//vector<vector<int>> ans;  //��źܶ��.
//bool comp(int x, int y) {
//	return n[x].weight > n[y].weight;
//}
//
//void dfs(int cur, int curweight) {
//	//��ʱֹ��:����ͼ����ɻ�
//	path.emplace_back(n[cur].weight);
//	if (!n[cur].num_of_children) {//����Ҷ�ӽ��
//		if (curweight == S) {
//			ans.emplace_back(path);
//		}
//	}
//	else {
//		for (int each : n[cur].children) {
//			dfs(each, curweight + n[each].weight);
//		}
//	}
//	path.pop_back();
//}
//
//int main() {
//	int i, j, k;
//	cin >> N >> M >> S;
//	for (i = 0; i < N; i++)cin >> n[i].weight;
//	while (M--) {
//		cin >> i >> j;
//		n[i].num_of_children = j;
//		while(j--){
//			cin >> k;
//			n[i].children.emplace_back(k);
//		} 
//	}//��������
//	for (i = 0; i < N; i++){
//		if (n[i].num_of_children) {
//			sort(n[i].children.begin(), n[i].children.end(),comp);
//		}
//	}//����
//	dfs(0, n[0].weight);
//
//	for (i = 0; i < ans.size(); i++) {
//		for (j = 0; j < ans[i].size(); j++) {
//			if (j > 0)cout << ' ';
//			cout << ans[i][j];
//		}
//		cout << endl;
//	}
//}