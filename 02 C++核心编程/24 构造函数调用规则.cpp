#include<iostream>
using namespace std;

//1 ����һ���࣬���������ÿ�������������������
//Ĭ�Ϲ��죨��ʵ�֣�
//������������ʵ�֣�
//�������죨ֵ������

//2 �������д���вι��� �������������ṩĬ�Ϲ��� ��Ȼ�ṩ��������
//�������д�˿������캯�� �����������ṩ��������
class Person {
public:
	//Person() {
	//	cout << "Person��Ĭ�Ϻ�������" << endl;
	//}
	Person(int age) {
		cout << "Person���вι��캯������" << endl;
		m_Age = age;
	}
	//Person(const Person& p) {
	//	cout << "Person�Ŀ������캯������" << endl;
	//	m_Age = p.m_Age;
	//}
	~Person() {
		cout << "Person��������������" << endl;
	}
	int m_Age;
};

//void test01() {
//	Person p;
//	p.m_Age = 18;
//	Person p2(p);
//	cout << "p2������Ϊ��" << p2.m_Age << endl;
//
//}

void test02() {
	Person p(28);
	Person p2(p);
	cout << "p2������Ϊ��" << p2.m_Age << endl;
}

int main() {
	//test01();
	test02();

	system("pause");
	return 0;
}