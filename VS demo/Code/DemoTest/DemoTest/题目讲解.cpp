//#include <iostream>
//#include <cstdio>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int method(vector<int> a, int k) {
//	int length = (int)a.size(); //����Ѱ�����鳤��
//	int count = 0; //���ڼ����ܹ��ҵ����ٸ���ĿҪ�������
//	for (int i = 0; i < length; i++) {
//		for (int j = i + 1; j < length+1; j++) {
//			vector<int> b;
//			b.assign(a.begin()+i, a.begin()+j);
//			sort(a.begin(),a.end());//����
//			int m = (int)b.size();
//			if (m % 2 == 0) {   //�����ж��Ƿ�
//				if (b[m / 2 - 1] == k) {
//					count++;
//				}
//			}
//			else {
//				if(b[m/2]==k){
//					count++;
//				}
//			}
//		}
//	}
//	return count;
//}
//
//int main() {
//	vector<int> nums = {2,3,1};
//	int k = 3;
//	cout << method(nums, k);
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
///*for (int s = 0; s < b.size(); s++) {
//				cout << b[s] << " ";
//			}*/