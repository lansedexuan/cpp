#include<iostream>
using namespace std;

//����Ĭ�ϲ���
//�﷨������ֵ���� ������ ���β�=Ĭ��ֵ��{}
int func(int a, int b=20, int c=30) {//Ĭ��ֵ
	return a + b + c;
}

//1 ���ĳ��λ���Ѿ�����Ĭ�ϲ����������λ�ú󣬴����Ҷ�������Ĭ��ֵ
/*
int func1(int a=10,int b,int c){
	return a+b+c;
}
*/

//2 �������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ��� ������ʵ��ֻ��һ����Ĭ�ϲ���
/*
int fun2(int a=10,int b=10)

int fun2(int a,int b){
	return a+b;
}
*/

int main() {

	cout << func(10,30) << endl;

	system("pause");
	return 0;
}