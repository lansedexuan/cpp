#include<iostream>
using namespace std;
int main() {
	//1 前置递增
	int a = 10;
	++a;
	cout << "a = " << a << endl;
	//2 后置递增
	int b = 10;
	b++;
	cout << "b = " << b << endl;
	//3 区别
	//前置递增 先让变量+1 后进行表达式运算
	int a1 = 10;
	int b1 = ++a1 * 10;
	cout << "a1 = " << a1 << endl;
	cout << "b1 = " << b1 << endl;

	//后置递增 先进行表达式运算 后让变量+1
	int a2 = 10;
	int b2 = a2++ * 10;
	cout << "a1 = " << a2 << endl;
	cout << "b1 = " << b2 << endl;

	system("pause");
	return 0;
}