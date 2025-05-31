#include<iostream>
using namespace std;

//����ģ��

//�������εĺ���
void swapInt(int &a,int &b) {
	int temp = a;
	a = b;
	b = temp;
}

//���������͵ĺ���
void swapDouble(double& a, double& b) {
	double temp = a;
	a = b;
	b = temp;
}

//����ģ��
template<typename T>//����һ��ģ�� ���߱�������������е�T��Ҫ���� T��һ��ͨ������
void mySwap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

void test01() {
	//int a = 10;
	//int b = 20;
	//swapInt(a, b);
	//cout << "a = " << a << endl;
	//cout << "b = " << b << endl;

	//double c = 1.1;
	//double d = 2.2;
	//swapDouble(c, d);
	//cout << "c = " << c << endl;
	//cout << "d = " << d << endl;

	int a = 10;
	int b = 20;

	//����ģ�彻��
	//1 �Զ������Ƶ�
	mySwap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	//2 ��ʾָ������
	mySwap<int>(a, b);//<int>
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}