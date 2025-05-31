#include<iostream>
using namespace std;

const double PI = 3.14;
//设计一个园类，求园的周长
//周长=2*pi*半径

//class代表设计一个类: class + 类名
class Circle {
	//0 访问权限： 公共权限
public:
	//1 属性： 半径
	int r;
	//2 行为： 获取园的周长
	double calculate() {
		return 2 * PI * r;
	}
};

int main() {
	//通过园类创建具体的园（对象）
	Circle c;//实例化： 通过一个类创建一个对象的过程
	//给园对象 的属性进行赋值
	c.r = 10;
	//62.8
	cout << "园的周长为：" << c.calculate() << endl;
	system("pause");
	return 0;
}