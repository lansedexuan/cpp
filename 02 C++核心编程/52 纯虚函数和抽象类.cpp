#include<iostream>
using namespace std;

//���麯���ͳ�����
class Base {
public:
	//���麯��
	//ֻҪ��һ�����麯�� ������Ϊ������
	//�������ص�
	//1 �޷�ʵ��������
	//2 ��������������Ҫ��д�����еĴ��麯��
	virtual void func() = 0;
};

class Son :public Base {
public:
	virtual void func() {
		cout << "func����" << endl;
	};
};

void test01() {
	//Base b;//�������޷�ʵ��������
	//new Base;//�������޷�ʵ��������
	Son s;
	Base* base = new Son;//��̬
	base->func();
}

int main() {
	test01();

	system("pause");
	return 0;
}