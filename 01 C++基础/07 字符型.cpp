#include<iostream>
using namespace std;
int main() {
	//1 �ַ��ͱ�������
	char ch = 'a';
	cout << ch << endl;

	//2 �ַ��ͱ�����ռ�ڴ��С
	cout <<"�ַ��ͱ�����ռ�ڴ��С��" << sizeof(ch) << endl;

	//3 �ַ��ͱ�����������
	//char ch2="b"��//������
	//char ch2='abc';//������ֻ����һ���ַ�
	
	//4 �ַ��ͱ�����ӦASCII��
	//a-97
	//A-65
	cout <<"a��Ӧ��ASCII�룺" << (int)ch << endl;
	system("pause");
	return 0;
}