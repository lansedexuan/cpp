/*
	���غ������ò��������� ������Ϊ��������
	�º������������� ʹ��()ʱ ��Ϊ���ƺ������� 
*/

//��������(�º���)��һ���� ����һ������


#include<iostream>
using namespace std;

//1 ��������ʹ��ʱ ��������ͨ������������ �����в����ͷ���ֵ
class MyAdd {
public:
	int operator()(int v1, int v2) {
		return v1 + v2;
	}
};

void test01() {
	MyAdd myadd;//��������
	cout<<myadd(10, 10)<<endl;
}

//2 �������󳬳���ͨ�����ĸ��� ��������������Լ���״̬
class MyPrint {
public:
	MyPrint() {
		this->count = 0;
	}
	void operator()(string test) {
		cout << test << endl;
		this->count++;
	}

	int count;//�ڲ��Լ�״̬
};

void test02() {
	MyPrint myprint;
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");

	cout << "myprint���ô���Ϊ��" << myprint.count << endl;
}

//3 �������������Ϊ��������
void doPrint(MyPrint& mp, string test) {
	mp(test);//1��2 2��3
}

void test03() {
	MyPrint myprint;
	doPrint(myprint, "hello C++");
}


int main() {
	test01();
	test02();
	test03();

	system("pause");
	return 0;
}