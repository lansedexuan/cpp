/*
	重载函数调用操作符的类 其对象称为函数对象
	仿函数：函数对象 使用()时 行为类似函数调用 
*/

//函数对象(仿函数)是一个类 不是一个函数


#include<iostream>
using namespace std;

//1 函数对象使用时 可以像普通函数那样调用 可以有参数和返回值
class MyAdd {
public:
	int operator()(int v1, int v2) {
		return v1 + v2;
	}
};

void test01() {
	MyAdd myadd;//函数对象
	cout<<myadd(10, 10)<<endl;
}

//2 函数对象超出普通函数的概念 函数对象可以有自己的状态
class MyPrint {
public:
	MyPrint() {
		this->count = 0;
	}
	void operator()(string test) {
		cout << test << endl;
		this->count++;
	}

	int count;//内部自己状态
};

void test02() {
	MyPrint myprint;
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");

	cout << "myprint调用次数为：" << myprint.count << endl;
}

//3 函数对象可以作为参数传递
void doPrint(MyPrint& mp, string test) {
	mp(test);//1给2 2给3
}

void test03() {
	MyPrint myprint;
	doPrint(myprint, "hello C++");
}


int main() {
	test01();
	test02();
	test03();

	system("pause");
	return 0;
}