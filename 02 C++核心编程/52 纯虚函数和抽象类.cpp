#include<iostream>
using namespace std;

//纯虚函数和抽象类
class Base {
public:
	//纯虚函数
	//只要有一个纯虚函数 这个类称为抽象类
	//抽象类特点
	//1 无法实例化对象
	//2 抽象类的子类必须要重写父类中的纯虚函数
	virtual void func() = 0;
};

class Son :public Base {
public:
	virtual void func() {
		cout << "func调用" << endl;
	};
};

void test01() {
	//Base b;//抽象类无法实例化对象
	//new Base;//抽象类无法实例化对象
	Son s;
	Base* base = new Son;//多态
	base->func();
}

int main() {
	test01();

	system("pause");
	return 0;
}