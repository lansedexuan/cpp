#include<iostream>
using namespace std;

//ǳ���� �������ڴ��ظ��ͷ�
//ǳ��������Ľ�����������
//�������ջ����������ռ䣬���п�������
//����������ڶ������ٵ� һ��Ҫ�Լ��ṩ������������ֹǳ��������������

class Person {
public:
	Person() {
		cout << "Person��Ĭ�Ϲ��캯������" << endl;
	}
	Person(int age, int height) {
		m_Age = age;
		m_Height = new int(height);
		cout << "Person���вκ�������" << endl;
	}
	Person(const Person &p) {//�Լ�ʵ�ֿ������캯�� ���ǳ��������������
		cout << "Person �������캯������" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;//������Ĭ��ʵ�ִ���
		//���
		m_Height = new int(*p.m_Height);
	}
	~Person() {
		//���� ���������ٵ��������ͷŲ���
		if (m_Height != NULL) {
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person��������������" << endl;
	}
	int m_Age;
	int* m_Height;//���ٵ�����
};

void test01() {
	Person p1(18,160);
	cout << "p1������Ϊ��" << p1.m_Age << "���Ϊ��" << *p1.m_Height << endl;

	Person p2(p1);
	cout << "p2������Ϊ��" << p2.m_Age << "���Ϊ��" << *p2.m_Height << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}