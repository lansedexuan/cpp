#pragma once//防止头文件重复包含
#include<iostream>
using namespace std;
#include "point.h"
//20
//圆类
class Circle {
public:
	void setR(int r);
	int getR();
	void setCenter(Point center);
	Point getCenter();

private:
	int m_R;
	Point m_Center;
};