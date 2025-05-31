#include<iostream>
using namespace std;
//引用必须要初始化 int &b 错误
//初始化后不可更改 int &b = a; b = c 错误
//数据类型 &别名 = 原名 
//操作同一个地址

int main() {
	int a = 10;
	int& b = a;
	int c = 20;
	b = c;//赋值操作 不是更改引用
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;

	system("pause");
	return 0;
}