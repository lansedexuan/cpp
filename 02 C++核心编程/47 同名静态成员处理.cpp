#include<iostream>
using namespace std;

//继承中同名静态成员处理

class Base {
public:
	static int m_A;
	static void func() {
		cout << "Base - static void func()" << endl;
	}
	static void func(int a) {
		cout << "Base - func(int a)调用" << endl;
	}
};
int Base::m_A = 100;

class Son :public Base {
public:
	static int m_A;
	static void func() {
		cout << "Son - static void func()" << endl;
	}
};
int Son::m_A = 200;

//同名静态成员函数
void test01() {
	//1 通过对象访问
	cout << "通过对象访问" << endl;
	Son s;
	cout << "Son下 m_A = " << s.m_A << endl;
	cout << "Base下 m_A = " << s.Base::m_A << endl;
	//2 通过类名访问
	cout << "通过类名访问" << endl;
	cout << "Son下 m_A = " << Son::m_A << endl;
	//第一个：：代表通过类名方式访问 第二个：：代表访问父类作用域下
	cout << "Base下 m_A = " << Son::Base::m_A << endl;
}

void test02() {
	Son s;

	//1 通过对象访问
	cout << "通过对象访问" << endl;
	s.func();
	s.Base::func();

	//2 通过类名访问
	cout << "通过类名访问" << endl;
	Son::func();
	Son::Base::func();

	//s.func(100);//如果字类中出现和父类同名的成员函数 子类的同名成员会隐藏掉父类中所有同名成员
	s.Base::func(100);
}

int main() {
	//test01();
	test02();

	system("pause");
	return 0;
}