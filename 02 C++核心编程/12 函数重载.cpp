#include<iostream>
using namespace std;

//��������
//�����ú�������ͬ����߸�����

//�������ص���������
//1 ͬһ����������
//2 ����������ͬ
//3 �������� ���Ͳ�ͬ/������ͬ/˳��ͬ

void func()
{
	cout << "func�ĵ���" << endl;
}

void func(int a)
{
	cout << "func(int a)�ĵ���" << endl;
}

//�����ķ���ֵ��������Ϊ�������ص����� ����һ��voidһ��int 

int main() {

	//func();
	func(10);

	system("pause");
	return 0;
}