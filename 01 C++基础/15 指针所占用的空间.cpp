#include<iostream>
using namespace std;
int main() {
	int a = 10;

	//写法一
	//int* p;
	//p = &a;

	//写法二
	int* p = &a;

	//32位系统 4位
	//64位系统 8位
	cout << "sizeof p: " << sizeof(p) << endl;
	cout << "sizeof (int*): " << sizeof(int*) << endl;
	cout << "sizeof (float*): " << sizeof(float*) << endl;
	cout << "sizeof (double*): " << sizeof(double*) << endl;

	system("pause");
	return 0;
}