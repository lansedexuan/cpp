#include<iostream>
using namespace std;

//引用本质 指针常量

void func(int& ref) {
	ref = 100;
}

int main() {
	int a = 10;
	int& ref = a;//自动转换为 int* const ref = &a; 指针常量是指针指向不可改，也说明为什么引用不可更改
	ref = 20;//内部发现ref是引用，自动转换为 *ref=20

	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;

	func(a);
	cout << "ref:" << ref << endl;

	system("pause");
	return 0;
}