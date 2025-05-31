#include<iostream>
using namespace std;

void ShowValue(const int &val) {
	//val = 1000;//const 函数体内不能修改数据 否则：修改了形参 实参也改了
	cout << "val = " << val << endl;
}

int main() {

	//常量引用
	//使用场景：用来修饰形参 防止误操作

	//int a = 10;
	//const int& ref = 10;//int temp=10; const int &ref=temp; 引用必须引用一块合法的内存空间
	//ref = 20;//加上const变为可读 不可修改

	int a = 100;
	ShowValue(a);
	cout << "a = " << a << endl;

	system("pause");
	return 0;
}