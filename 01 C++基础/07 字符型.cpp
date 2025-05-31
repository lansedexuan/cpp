#include<iostream>
using namespace std;
int main() {
	//1 字符型变量创建
	char ch = 'a';
	cout << ch << endl;

	//2 字符型变量所占内存大小
	cout <<"字符型变量所占内存大小：" << sizeof(ch) << endl;

	//3 字符型变量常见错误
	//char ch2="b"；//单引号
	//char ch2='abc';//单引号只能有一个字符
	
	//4 字符型变量对应ASCII码
	//a-97
	//A-65
	cout <<"a对应的ASCII码：" << (int)ch << endl;
	system("pause");
	return 0;
}