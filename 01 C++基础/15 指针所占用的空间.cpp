#include<iostream>
using namespace std;
int main() {
	int a = 10;

	//д��һ
	//int* p;
	//p = &a;

	//д����
	int* p = &a;

	//32λϵͳ 4λ
	//64λϵͳ 8λ
	cout << "sizeof p: " << sizeof(p) << endl;
	cout << "sizeof (int*): " << sizeof(int*) << endl;
	cout << "sizeof (float*): " << sizeof(float*) << endl;
	cout << "sizeof (double*): " << sizeof(double*) << endl;

	system("pause");
	return 0;
}