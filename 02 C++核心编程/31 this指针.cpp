#include<iostream>
using namespace std; 

class Person {
public:
	Person(int age) {
		//this ָ��ָ�� �����õĳ�Ա���� �����Ķ���
		this->age = age;//thisָ��p1
	}
	Person&	PersonAddAge(Person& p) {
		this->age += p.age;
		return *this;//thisָ��p2��ָ�� ��*thisָ��ľ���p2�������ı���
	}
	Person PersonAddAge1(Person& p) {
		this->age += p.age;
		return *this;//thisָ��p2��ָ�� ��*thisָ��ľ���p2�������ı���
	}
	int age;
};

//1 ������Ƴ�ͻ
void test01() {
	Person p1(18);
	cout << "p1������Ϊ��" << p1.age << endl;
}

//2 ���ض�����
void test02() {
	Person p1(10);

	Person p2(10);
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);//��ʽ���˼��
	cout << "p2������Ϊ��" << p2.age << endl;
	p2.PersonAddAge1(p1).PersonAddAge1(p1).PersonAddAge1(p1);//p2' p2'' p2'''
	cout << "p2'������Ϊ��" << p2.age << endl;
}


int main() {
	//test01();
	test02();

	system("pause");
	return 0;
} 