#include<iostream>
using namespace std;

//ֵ����
void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "swap1 a: " << a << endl;
	cout << "swap1 b: " << b << endl;
}


//��ַ����
//a		0x0011 10
//b		0x0022 20
//ָ��a		   0x0011
//ָ��b		   0x0022
//temp		   10

//*a ������ ��0x0011��ַ��ֵ��temp
//��0x0022��ַ��ֵ��0x0011��ַ��ֵ
//��temp��ֵ��0x0022��ַ��ֵ
void swap2(int *a, int *b) {//���������ĵ�ַ��Ϊ��������
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "swap1 a: " << *a << endl;
	cout << "swap1 b: " << *b << endl;
}

int main() {
	int a = 10;
	int b = 20;

	swap1(a, b);//ֵ���ݲ���ı�ʵ��
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	swap2(&a, &b);//��ַ���ݻ�ı�ʵ�� ����a��b�ĵ�ַ
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	system("pause");
	return 0;
}

