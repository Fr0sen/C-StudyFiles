//#include<iostream>
//#include <cstdio>
//#include "circle.h"
//#include "point.h"
//using namespace std;
////const int PI = 3.14;
////
//////���ַ���Ȩ��
//////public       ��Ա���ڿ��Է��ʣ�  ������Է���
//////protected    ��Ա���ڿ��Է��ʣ�  ���ⲻ���Է���   ���ӿ��Է��ʸ����еı���������
//////private	   ��Ա���ڿ��Է��ʣ�  ���ⲻ���Է���   ���Ӳ����Էø��׵�˽�����ݡ�
////
////class Person {
////public:
////	string m_Name;
////protected:
////	string m_Car;
////private:
////	int m_Password;
////
////public:
////	void func() {
////		m_Name = "����";
////		m_Car = "������";
////		m_Password = 123456;
////	}
////};
////
////class Circle {
////	//����Ȩ��
////	//����Ȩ��
////public:
////	//����
////	//�뾶
////	double m_r;
////
////	double calculate() {
////		return 2 * PI * m_r;
////	}
////	
////};
////
////class Stuent {
////public:
////	
////};
////
////class Cube {
////public:
////
////private:
////	 int m_L;
////	 int m_W;
////	 int m_H;
////
////};
//
//
//
///*
//class Point {
//public:
//	void setX(int x) {
//		m_X = x;
//	}
//
//	int getX() {
//		return m_X;
//	}
//	void setY(int y) {
//		m_Y = y;
//	}
//	int getY() {
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//
//
//};
//
//
//class Circle {
//public:
//	void setR(int r) {
//		m_R = r;
//	}
//	int getR() {
//		return m_R;
//	}
//
//	void setCenter(Point center) {
//		m_Center = center;
//	}
//
//	Point getCenter() {
//		return m_Center;	
//	}
//
//
//private:
//	int m_R;
//	Point m_Center;
//
//};
//*/
//
//void isInCircle(Circle& c, Point& p) {
//	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
//	(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//
//	int rDistance = c.getR() * c.getR();
//
//	if (distance == rDistance) {
//		cout << "����Բ��" << endl;
//	}
//	else if (distance > rDistance) {
//		cout << "����Բ��" << endl;
//	}
//	else cout << "����Բ��" << endl;
//}
//
//
//int main() {
//	Circle c;
//	c.setR(10);
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//
//	Point p;
//	p.setX(10);
//	p.setY(10);
//	isInCircle(c, p);
//	system("pause");
//
//	return 0;
//}