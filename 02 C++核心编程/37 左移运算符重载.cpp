#include<iostream>
using namespace std;

//左移运算符重载

class Person {
	friend ostream& operator<<(ostream& cout, Person p);
public:
	Person(int a, int b) {//构造函数
		m_A = a;
		m_B = b;
	}
private:
	//利用成员函数重载 左移运算符
	//不会利用成员函数重载<<运算符 因为无法实现cout在左侧

	int m_A;
	int m_B;
};

//利用全局函数重载左移运算符
ostream &operator<<(ostream &cout, Person p) //简化 cout<<p
{
	cout << "m_A=" << p.m_A << " m_B=" << p.m_B;//cout类型 ostream &
	return cout;//out或者cout: ostream &
}

void test01() {
	Person p(10,10);
	//p.m_A = 10;
	//p.m_B = 10;

	cout << p << endl;//链式编程
}

//总结 重载左移运算符配合友元可以实现输出自定义数据类型

int main() {
	test01();

	system("pause");
	return 0;
}