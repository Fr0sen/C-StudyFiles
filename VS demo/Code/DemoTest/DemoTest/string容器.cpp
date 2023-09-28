//#include <string>
//#include <iostream>
//using namespace std;
//
//void test01() {
//
//	string s6 = "sad";
//	string s1;//默认构造
//	char a[] = "sdfa";
//	const char* str = "adsf";//字符串其实就是const char*类型的string常量
//	
//	
//	string s2(a);
//	cout << "s2 = " << s2 << endl;
//
//	string s3(s2);
//	cout << "s3 = " << s3 << endl;
//
//	string s4(10, 'a');
//	cout << "s4 = " << s4 << endl;
//
//
//}
//
//void test03() {//append
//	string str1 = "我";
//	str1 += "爱玩游戏";
//	cout << "str1:" << str1 << endl;
//	str1 += ":";
//
//	string str2 = "你也是";
//	str1 += str2;
//
//	string str3 = "I";
//	str3.append("Play Games",6,2);
//
//}
//
//
//void test02() {
//	string str1;
//	str1 = "hello world";
//	cout << str1 << endl;
//	
//	string str2 = str1;
//	
//	string str3;
//	str3 = 'a';
//
//	string str4;
//	str4.assign("hello C++");
//	cout << "str4 = " << str4;
//
//	string str5;
//	str5.assign("hello C++",5);//把前n个赋值过来
//	cout << "str4的前5个字符str5 = " << str5;
//
//	string str6;
//	str6.assign(str5);
//	cout << "str6 = " << str6;
//
//	string str7;
//	str7.assign(10, 'w');
//	cout << "str7 = " << str7;
//}
//
//void test05() {//1.查找
//	string str1 = "abcdefg";
//	int pos = str1.find("de");
//	if (pos == -1) {
//		cout << "未找到字符串" << endl;
//	}
//	else cout << "pos = " << pos << endl;//返回是第一次出现的位置
//
//
//	//rfind 和find 的区别
//	//rfind是从右往左查找 find是从左往右查
//	pos = str1.rfind("de");
//	cout << "pos = " << pos << endl;
//
//}
//
//void test06() { //替换
//	string str1 = "abcdefg";
//	string str2 = "sad";
//	str1.replace(1, 3, "1111");
//	cout << "str1 = " << str1 << endl;
//	if (str1.compare(str2) == 0) {
//		cout << "str1 等于str2 " << endl;
//	}
//	else if (str1.compare(str2) > 0) {
//		cout << "str1 大于str" << endl;
//	}
//	else cout << "1小于2";
//
//}
//
//
//void test07() {
//	string str = "hello";
//	cout << "str = " << str << endl;
//	//通过[]访问单个字符
//	for (int i = 0; i < str.size(); i++) {
//		cout << str[i] << " ";
//	}
//	cout << endl;
//	 
//	//通过at方式访问单个字符
//	for (int i = 0; i < str.size(); i++) {
//		cout << str.at(i) << " ";
//	}
//	cout << endl;
//}
//
//void test08()//插入和删除
//{
//	string str = "hello";
//	str.insert(1, "111");
//	cout << "str = " << str << endl;
//	str.erase(1, 3);//从一起删除三个
//}
//
//void test09()//返回从pos开始的n个字符组成的字符串
//{
//	string str = "zhangsan@sina.com";
//	string SubStr = str.substr(1, 3);
//	cout << "SubStr = " << SubStr << endl;
//	
//	string name = str.substr(0,str.find("@"));
//	cout << "name: " << name << endl;
//}
//
//int main() {
//	test05();
//	test09();
//}