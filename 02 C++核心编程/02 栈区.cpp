#include<iostream>
using namespace std;

//ջ���� �������Զ��ͷţ���ź����Ĳ���ֵ���ֲ�����
//ջ���������б����������ٺ��ͷ�
//��Ҫ���ؾֲ������ĵ�ַ���ɱ������Զ��ͷ�

int* func() {
	int a = 10;//�ֲ����� �����ջ�� ջ�����ݺ���ִ�к��Զ��ͷ�
	return &a;
}


int main() {
	int* p = func();//����func�����ķ���ֵ
	cout << *p << endl;//32λϵͳ�������
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	system("pause");
	return 0;
}