#include<iostream>
using namespace std;

//�����������ķ���ֵ
//1 ��Ҫ���ؾֲ�����������
int& test1() {
	int a = 10;//�ֲ����������ջ��
	return a;
}
//2 �����ĵ��ÿ�����Ϊ��ֵ
int& test2() {
	static int a = 10;//��̬���� �����ȫ���� ȫ�����ϵ������ڳ���������ͷ�
	return a;
}

int main() {
	int& ref1 = test1();//����  ��Ҫ���ؾֲ�����������
	cout << "ref1 = " << ref1 << endl;//��һ�ν����ȷ ��Ϊ���������˱���
	cout << "ref1 = " << ref1 << endl;//�ڶ��ν������ ��Ϊa���ڴ��Ѿ��ͷ�

	int& ref2 = test2();
	cout << "ref2 = " << ref2 <<  endl;
	cout << "ref2 = " << ref2 <<  endl;

	test2() = 1000;//���������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ����ֵ �Ⱥ���ߣ�
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	system("pause");
	return 0;
}