////#include <cstdio> // -------------2002
////#include <cmath>
////using namespace std;
////
////int main() {
////	double X1, Y1, X2, Y2;
////	while (scanf("%lf %lf %lf %lf",&X1,&Y1,&X2,&Y2) != EOF) {
////		int x, y;
////		x = Y2 - Y1;
////		y = X2 - X1;
////	}
////}
//
////#include <cmath> //--------------------2003
////#include <cstdio>
////#include <iostream>
////using namespace std;
////
////int main() {
////	double a, ans;
////	cin >> a;
////	ans = fabs(a);
////	cout << ans;
////}
//
////#include <cmath> //--------------------2005
////#include <cstdio>
////#include <iostream>
////using namespace std;
////
////bool isoddyear(int year) {
////	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
////		return true;
////	}
////	else return false;
////}
////
////int montharr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
////int oddmontharr[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
////int main() {
////	while (1) {
////		int year, month, day, ans = 0;
////		char c;
////		cin >> year >> c >> month >> c >> day;
////		if (isoddyear(year)) {
////			for (int i = 1; i < month; i++) {
////				ans += oddmontharr[i];
////			}
////			ans += day;
////			cout << ans << endl;
////		}
////		else {
////			for (int i = 1; i < month; i++) {
////				ans += oddmontharr[i];
////			}
////			ans += day;
////			cout << ans << endl;
////		}
////	}
////}
//
//
// 
//
////
////#include <cstdio>
////#include <iostream>
////#include <cmath>
////
////using namespace std;
////
////int main() {
////	static double a, b;
////	cin >> a >> b;
////	cout << sqrt(a)<<endl;
////	cout<<pow(a, b);
////}
//
//////————————2017 字符串统计
////#include <cstdio>
////#include <iostream>
////#include <string>
////using namespace std;
////string s;
////
////
////int main() {
////	int n;
////	cin >> n;
////	for (int j = 0; j < n; j++) {
////		cin >> s;
////		int sum = 0;
////		for (int i = 0; i < s.length(); i++) {
////			if (isdigit(s[i])) {
////				sum++;
////			}
////		}
////		cout << sum;
////	}
////}
//// 
//// 
//////————————2018 母牛
////#include <cstdio>
////#include <iostream>
////#include <string>
////using namespace std;
////// 0 1 2 3
////// 1 0 0 1
////int main() {
////	while (1) {
////		int cows[4] = { 0,0,0,1 };
////		int n;
////		int sumcows = 0;
////		cin >> n;
////		if (n == 0)return 0;
////		else {
////			for (int i = 2; i <= n; i++) {
////				cows[3] += cows[2];
////				for (int j = 2; j > 0; j--) {
////					cows[j] = cows[j - 1];
////				}
////				cows[0] = cows[3];
////			}
////			for (int i = 0; i <= 3; i++) {
////				sumcows += cows[i];
////			}
////			cout << sumcows << endl;
////		}
////	}
////}
////
////#include <iostream>  //绝对值abs
////#include <cmath>
////#include <string>
////#include <cstdio>
////#include <algorithm>
////using namespace std;
////int a[10001];
////
////bool cmp(int a, int b) {
////	return a > b;
////}
////
////int main() {
////	int N;
////	while (1) {
////		cin >> N;
////		if (!N) {
////			return 0;
////		}
////		else {
////			for (int i = 0; i < N; i++) {
////				cin >> a[i];
////				a[i] = abs(a[i]);
////			}
////			sort(a, a + N, cmp);
////			for (int i = 0; i < N; i++) {
////				cout << " " << a[i] << endl;
////			}
////		}
////	}
////}
//
//#include <iostream>
//#include <string>
//#include <cstdio>
//using namespace std;
//
//int main() {
//	int N;
//	cin >> N;
//	getchar();
//	for (int i = 0; i < N; i++) {
//		string s;
//		getline(cin, s);
//		bool b = true;
//		if (isdigit(s[0])) {
//			cout << "no" << endl;
//			b = false;
//		}
//		else {
//			for (int i = 1; i < s.size(); i++) {
//				if (s[i] == ' ') {
//					cout << "no" << endl;
//					b = false;
//					break;
//				}
//			}
//		}
//		if (b == true)cout << "yes" << endl;
//	}
//}
//————————————2035 A^B
//#include <iostream>
//#include <cstdio>
//#include <string>
//using namespace std;
//
//int main() {
//	while (1) {
//		long long int a, b;
//		cin >> a >> b;
//		if (a == 0 && b == 0) {
//			long long int num = a;
//			for (int i = 1; i < b; i++) {
//				num = a * num;
//				num %= 1000;
//			}
//			cout << num % 1000 << endl;
//		}
//		else return 0;
//	}
//}
//
//#include <iostream> //-----------1037  做不出来DP
//#include <cstdio>
//#include <cmath>
//using namespace std;
//
//int main() {
//	int x[3], y[3], n;
//	double sum;
//	while (cin >> n, n) {
//		cin >> x >> y;
//	}
//}
//
//#include <cstdio>  //相邻格子不能同色，首尾格子也不能同色。
//#include <iostream>
//using namespace std;
//
//int main() {
//	int N, ans = 1;
//	while (1) {
//		cin >> N;
//		for (int i = 0; i < N; i++) {
//			if (i == 0) {
//				ans *= 3;
//			}
//			else {
//				ans *= 2;
//			}
//		}
//		cout << ans << endl;
//		ans = 1;
//	}
//}
//
//#include <iostream>  //x--2047
//#include <cstdio>
//#include <string>
//using namespace std;
//int d[41] = { 0,3,8 };
//
//int main() {
//	for (int i = 3; i < 41; i++) {
//		d[i] = d[i - 1] * 3 - 1;
//	}
//	while (1) {
//		int N;
//		cin >> N;
//		cout << d[N];
//	}
//}

//#include <cstdio>
//#include <iostream>
//using namespace std;
//
//int main() {
//	int c;
//	cin >> c;
//	while (c) {
//		double n;
//		cin >> n;
//		double ans;
//		ans = (n - 1) / n;
//		n--;
//		while (n >1) {
//			ans *= (n - 1) / n;
//		}
//		cout << ans << endl;
//		c--;
//	}
//}

//
//
//#include <iostream>    //2进制转化
//#include <string>
//#include <cstdio>
//using namespace std;
//
//int main() {
//	while (1) {
//		int n;
//		cin >> n;
//		bool flag = false;
//		int t = 512;
//		while (t != 1) {
//			if (flag == false) {
//				if (n / t == 1) {
//					cout << "1";
//					n -= t;
//					flag = true;
//				}
//				t /= 2;
//			}
//			else {
//				if (n / t == 1) {
//					cout << "1";
//					n -= t;
//				}
//				else {
//					cout << '0';
//				}
//				t /= 2;
//			}
//		}
//		cout << n % 2 << endl;
//	}
//}
//
//#include <iostream>
//#include <cstdio>
//#include <string>
//using namespace std;
//int dp[36];
//
//int main() {
//	dp[1] = 2;
//	dp[2] = 2 + dp[1] * 3;
//	for (int i = 3; i < 36; i++) {
//		dp[i] = 2 + dp[i - 1] * 3;
//	}
//	while (1) {
//		int ans;
//		cin >> ans;
//		cout << dp[ans] << endl;
//	}
//}

//#include <iostream> //
//#include <cstdio>
//using namespace std;
//
//int main() {
//	while (1) {
//		int hex_1 = 0, hex_2 = 0, hex_3 = 0, hex_4 = 0;
//		int twelve_1 = 0, twelve_2 = 0, twelve_3 = 0, twelve_4 = 0;
//		int qian = 0, bai = 0, shi = 0, ge = 0;
//		int sum = 0;
//		int ans = 0;
//		int N;
//		cin >> N;
//		if (N == 0) {
//			return 0;
//		}
//		else {
//			qian = N / 1000;
//			bai = N % 1000 / 100;
//			shi = N % 100 / 10;
//			ge = N % 10;
//			sum = qian + bai + shi + ge;
//			hex_1 = N / (16 * 16 * 16);
//			hex_2 = (N % (16 * 16 * 16)) / (16 * 16);
//			hex_3 = (N % (16 * 16)) / (16);
//			hex_4 = (N % 16);
//			ans = hex_1 + hex_2 + hex_3 + hex_4;
//			if (ans != sum) {
//				cout << N << " is not a Sky Number." << endl;
//				continue;
//			}
//			else {
//				twelve_1 = N / (12 * 12 * 12);
//				twelve_2 = (N % (12 * 12 * 12)) / (12*12);
//				twelve_3 = (N % (12 * 12)) / 12;
//				twelve_4 = N % 12;
//				ans = twelve_1 + twelve_2 + twelve_3 + twelve_4;
//				if (ans != sum) {
//					cout << N << " is not a Sky Number." << endl;
//					continue;
//				}
//				else {
//					cout << N << " is a Sky Number." << endl;
//				}
//			}
//		}
//	}
//}
// 
//#include <cstdio> ----------19年朋友圈
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//int N;
//vector<int> v_friend[101];
//int bro[101];
//
//int main() {
//	for (int i = 0; i < 101; i++) {
//		bro[i] = 1;
//	}
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			int temp = 0;
//			cin >> temp;
//			if (temp == 1&&j!=i) {
//				if (bro[i] != 0) {
//					v_friend[i].emplace_back(j);
//				}
//				if (v_friend[j].size() == 0) {
//					bro[j] = 0;
//				}
//			}
//		}
//	}
//	int sum = 0;
//	for (int i = 0; i < N; i++) {
//		if (bro[i] != 0)sum++;
//	}
//	cout << sum;
//}
//
//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <string>
//using namespace std;
//vector<string> w;
//int main()
//{
//	string s;
//	char c;
//	int answer = 0;
//	while ((c = getchar())!='#') {
//		if (c == '\n') {
//			cout << answer;
//			answer = 0;
//			vector<string> w;
//		}
//		while (c != ' '&&c!='\n') {
//			s += c;
//			c = getchar();
//		}
//		int i = 0;
//		for (; i < w.size(); i++) {
//			if (s == w[i]) {
//				i = w.size() + 2;
//			}
//		}
//		if (i == w.size() + 2) {
//			break;
//		}
//		else {
//			answer++;
//		}
//	}
//}


////---------------------汉诺塔四！！！
//#include <cstdio>
//#include <iostream>
//using namespace std;
//
//int main(){
//	int tower3[21],tower4[21];
//	tower3[1] = 1;
//	tower3[2] = 4;
//	for (int i = 3; i < 21; i++) {
//		tower3[i] = tower3[i - 1] *3 + 1;
//	}
//	tower4[1] = 2;
//	tower4[2] = tower3[1] * 2 + 2;
//	for (int i = 3; i < 21; i++) {
//		tower4[i] = tower3[i - 1] * 2 + 2;
//	}
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int temp;
//		cin >> temp;
//		cout << tower4[temp]<<endl;
//	}
//}
// 
// 
//--------------今年暑假不AC
//#include <stdio.h>
//#include <stdlib.h>
//#include <cstdio>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//struct c
//{
//    int x;
//    int y;
//    int ord;
//}d[100];
//
//int cmp(const struct c* a, const struct c* b)
//{
//    if ((*a).x == (*b).x)
//        return (*a).y - (*b).y;
//    else
//        return (*a).x - (*b).x;
//}
//
//int main(void)
//{
//    int i, j, n, max;
//
//    while (scanf("%d", &n), n)
//    {
//        for (max = i = 0; i < n; i++)
//        {
//            scanf("%d%d", &d[i].x, &d[i].y);
//            d[i].ord = 1;
//        }
//        sort(d, d + n, cmp);
//        d[n - 1].ord = 1;
//        for (i = n - 2; i >= 0; i--)
//        {
//            for (j = i + 1; j < n; j++)
//            {
//                if (d[i].y <= d[j].x && d[i].ord < d[j].ord + 1)
//                    d[i].ord = d[j].ord + 1;
//            }
//            if (max < d[i].ord)
//                max = d[i].ord;
//        }
//        printf("%d\n", max);
//    }
//
//    return 0;
//}

//数塔
// 
// 
//#include <iostream>
//#include <string>
//#include <cstdio>
//using namespace std;
//static int dp[101][101];
//
//
//int main() {
//	int NUM;
//	int level;
//	cin >> NUM >> level;
//	for (int i = 1; i <= level; i++) {
//		for (int j = 1; j <= level; j++) {
//			dp[i][j] = -1;
//		}
//	}
//	for (int i = 1; i <= level; i++) {
//		for (int j = 1; j <= i; j++) {
//			cin >> dp[i][j];
//		}
//	}
//	for (int i = level; i >= 1; i--) {
//		for (int j = i; j >= 1; j--) {
//			if (i != level) {
//				if (dp[i + 1][j] > dp[i + 1][j + 1]) {
//					dp[i][j] += dp[i + 1][j];
//				}
//				else {
//					dp[i][j] += dp[i + 1][j + 1];
//				}
//			}
//		}
//	}
//	cout << dp[1][1];
//}
