//int count(iterator beg,iterator end,value);

/*
	ͳ��Ԫ�س��ִ���
*/

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


//������������
void test01() {
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(40);

	//����5
	int num = count(v.begin(), v.end(), 40);
	cout << "40Ԫ�ظ���Ϊ��" << num << endl;
}

//�Զ�����������
class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	//����== �ײ�find֪����ζԱ�person��������
	bool operator==(const Person& p) {//�����޸� ����Ҫ��const
		int count = 0;
		if (this->m_Age == p.m_Age) {
			return true;
		}
		return false;
	}
	string m_Name;
	int m_Age;
};

void test02() {
	vector<Person>v;
	Person p1("aaa", 35);
	Person p2("bbb", 35);
	Person p3("ccc", 35);
	Person p4("ddd", 30);
	Person p5("eee", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person p6("bbb", 35);

	int num = count(v.begin(), v.end(), p6);
	cout << "��p6��ͬ����������Ϊ��" << num << endl;
}

int main() {
	test01();
	test02();

	system("pause");
	return 0;
}