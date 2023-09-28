//#include <string>
//#include <iostream>
//using namespace std;
//
//string weekdays[7] = { "MON","TUE","WED","THU","FRI","SAT","SUN" };
//
//int main() {
//	string s1, s2, s3, s4;
//	cin >> s1 >> s2 >> s3 >> s4;
//	int i, j, k;
//
//	int day;
//	for (i = 0;; i++) {
//		if (s1[i] >= 'A' && s1[i] <= 'G' && s1[i] == s2[i])break;
//	}
//	day = s1[i] - 'A';//0-6分别表示周一到周七。
//	int hour;
//	for (j = i + 1;; j++) {
//		if ((isdigit(s1[j])||(s1[j]>='A'&&s1[j]<='N'))&&s1[j] == s2[j])break;
//	}
//	if (isdigit(s1[j]))hour = s1[j] - '0';
//	else hour = s1[j] - 'A' + 10;
//
//	int minute;
//	for (i = 0;; i++) {//因为一定能找到
//		if (isalpha(s3[i]) && s3[i] == s4[i])break;
//	}
//	minute = i;
//	cout << weekdays[day];
//	printf(" %02d:%02d", hour, minute);
//}