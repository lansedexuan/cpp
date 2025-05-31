#include<iostream>
using namespace std;

//1 ֵ���� �ββ�������ʵ��
void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

//2 ��ַ���� �βλ�����ʵ��
void swap2(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

//3 ���ô��� ���ò���Ч�����ڵ�ַ���� ���ø���
void swap3(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 10;
	int b = 20;
	swap1(a, b);
	cout <<"a = " << a << endl;
	cout <<"b = " << b << endl;
	//swap2(&a, &b);
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;
	swap3(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}