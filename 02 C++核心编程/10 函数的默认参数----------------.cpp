#include<iostream>
using namespace std;

//函数默认参数
//语法：返回值类型 函数名 （形参=默认值）{}
int func(int a, int b=20, int c=30) {//默认值
	return a + b + c;
}

//1 如果某个位置已经有了默认参数，从这个位置后，从左到右都必须有默认值
/*
int func1(int a=10,int b,int c){
	return a+b+c;
}
*/

//2 如果函数声明有默认参数，函数实现就不能有默认参数 声明和实现只能一个有默认参数
/*
int fun2(int a=10,int b=10)

int fun2(int a,int b){
	return a+b;
}
*/

int main() {

	cout << func(10,30) << endl;

	system("pause");
	return 0;
}