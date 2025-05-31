#include<iostream>
using namespace std;
int main() {
	//用于表示一些不能显示出来的ASCII字符
	
	//换行 \n
	cout << "hello world\n";
	//反斜杠 \\ 
	cout << "\\" << endl;
	//水平制表符 \t
	cout << "aa\thello world" << endl;//一共占用8个
	cout << "aaa\thello world" << endl;
	cout << "aaaaa\thello world" << endl;
	system("pause");
	return 0;
}