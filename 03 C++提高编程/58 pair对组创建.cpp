/*
	pair<type,type>p(value1,value2);
	pair<type,type>p = make_pair(value1,value2);
*/

#include<iostream>
using namespace std;

void test01() {
	pair<string, int>p("Tom", 20);

	//第一种方式
	cout << "姓名：" << p.first << " 年龄：" << p.second << endl;

	//第二种方式
	pair<string, int>p2 = make_pair("Jerry", 30);
	cout << "姓名：" << p2.first << " 年龄：" << p2.second << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}