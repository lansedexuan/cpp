#include<iostream>
using namespace std;
int main() {
	//空指针
	//1 用于给指针变量初始化
	int* p = NULL;
	//2 空指针不可访问
	//0-255的内存编号是系统占用 不可访问
	//*P = 100;
	
	//野指针
	int* p1 = (int*)0x1100;//转换为指针类型
	//cout << *p1 << endl;

	//空指针和野指针都不是我们要访问的空间

	system("pause");
	return 0;
}