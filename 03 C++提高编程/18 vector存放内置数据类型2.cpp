#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

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
	vector<Person>v;

	Person p1("aaa", 10);
	Person p2("aba", 20);
	Person p3("aca", 30);
	Person p4("ada", 40);
	Person p5("aea", 50);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	for (vector<Person>::iterator it = v.begin();it != v.end();it++) {
		cout << "姓名：" << (*it).m_Name << " 年龄：" << (*it).m_Age << endl;//*it Person 类型 .
		cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;//指针 ->
	}

}

void test02() {
	vector<Person *>v;

	Person p1("aaa", 10);
	Person p2("aba", 20);
	Person p3("aca", 30);
	Person p4("ada", 40);
	Person p5("aea", 50);

	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);

	for (vector<Person *>::iterator it = v.begin();it != v.end();it++) {
		cout << " 姓名：" << (*it)->m_Name << " 年龄：" << (*it)->m_Age << endl;//*it Person* 类型
	}
}

int main() {
	test01();
	test02();

	system("pause");
	return 0;
}