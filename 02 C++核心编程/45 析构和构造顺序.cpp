#include<iostream>
using namespace std;

//继承中的构造和析构顺序

class Base {
public:
	Base() {
		cout << "Base构造函数！" << endl;
	}
	~Base() {
		cout << "Base析构函数！" << endl;
	}
};

class Son :public Base {
public:
	Son() {
		cout << "Son构造函数！" << endl;
	}
	~Son() {
		cout << "Son析构函数！" << endl;
	}
};

void test01() {
	//Base b;
	
	//顺序如下
	//父类构造
	//子类构造
	//子类析构
	//父类构造
	Son s;
}


int main() {
	test01();

	system("pause");
	return 0;
}