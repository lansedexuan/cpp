#include<iostream>
using namespace std;

//�������ص�ע������

//1 ������Ϊ���ص�����
void func1(int &a)//int &a=10; ���Ϸ�
{
	cout << "func(int &a)�ĵ���" << endl;
}

void func1(const int& a)//const int &a =10; 
{
	cout << "func(const  int &a)�ĵ���" << endl;
}


//2 ������������Ĭ�ϲ��� �������ز�Ҫ��Ĭ�ϲ���
void func2(int a,int b=10)
{
	cout << "func2(int a,int b)�ĵ���" << endl;
}

void func2(int a)
{
	cout << "func2(int a)�ĵ���" << endl;
}

//�����ķ���ֵ��������Ϊ�������ص����� ����һ��voidһ��int 

int main() {
	//void func1(int &a)
	//int a = 10;
	//func1(a);

	//void func1(const int& a)
	//func1(10);

	//func2(10);//��������������Ĭ�ϲ��������ֶ����ԣ�����Ӧ����
	func2(10,20);

	system("pause");
	return 0;
}