#include<iostream>
using namespace std;

//public ���� ��Ա ���ڿ��Է��� ������Է���
//protected ���� ��Ա ���ڿ��Է��� ���ⲻ���Է��� ����Ҳ���Է��ʸ����еı�������
//provate ˽�� ��Ա ���ڿ��Է��� ���ⲻ���Է��� ���಻���Է��ʸ����е�˽������

class Person {
public://����Ȩ��
	string m_Name;
protected://����Ȩ��
	string m_Car;
private://˽��Ȩ��
	int m_Password;
public:
	void func() {
		m_Name = "����";
		m_Car = "������";
		m_Password = 123456;
	}
};

int main() {
	//ʵ��������
	Person p1;

	p1.m_Name = "����";
	//p1.m_Car = "����"; �������� ������ʲ���
	//p1.m_Password = 123; ˽������ ������ʲ���

	system("pause");
	return 0;
}