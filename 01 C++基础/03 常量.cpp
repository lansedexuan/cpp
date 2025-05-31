#include<iostream>
using namespace std;

//常量的定义方式
//1 define 宏常量
//2 const修饰的变量

#define Days 7//1

int main() {
	cout << "一周共有：" << Days << "天" << endl;//1
	const int month = 12;//2
	cout << "一年共有：" << month << "月" << endl;//2
	system("pause");
	return 0;
}