#include<iostream>
using namespace std;

//函数模板注意事项
template<typename T>//typename可以替换成class
void mySwap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

//1 自动类型推导 比心推导出一致的数据类型T才可以使用
void test01() {
	int a = 10;
	int b = 20;
	char c = 'c';

	//利用模板交换
	//1 自动类型推导
	mySwap(a, b);
	//mySwap(a, c);//错误 推导不出一致类型
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

//2 模板必须要确定T的类型 才可以使用
template<class T>
void func(){
	cout << "func调用" << endl;
}

void test02() {
	func<int>();//<>
}

int main() {
	test01();
	test02();

	system("pause");
	return 0;
}