//#include <cstdio>
//#include <iostream>
//#include <cctype>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int N, M;
//struct RichMan {
//	string name;
//	int age, money;
//};
//struct Query {
//	int people;
//	int low, high;
//	int left=0, right;
//};
//Query query[101];
//RichMan richMan[10001];
//
//bool cmpAge(RichMan a, RichMan b) {
//	return a.age < b.age;
//}
//bool cmpMoney(RichMan a, RichMan b) {
//	if (a.money != b.money)return a.money > b.money;
//	else return a.name < b.name;
//}
//vector<RichMan> ans[101];
//int main() {
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		cin >> richMan[i].name >> richMan[i].age >> richMan[i].money;
//	}
//	sort(richMan, richMan + N, cmpAge);
//	for (int i = 0; i < M; i++) {
//		cin >> query[i].people >> query[i].low >> query[i].high;
//		query[i].left = 0, query[i].right = N - 1;
//		for (int j = 0; j < N; j++) {
//			if (query[i].low <= richMan[j].age) {
//				query[i].left = j;
//				break;
//			}
//		}
//		for (int j = 0; j < N; j++) {
//			if (query[i].high <= richMan[j].age) {
//				query[i].right = j;
//				break;
//			}
//		}
//		if (query[i].left <= query[i].right) {
//			for (int t = query[i].left; t <= query[i].right; t++) {
//				if((query[i].low<=richMan[t].age)&&(richMan[t].age <= query[i].high))
//				ans[i].emplace_back(richMan[t]);
//			}
//		}
//		sort(ans[i].begin(), ans[i].end(), cmpMoney);
//	}
//	//�������
//	for (int i = 0; i < M; i++) {
//		cout << "Case #" << i + 1 << ":" << endl;
//		if (ans[i].size() == 0) {
//			cout << "None" << endl;
//		}
//		else {
//			int count = query[i].people;
//			for (int j = 0; j < ans[i].size(); j++) {
//				if (count == 0)break;
//				cout << ans[i][j].name << " " << ans[i][j].age << " " << ans[i][j].money << endl;
//				count--;
//			}
//		}
//	}
//	//������ˣ�ֱ����lows�����ֵ�����С�ˣ�ֱ����ǰһ�����high�����Ҫ���ж��Ƿ�lows��highһ������lows����high��ֱ��none
//
//
//
//	//С��
//	
//
//
//	//�ж��Ƿ�none
//
//
//
//	//�ҵ�����ֵ�ˣ�����������ڽ���sort��cmpmoney��
//		
//
//
//	//���money�Ӹߵ��͵�ǰ������
//
//}