#include<iostream>
using namespace std;

//引用做函数的返回值
//1 不要返回局部变量的引用
int& test1() {
	int a = 10;//局部变量存放在栈区
	return a;
}
//2 函数的调用可以作为左值
int& test2() {
	static int a = 10;//静态变量 存放在全局区 全局区上的数据在程序结束后释放
	return a;
}

int main() {
	int& ref1 = test1();//错误  不要返回局部变量的引用
	cout << "ref1 = " << ref1 << endl;//第一次结果正确 因为编译器做了保留
	cout << "ref1 = " << ref1 << endl;//第二次结果错误 因为a的内存已经释放

	int& ref2 = test2();
	cout << "ref2 = " << ref2 <<  endl;
	cout << "ref2 = " << ref2 <<  endl;

	test2() = 1000;//若果函数的返回值是引用，这个函数调用可以作为左值（左值 等号左边）
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	system("pause");
	return 0;
}