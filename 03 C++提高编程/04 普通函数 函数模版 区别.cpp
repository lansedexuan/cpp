#include<iostream>
using namespace std;

//��ͨ���� ����ģ�� ������

//1 ��ͨ�������ÿ��Է�����ʽ����ת��
//2 ����ģ�� ���Զ������Ƶ� �����Է�����ʽת��
//3 ����ģ�� ����ʾָ������ ���Է�����ʽ����ת��

//��ͨ����
int myAdd01(int a, int b) {
	return a + b;
}

//����ģ��
template<class T>
T myAdd02(T a, T b) {
	return a + b;
}

void test01() {
	int a = 10;
	int b = 20;
	char c = 'c';//a-97 c-99
	cout << myAdd01(a, b) << endl;
	cout << myAdd01(a, c) << endl;

	cout << myAdd02(a, b) << endl;
	//cout << myAdd02(a, c) << endl;//�Զ������Ƶ� ���ᷢ������ת��
	cout << myAdd02<int>(a, c) << endl;//��ʾָ������
}


int main() {
	test01();

	system("pause");
	return 0;
}