/*
	pair<type,type>p(value1,value2);
	pair<type,type>p = make_pair(value1,value2);
*/

#include<iostream>
using namespace std;

void test01() {
	pair<string, int>p("Tom", 20);

	//��һ�ַ�ʽ
	cout << "������" << p.first << " ���䣺" << p.second << endl;

	//�ڶ��ַ�ʽ
	pair<string, int>p2 = make_pair("Jerry", 30);
	cout << "������" << p2.first << " ���䣺" << p2.second << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}