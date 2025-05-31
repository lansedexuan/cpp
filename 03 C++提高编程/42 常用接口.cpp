#include<iostream>
using namespace std;
#include<stack>

//构造函数：
//stack<T>stk; //默认构造
//stack(const stack& stk); //拷贝构造函数

//赋值
//stack& operator=(const stack& stk); //重载=

//数据存取
//push(elem); //栈顶添加元素
//pop(); //栈顶移除第一个元素
//top(); //返回栈顶元素

//大小操作
//empty(); //判空
//size(); //返回栈的大小

void test01() {
	stack<int>s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	//只有栈不为空 查看栈顶 并且出栈
	while (!s.empty()) {
		cout << "栈顶元素：" << s.top() << endl;
		s.pop();
	}
	cout << "栈的大小：" << s.size() << endl;
	
}

int main() {
	test01();

	system("pause");
	return 0;
}