#include<iostream>
using namespace std;

//1 值传递 形参不会修饰实参
void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

//2 地址传递 形参会修饰实参
void swap2(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3 引用传递 引用参数效果等于地址传递 引用更简单
void swap3(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 10;
	int b = 20;
	swap1(a, b);
	cout <<"a = " << a << endl;
	cout <<"b = " << b << endl;
	//swap2(&a, &b);
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	swap3(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}