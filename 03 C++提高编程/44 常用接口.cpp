#include<iostream>
using namespace std;
#include<queue>

//构造函数：
//queue<T>que; //默认构造
//queue(const queue& que); //拷贝构造函数

//赋值
//queue& operator=(const queue& que); //重载=

//数据存取
//push(elem); //栈顶添加元素
//pop(); //移除队头第一个元素
//back(); //返回最后一个元素
//front(); //返回第一个元素

//大小操作
//empty(); //判空
//size(); //返回栈的大小

class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

void test01() {
	queue<Person>q;
	Person p1("唐僧", 30);
	Person p2("孙悟空", 1000);
	Person p3("猪八戒", 900);
	Person p4("沙僧", 800);

	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	cout << "队列大小：" << q.size() << endl;
	while (!q.empty()) {
		cout << "队头 姓名：" << q.front().m_Name << " 年龄：" << q.front().m_Age << endl;		
		cout << "队尾 姓名：" << q.back().m_Name << " 年龄：" << q.back().m_Age << endl;
		cout << endl;
		q.pop();
	}
	cout << "队列大小：" << q.size() << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}