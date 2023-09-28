//#include <cstdio>
//#include <iostream>
//#include <string>
//#include <cctype>
//#include <unordered_map> //哈希表
//#include <set>
//using namespace std;
//
//unordered_map<string, set<string>> MAP[6];
//
//int main() {
//	int N;
//	cin >> N;
//	getchar();
//	while (N--) {
//		string ID, title, author, key, publisher, year;
//		getline(cin, ID);
//		getline(cin, title);
//		MAP[1][title].insert(ID);   //MAP相当于数组，
//		getline(cin, author);
//		MAP[2][author].insert(ID);	
//		do {
//			cin >> key;
//			MAP[3][key].insert(ID);
//		} while (getchar() == ' ');//是空格就继续
//		getline(cin, publisher);
//		MAP[4][publisher].insert(ID);
//		getline(cin, year);
//		MAP[5][year].insert(ID);
//	}
//	int M;
//	cin >> M;
//	while (M--) {
//		int i;
//		string word;
//		cin >> i;
//		getchar();
//		getchar();
//		getline(cin, word);
//		cout << i << ':' << ' ' << word << endl;
//		if (MAP[i][word].size()) {            //对应的关键字存在
//			for (string each : MAP[i][word]) {
//				cout << each << endl;	
//			}
//		}
//		else {
//			cout << "Not Found\n";
//		}
//	}
//}
//
////
////struct BookStore {
////	int ID, publishedYear;
////	string title,auther,keywords,publisher;
////};
////
////struct Query {
////	string str;
////	int type, sum = 0;
////	string compare="";//3-(size()-1);
////	int a[10001];
////};
////
////BookStore lib[100001];
////Query query[1001],outputs[10000];
////int main() {
////	int N, M;
////	cin >> N;
////	for (int i = 0; i < N; i++) {
////		cin >> lib[i].ID;
////		getchar();
////		getline(cin, lib[i].title);
////		getline(cin, lib[i].auther);
////		getline(cin, lib[i].keywords);
////		getline(cin, lib[i].publisher);
////		cin >> lib[i].publishedYear;
////	}
////	cin >> M;
////	for (int i = 0; i < M; i++) {
////		if (i == 0)getchar();
////		getline(cin, query[i].str);
////		query[i].type = query[i].str[0] - '0';
////		for (int j = 3; j < query[i].str.size(); j++) {
////			query[i].compare += query[i].str[j];
////		}
////	}
////	//开始对比
////	for (int i = 0; i < M; i++) {
////		int sum = 0;
////		for (int j = 0; j < N; j++) {
////			switch (query[i].type)
////			{
////				case 1:if (query[i].compare == lib[j].title) query[i].a[query[i].sum++] = lib[j].ID;
////					break;
////				case 2:if (query[i].compare == lib[j].auther) query[i].a[query[i].sum++] = lib[j].ID;
////					break;
////				//case 3:if (query[i].compare == lib[j].keywords！！！) query[i].a[query[i].sum++] = lib[j].ID; //
////				//	break;
////				case 4:if (query[i].compare == lib[j].publisher) query[i].a[query[i].sum++] = lib[j].ID;
////					break;
////				/*case 5:if (query[i].compare == lib[j].publishedYear) query[i].a[query[i].sum++] = lib[j].ID;
////					break;*/
////				default:
////					break;
////			}
////		}
////	}
////	for (int i = 0; i < M; i++) {
////		cout << query[i].str << endl;
////		if (query[i].sum != 0) {
////			for (int j = 0; j < query[i].sum; j++) {
////				cout << query[i].a[j] << endl;
////			}
////		}
////		else {
////			cout << "Not Found" << endl;
////		}
////	}
////}