#include<iostream>
using namespace std;
int main() {
	//1 ǰ�õ���
	int a = 10;
	++a;
	cout << "a = " << a << endl;
	//2 ���õ���
	int b = 10;
	b++;
	cout << "b = " << b << endl;
	//3 ����
	//ǰ�õ��� ���ñ���+1 ����б��ʽ����
	int a1 = 10;
	int b1 = ++a1 * 10;
	cout << "a1 = " << a1 << endl;
	cout << "b1 = " << b1 << endl;

	//���õ��� �Ƚ��б��ʽ���� ���ñ���+1
	int a2 = 10;
	int b2 = a2++ * 10;
	cout << "a1 = " << a2 << endl;
	cout << "b1 = " << b2 << endl;

	system("pause");
	return 0;
}