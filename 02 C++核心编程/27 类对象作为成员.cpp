#include<iostream>
using namespace std;

class Phone {
public:
	Phone(string pName) {
		m_PName = pName;
		cout << "Phone�Ĺ��캯������" << endl;
	}
	~Phone() {
		cout << "Phone��������������" << endl;
	}
	string m_PName;
};

class Person {
public:
	//Phone m_Phone=pName//��ʽת����
	Person(string name, string pName):m_Name(name),m_Phone(pName) 
	{
		cout << "Person�Ĺ��캯������" << endl;
	}
	~Person() {
		cout << "Person��������������" << endl;
	}
	string m_Name;
	Phone m_Phone;
};

//�������������Ϊ�����Ա������ʱ�ȹ���������ٹ�������
//������˳���빹���෴

void test01() {
	Person p("����","ƻ��");

	cout << p.m_Name << "���ţ�" << p.m_Phone.m_PName <<"�ֻ�"<< endl;
}


int main() {
	test01();

	system("pause");
	return 0;
}