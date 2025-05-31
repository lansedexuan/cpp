#include<iostream>
using namespace std;

int* func() {
	//new 将数据开辟到堆区 返回数据的地址
	int* p = new int(10);
	return p;
}

int main() {
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	system("pause");
	return 0;
}