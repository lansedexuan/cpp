#include<iostream>
using namespace std;
int main() {
	//1 ������ float
	//2 ˫���� double
	//Ĭ������� ���һ��С������ʾ6λ��Ч����
	float f1 = 3.14f;//����f ˫���� ת��Ϊ ������
	cout << "f1 = " << f1 << endl;
	double d1 = 3.14;
	cout << "d1 = " << d1 << endl;
	cout << "floatռ���ڴ�ռ�Ϊ��" << sizeof(f1) << endl;//4�ֽ�
	cout << "doubleռ���ڴ�ռ�Ϊ��" << sizeof(d1) << endl;//8�ֽ�
	//��ѧ������
	float f2 = 3e2;//3 * 10^2;
	cout << "f2 = " << f2 << endl;
	float f3 = 3e-2;//3 * 10^-2
	cout << "f3 = " << f3 << endl;
	system("pause");
	return 0;
}