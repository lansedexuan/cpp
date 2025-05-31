#include<iostream>
using namespace std;
#include<queue>

//���캯����
//queue<T>que; //Ĭ�Ϲ���
//queue(const queue& que); //�������캯��

//��ֵ
//queue& operator=(const queue& que); //����=

//���ݴ�ȡ
//push(elem); //ջ�����Ԫ��
//pop(); //�Ƴ���ͷ��һ��Ԫ��
//back(); //�������һ��Ԫ��
//front(); //���ص�һ��Ԫ��

//��С����
//empty(); //�п�
//size(); //����ջ�Ĵ�С

class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

void test01() {
	queue<Person>q;
	Person p1("��ɮ", 30);
	Person p2("�����", 1000);
	Person p3("��˽�", 900);
	Person p4("ɳɮ", 800);

	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);

	cout << "���д�С��" << q.size() << endl;
	while (!q.empty()) {
		cout << "��ͷ ������" << q.front().m_Name << " ���䣺" << q.front().m_Age << endl;		
		cout << "��β ������" << q.back().m_Name << " ���䣺" << q.back().m_Age << endl;
		cout << endl;
		q.pop();
	}
	cout << "���д�С��" << q.size() << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}