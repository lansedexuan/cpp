#include<iostream>
using namespace std;

//��Ա�����ͳ�Ա�����ֿ��洢

class Person {
	int m_A;//�Ǿ�̬��Ա���� ������Ķ�����
	static int m_B;//��̬��Ա���� ��������Ķ�����
	void func() {};//�Ǿ�̬��Ա���� ��������Ķ�����
	static void func2();//��̬��Ա���� ��������Ķ�����
};

int Person::m_B = 0;

void test01() {
	Person p;
	//�ն���ռ���ڴ�ռ�Ϊ��1
	//c++���������ÿ���ն������һ���ֽڿռ� ��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���Ӧ��Ҳ��һ����һ�޶����ڴ��ַ
	cout << "sizeof p=" << sizeof(p) << endl;
}

void test02() {
	Person p;
	cout << "sizeof p=" << sizeof(p) << endl;
}

int main() {
	//test01();
	test02();

	system("pause");
	return 0;
}