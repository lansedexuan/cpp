#include<iostream>
using namespace std;

//立方体类设计
//1 创建类
//2 设计属性
//3 设计行为 v s
//4 全局函数和成员函数 判断立方体是否相等

class Cube {
public:	
	//行为

	//设置长
	void setL(int l) {
		m_L = l;
	}
	//获取长
	int getL() {
		return m_L;
	}
	//设置宽
	void setW(int w) {
		m_W = w;
	}
	//获取宽
	int getW() {
		return m_W;
	}
	//设置高
	void setH(int h) {
		m_H = h;
	}
	//获取高
	int getH() {
		return m_H;
	}

	//获取立方体面积
	int calculateS() {
		return 2 * (m_L * m_W + m_W * m_H + m_L * m_H);
	}

	//获取立方体体积
	int calculateV() {
		return m_L * m_W * m_H;
	}

	//利用成员函数判断
	bool isSameByClass(Cube &c) {
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH()) {
			return true;
		}
		return false;
	}

private:
	//属性
	int m_L;
	int m_W;
	int m_H;
};

//利用全局函数判断 两个立方体是否相等
bool isSame(Cube &c1, Cube &c2) //用引用 不会再拷贝数据
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) {
		return true;
	}
	return false;
}

int main() {
	Cube c1;//创建对象
	c1.setL(10);
	c1.setW(10);
	c1.setH(11);

	cout << "c1的面积为：" << c1.calculateS() << endl;//600
	cout << "c1的体积为：" << c1.calculateV() << endl;//1000

	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);

	//利用全局函数
	bool ret = isSame(c1, c2);
	if (ret) {
		cout << "c1和c2是相等的" << endl;
	}
	else {
		cout << "c1和c2不相等" << endl;
	}
	
	//利用成员函数
	ret = c1.isSameByClass(c2);
	if (ret) {
		cout << "c1和c2是相等的" << endl;
	}
	else {
		cout << "c1和c2不相等" << endl;
	}

	system("pause");
	return 0;
}