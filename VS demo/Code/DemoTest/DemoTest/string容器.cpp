//#include <string>
//#include <iostream>
//using namespace std;
//
//void test01() {
//
//	string s6 = "sad";
//	string s1;//Ĭ�Ϲ���
//	char a[] = "sdfa";
//	const char* str = "adsf";//�ַ�����ʵ����const char*���͵�string����
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
//	string str1 = "��";
//	str1 += "������Ϸ";
//	cout << "str1:" << str1 << endl;
//	str1 += ":";
//
//	string str2 = "��Ҳ��";
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
//	str5.assign("hello C++",5);//��ǰn����ֵ����
//	cout << "str4��ǰ5���ַ�str5 = " << str5;
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
//void test05() {//1.����
//	string str1 = "abcdefg";
//	int pos = str1.find("de");
//	if (pos == -1) {
//		cout << "δ�ҵ��ַ���" << endl;
//	}
//	else cout << "pos = " << pos << endl;//�����ǵ�һ�γ��ֵ�λ��
//
//
//	//rfind ��find ������
//	//rfind�Ǵ���������� find�Ǵ������Ҳ�
//	pos = str1.rfind("de");
//	cout << "pos = " << pos << endl;
//
//}
//
//void test06() { //�滻
//	string str1 = "abcdefg";
//	string str2 = "sad";
//	str1.replace(1, 3, "1111");
//	cout << "str1 = " << str1 << endl;
//	if (str1.compare(str2) == 0) {
//		cout << "str1 ����str2 " << endl;
//	}
//	else if (str1.compare(str2) > 0) {
//		cout << "str1 ����str" << endl;
//	}
//	else cout << "1С��2";
//
//}
//
//
//void test07() {
//	string str = "hello";
//	cout << "str = " << str << endl;
//	//ͨ��[]���ʵ����ַ�
//	for (int i = 0; i < str.size(); i++) {
//		cout << str[i] << " ";
//	}
//	cout << endl;
//	 
//	//ͨ��at��ʽ���ʵ����ַ�
//	for (int i = 0; i < str.size(); i++) {
//		cout << str.at(i) << " ";
//	}
//	cout << endl;
//}
//
//void test08()//�����ɾ��
//{
//	string str = "hello";
//	str.insert(1, "111");
//	cout << "str = " << str << endl;
//	str.erase(1, 3);//��һ��ɾ������
//}
//
//void test09()//���ش�pos��ʼ��n���ַ���ɵ��ַ���
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