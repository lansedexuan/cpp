#include<iostream>
using namespace std;

//值传递
void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "swap1 a: " << a << endl;
	cout << "swap1 b: " << b << endl;
}


//地址传递
//a		0x0011 10
//b		0x0022 20
//指针a		   0x0011
//指针b		   0x0022
//temp		   10

//*a 解引用 将0x0011地址的值给temp
//将0x0022地址的值给0x0011地址的值
//将temp的值给0x0022地址的值
void swap2(int *a, int *b) {//把主函数的地址作为数据输入
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "swap1 a: " << *a << endl;
	cout << "swap1 b: " << *b << endl;
}

int main() {
	int a = 10;
	int b = 20;

	swap1(a, b);//值传递不会改变实参
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	swap2(&a, &b);//地址传递会改变实参 传入a和b的地址
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	system("pause");
	return 0;
}

