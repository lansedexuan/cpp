#include<iostream>
using namespace std;

//函数模板

//交换整形的函数
void swapInt(int &a,int &b) {
	int temp = a;
	a = b;
	b = temp;
}

//交换浮点型的函数
void swapDouble(double& a, double& b) {
	double temp = a;
	a = b;
	b = temp;
}

//函数模板
template<typename T>//声明一个模板 告诉编译器后面代码中的T不要报错 T是一个通用类型
void mySwap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

void test01() {
	//int a = 10;
	//int b = 20;
	//swapInt(a, b);
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;

	//double c = 1.1;
	//double d = 2.2;
	//swapDouble(c, d);
	//cout << "c = " << c << endl;
	//cout << "d = " << d << endl;

	int a = 10;
	int b = 20;

	//利用模板交换
	//1 自动类型推导
	mySwap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//2 显示指定类型
	mySwap<int>(a, b);//<int>
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}