#include<iostream>
using namespace std;
//���ñ���Ҫ��ʼ�� int &b ����
//��ʼ���󲻿ɸ��� int &b = a; b = c ����
//�������� &���� = ԭ�� 
//����ͬһ����ַ

int main() {
	int a = 10;
	int& b = a;
	int c = 20;
	b = c;//��ֵ���� ���Ǹ�������
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;

	system("pause");
	return 0;
}