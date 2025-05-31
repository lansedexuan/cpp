#include<iostream>
using namespace std;
int main() {
	//bool 1字节 
	//非0值都为真 flag=1
	bool flag = true;
	cout << flag << endl;
	flag =false;
	cout << flag << endl;
	cout << "布尔类型所占空间：" << sizeof(bool) << endl;
	system("pause");
	return 0;
}