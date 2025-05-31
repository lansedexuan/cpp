#include<iostream>
using namespace std;

//栈区： 编译器自动释放，存放函数的参数值、局部变量
//栈区的数据有编译器管理开辟和释放
//不要返回局部变量的地址，由编译器自动释放

int* func() {
	int a = 10;//局部变量 存放在栈区 栈区数据函数执行后自动释放
	return &a;
}


int main() {
	int* p = func();//接受func函数的返回值
	cout << *p << endl;//32位系统会出问题
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	system("pause");
	return 0;
}