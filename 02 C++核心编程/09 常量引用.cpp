#include<iostream>
using namespace std;

void ShowValue(const int &val) {
	//val = 1000;//const �������ڲ����޸����� �����޸����β� ʵ��Ҳ����
	cout << "val = " << val << endl;
}

int main() {

	//��������
	//ʹ�ó��������������β� ��ֹ�����

	//int a = 10;
	//const int& ref = 10;//int temp=10; const int &ref=temp; ���ñ�������һ��Ϸ����ڴ�ռ�
	//ref = 20;//����const��Ϊ�ɶ� �����޸�

	int a = 100;
	ShowValue(a);
	cout << "a = " << a << endl;

	system("pause");
	return 0;
}