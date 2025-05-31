#include<iostream>
using namespace std;
#include "circle.h"
#include "point.h"
//点和圆关系案例

////点类
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

////圆类
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
	//两点距离的平方
	int Distance=
	(c.getCenter().getX() - p.getX()) * (c.getCenter().getY() - p.getX()) +
	(c.getCenter().getY() - p.getX()) * (c.getCenter().getY() - p.getY());
	//计算半径的平方
	int rDistance = c.getR() * c.getR();

	if (Distance == rDistance) {
		cout << "点在圆上" << endl;
	}
	else if (Distance > rDistance) {
		cout << "点在圆外" << endl;
	}
	else{
		cout << "点在圆内" << endl;
	}
}

int main() {
	//创建圆
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);
	//创建点
	Point p;
	p.setX(10);
	p.setY(11);
	//判断关系
	isInCircel(c, p);

	system("pause");
	return 0;
}