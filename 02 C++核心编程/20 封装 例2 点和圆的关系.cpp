#include<iostream>
using namespace std;
#include "circle.h"
#include "point.h"
//���Բ��ϵ����

////����
//class Point {
//public:
//	void setX(int x) {
//		m_X = x;
//	}
//	int getX() {
//		return m_X;
//	}
//	void setY(int y) {
//		m_Y = y;
//	}
//	int getY() {
//		return m_Y;
//	}
//
//private:
//	int m_X;
//	int m_Y;
//};

////Բ��
//class Circle {
//public:
//	void setR(int r) {
//		m_R = r;
//	}
//	int getR() {
//		return m_R;
//	}
//	void setCenter(Point center) {
//		m_Center = center;
//	}
//	Point getCenter() {
//		return m_Center;
//	}
//private:
//	int m_R;
//	Point m_Center;
//};

void isInCircel(Circle &c,Point &p) {
	//��������ƽ��
	int Distance=
	(c.getCenter().getX() - p.getX()) * (c.getCenter().getY() - p.getX()) +
	(c.getCenter().getY() - p.getX()) * (c.getCenter().getY() - p.getY());
	//����뾶��ƽ��
	int rDistance = c.getR() * c.getR();

	if (Distance == rDistance) {
		cout << "����Բ��" << endl;
	}
	else if (Distance > rDistance) {
		cout << "����Բ��" << endl;
	}
	else{
		cout << "����Բ��" << endl;
	}
}

int main() {
	//����Բ
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);
	//������
	Point p;
	p.setX(10);
	p.setY(11);
	//�жϹ�ϵ
	isInCircel(c, p);

	system("pause");
	return 0;
}