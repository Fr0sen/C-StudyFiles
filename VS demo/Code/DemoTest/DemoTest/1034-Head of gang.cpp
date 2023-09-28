////#include <cstdio>
////#include <iostream>
////#include <string>
////#include <map>
////#include <algorithm>
//////这题其实用map应该很好做
////
////using namespace std;
////int total_gang = 0;
////int N, K;
////struct Gang
////{
////	string name;
////	double total_minute = 0;
////	int gang_id = -1;
////};
////
////Gang gang[2001];
////int length = 0;
////int gangs_id=0;
////
////int find(string name, double time,int id) {
////	bool flag = false;
////	for (int i = 0; i < length;i++) {  //有
////		if (gang[i].name == name) {
////			flag = true;
////			gang[i].total_minute += time;
////			return i;
////		}
////	}
////	if (flag == false) {    //没有
////		gang[length].name = name;
////		gang[length].total_minute += time;
////		gang[length].gang_id = id;
////		length++;
////		return length-1;
////	}
////}
////
////struct lll
////{
////	int people;
////	string gangStar;
////};
////
////bool cmp(Gang a, Gang b) {
////	return a.gang_id < b.gang_id;
////}
////int main() {
////	cin >> N >> K;
////	for (int i = 0; i < N; i++) {
////		string name1, name2;
////		double time;
////		cin >> name1 >> name2 >> time;
////		int pos1, pos2;
////		pos1=find(name1, time,i);//name1||name2
////		pos2=find(name2, time,i);//name1||name2
////		//如果没有找到，则往gang数组里加入这个人
////		//如果找到了，则给这个人加时间
////		if (gang[pos1].gang_id != gang[pos2].gang_id) {
////			if (gang[pos1].gang_id < gang[pos2].gang_id) {
////				gang[pos2].gang_id = gang[pos1].gang_id;
////			}
////			if (gang[pos1].gang_id > gang[pos2].gang_id) {
////				gang[pos1].gang_id = gang[pos2].gang_id;
////			}
////		}
////		//每次都要建立1和2的映射;
////	}
////	//输入完成
////
////	sort(gang, gang + length, cmp);
////	int sumGangs = 0;
////	int count = 0;
////	lll gangsID[1000];
////	for (int i = 0; i < length; i++) {
////		if (i == 0 && gang[i].gang_id != -1) {
////			gangsID[count].people++;
////		}
////		if (gang[i].gang_id == gang[i - 1].gang_id) {
////			gangsID[count].people++;
////		}
////		if (gang[i].gang_id > gang[i - 1].gang_id) {
////			if (gangsID[count].people > 2) {
////				sumGangs++;
////				count++;
////			}
////			sumGangs++;
////			count = 0;
////		}
////	}
////	printf("%d", sumGangs);
////}
//
//#include <iostream>
//#include <unordered_map>
//using namespace std;
//
//int N, K;
//unordered_map<string, int>M1;
//unordered_map<string, int>M2;
//
//int main() {
//	int i, j, k, l;
//	cin >> N >> K;
//	for (i = 0; i < N; i++) {
//		string s1, s2;
//		cin >> s1 >> s2 >> l;
//		if (M1.count(s1)) {
//			j = M1[s1];
//		}
//		else {
//			M1[s1]=
//		}
//	}
//}