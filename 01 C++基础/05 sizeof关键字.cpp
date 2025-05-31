#include<iostream>
using namespace std;

int main() {
	//sizeof(数据类型 或者 变量)
	//short < int <= long <= long long
	cout << "short 类型所占内存空间为：" << sizeof(short) << endl;
	cout << "int 类型所占内存空间为：" << sizeof(int) << endl;
	cout << "long 类型所占内存空间为：" << sizeof(long) << endl;
	cout << "long long 类型所占内存空间为：" << sizeof(long long) << endl;
	system("pause");
	return 0;
}
