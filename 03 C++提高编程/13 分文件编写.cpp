#include<iostream>
using namespace std;


//��һ�ֽ����ʽ ֱ�Ӱ���Դ�ļ�
#include "13 person.cpp"

//�ڶ��ֽ����ʽ ��.h��.cpp������д��һ�� ����׺��Ϊ.hpp�ļ�
#include "13 person.hpp"

//template <class T1, class T2>
//class Person {
//public:
//	Person(T1 name, T2 age);
//
//	void showPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//};

////���캯������ʵ��
//template<class T1, class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
////��Ա��������ʵ��
//template<class T1, class T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
//}

void test01() {
	Person<string, int>P("Tom", 20);
	P.showPerson();
}

//��ģ���г�Ա��������ʵ��ʱ ��Ҫ����ģ������б�

int main() {
	test01();

	system("pause");
	return 0;
}