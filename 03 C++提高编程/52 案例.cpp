#include<iostream>
using namespace std;
#include<list>
#include<algorithm>

//Person 姓名 年龄 身高
//排序规则
//按照年龄升序 年龄相同按照身高降序

class Person {
public:
	Person(string name, int age, int height) {
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}
	string m_Name;
	int m_Age;
	int m_Height;
};

void printList(list<int>& l) {
	for (list<int>::iterator it = l.begin();it != l.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

//指定排序规则
bool comparePerson(Person& p1,Person& p2) {
	//年龄升序 身高降序
	if (p1.m_Age == p2.m_Age) {
		return p1.m_Height > p2.m_Height;
	}
	else {
		return p1.m_Age < p2.m_Age;
	}	
}

void test01() {
	list<Person>L;

	Person p1("刘备", 35, 175);
	Person p2("曹操", 45, 180);
	Person p3("孙权", 40, 170);
	Person p4("赵云", 25, 190);
	Person p5("张飞", 35, 160);
	Person p6("关羽", 35, 200);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	for (list<Person>::iterator it = L.begin();it != L.end();it++) {
		cout << "姓名：" << (*it).m_Name << " 年龄：" << it->m_Age << " 身高：" << it->m_Height << endl;
	}

	//排序
	cout << "-----------------------------" << endl;
	cout << "排序后：" << endl;

	L.sort(comparePerson);//自定义数据类型排序需要指定排序规则
	for (list<Person>::iterator it = L.begin();it != L.end();it++) {
		cout << "姓名：" << (*it).m_Name << " 年龄：" << it->m_Age << " 身高：" << it->m_Height << endl;
	}
}

int main() {
	test01();

	system("pause");
	return 0;
}