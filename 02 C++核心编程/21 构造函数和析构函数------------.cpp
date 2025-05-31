#include<iostream>
using namespace std;

//对象的初始化和清理
//1 构造函数 初始化
class Person {
public:
	//构造函数
	//没有返回值
	//函数名 与类名相同
	//构造函数可以有参数，可以发生重载
	//创建对象时，构造函数会自动调用 调用一次
	Person() {
		cout << "Person 构造函数调用" << endl;
	}

	//2 析构函数 清理
	//没有返回值 不写void
	//函数名和类名相同 在名称前加~
	//析构函数不可以有参数，不可以发生重载
	//对象在销毁前 会自动调用析构函数 调用一次
	~Person() {
		cout << "Person 的析构调用" << endl;
	}
};

//构造和析构都必须有的实现，不提供的话编译器会提供空实现的构造和析构
void test01() {
	Person p;//创建对象 自动调用 //在栈上的数据 test01执行完后，释放这个对象
}

int main() {
	test01();
	Person p;

	system("pause");
	return 0;
}