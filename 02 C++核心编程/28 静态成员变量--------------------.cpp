#include<iostream>
using namespace std;

class Person {
public:
	//1 ���Զ��󶼹���ͬһ������
	//2 ����׶ξͷ����ڴ�
	//3 �������� �����ʼ������
	static int m_A;

	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static int m_B;
};

int Person::m_A = 100;//Person�µ������ʼ�� Person::
int Person::m_B = 200;

void test01() {
	Person p;
	cout << p.m_A << endl;
	Person p2;
	p2.m_A = 200;
	cout << p .m_A << endl;
}

void test02() {
	//��̬��Ա���� ������ĳ�������ϣ����Զ��󶼹���ͬһ������
	//��̬��Ա���ʷ�ʽ

	//1 ͨ���������
	//cout << p.m_A << endl;
	
	//2 ͨ����������
	cout << Person::m_A << endl;
	//cout << Person::m_B << endl;//�����޷�����˽�о�̬��Ա����
}

int main() {
	//test01();
	test02();

	system("pause");
	return 0;
}