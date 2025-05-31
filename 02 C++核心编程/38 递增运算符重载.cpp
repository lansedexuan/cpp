#include<iostream>
using namespace std;

//递增运算符重载

//自定义整形
class MyInteger {
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger() {
		m_Num = 0;
	}
	//重载前置++运算符
	MyInteger &operator++() {//返回引用 为了一直对一个数据进行操作
		//先进行++运算
		m_Num++;
		//再返回自身
		return *this;//this指向自身 *this把自身解引用 把自身返回
	}
	//重载后置++运算符
	//int 代表占位参数 可以用于区分前置和后置
	MyInteger operator++(int) {//返回值不返回引用 局部变量当前函数执行完后被释放 后面为非法操作
		//先 记录当时结果
		MyInteger temp = *this;
		//后 递增
		m_Num++;
		//最后 将记录结果做返回
		return temp;
	}
private:
	int m_Num;
};

//利用全局函数重载左移运算符
ostream& operator<<(ostream& cout, MyInteger myint) //简化 cout<<p
{
	cout << myint.m_Num;//cout类型 ostream &
	return cout;//out或者cout: ostream &
}

void test01() {
	MyInteger myint;

	cout << ++myint << endl;//左移运算符重载
	cout << myint << endl;
}

void test02() {
	MyInteger myint;

	cout << myint++ << endl;
	cout << myint << endl;
}

//前置递增返回引用 后置递增返回值

int main() {
	//test01();
	test02();

	system("pause");
	return 0;
}