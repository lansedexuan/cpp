#include<iostream>
using namespace std;

int main() {
	int a = 10;
	int b = 10;

	//1 const����ָ�� ����ָ��
	const int * p = &a;//ָ��ָ���ֵ�������޸ģ�ָ���ָ����Ը�
	//*p = 20;����
	p = &b;//��ȷ

	//2 const���γ���
	int * const p2 = &a;//ָ���ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը�
	*p2 = 100;
	//p2 = &b;����

	//3 const����ָ��ͳ���
	const int* const p3 = &a;//ָ���ָ�� �� ָ���ֵ �������Ը�
	//*p3 = 100;����
	//p3 = &b;����

	system("pause");
	return 0;
}