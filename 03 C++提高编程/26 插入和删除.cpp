#include<iostream>
using namespace std;

/*
*   起始下标从0开始
	string& insert(int pos,const char* s);//插入字符串
	string& insert(int pos,const string& s);	//插入字符串
	string& insert(int pos,int n,char c);//指定位置插入n个字符c
	string& erase(int pos,int n = npos);//删除从pos开始的n个字符
*/

void test01() {
	string str = "hello";
	str.insert(1, "111");
	cout << "str = " << str << endl;

	str.erase(1, 3);
	cout << "str = " << str << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}