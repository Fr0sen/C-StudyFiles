//#include <cstdio>
//#include <iostream>
//using namespace std;
//string input;
//
//int main() {
//	cin >> input;
//	string num = "";
//	int point, index = 0;
//	int exponent = 0;
//	if (input[0] == '-') {
//		cout << '-';
//	}
//	int positiveindex;
//	for (int i = 1; i < input.size(); i++) {  //9-3    i-3
//		if (input[i] == '-')index = -i, positiveindex = i;
//		if (input[i] == '+')index = i, positiveindex = i;
//		if (input[i] == '.')point = i;
//	}
//	for (int i = 1; i < positiveindex - 1; i++) { 
//		if (i != point)num += input[i];  //123400
//	}
//	for (int i = positiveindex + 1; i < input.size(); i++) {
//		exponent *= 10;
//		exponent += input[i] - '0';
//	}
//	if (index < 0) {
//		cout << "0.";
//		for (int i = 0; i < exponent - 1; i++) {
//			cout << "0";
//		}
//		cout << num;
//	}
//	else {
//		cout << num;
//		for (int i = 0; i <exponent - num.size() + 1; i++) {
//			cout << "0";
//		}
//	}
//}