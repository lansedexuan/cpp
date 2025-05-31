#include<iostream>
using namespace std;

//函数重载的注意事项

//1 引用作为重载的条件
void func1(int &a)//int &a=10; 不合法
{
	cout << "func(int &a)的调用" << endl;
}

void func1(const int& a)//const int &a =10; 
{
	cout << "func(const  int &a)的调用" << endl;
}


//2 函数重载遇到默认参数 函数重载不要加默认参数
void func2(int a,int b=10)
{
	cout << "func2(int a,int b)的调用" << endl;
}

void func2(int a)
{
	cout << "func2(int a)的调用" << endl;
}

//函数的返回值不可以作为函数重载的条件 比如一个void一个int 

int main() {
	//void func1(int &a)
	//int a = 10;
	//func1(a);

	//void func1(const int& a)
	//func1(10);

	//func2(10);//当函数重载遇到默认参数，出现二义性，报错，应避免
	func2(10,20);

	system("pause");
	return 0;
}