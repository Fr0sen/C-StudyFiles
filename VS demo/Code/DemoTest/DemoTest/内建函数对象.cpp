//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//#include <functional>//�ڽ���������ͷ�ļ�
////negateһԪ�º��� ȡ���º���
//void test01() {
//	negate<int> n;
//	cout << n(50) << endl;
//}
//
//
////����Ķ��Ƕ�Ԫ�º��������ǲ���ֻ��Ҫһ��T
////plus ��Ԫ�º��� �ӷ�
////minus����
////multiplies
//void test02() {
//	plus<int>p;//Ĭ�϶���int��������
//	cout << p(10, 20) << endl;
//}
//
////��ϵ�º���
//
//void tets03() {
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(101);
//	v.push_back(101);
//	v.push_back(101);
//	v.push_back(101);
//	v.push_back(101);
//
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//	//sort(v.begin(), v.end(), MyCompare());//�����Ҫ�Լ�дһ����Ԫ�º���
//	sort(v.begin(), v.end(), greater<int>());//�������ṩ�ĺ�������ͷ�ļ���functional
//
//}
//
//void test04() {
//	vector<bool> v;
//	v.push_back(true);
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(true);
//	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//	//�����߼��� ������v���˵�v2�У���ִ��ȡ���Ĳ���
//	vector<bool>v2;
//	v2.resize(v.size()); //����Ҫ��resize��һ������ȻĿ������û�пռ�
//	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());//ԭ������㣬�յ㣬Ŀ�����㣬����
//}
//
//int main() {
//
//
//	system("pause");
//	return 0;
//}