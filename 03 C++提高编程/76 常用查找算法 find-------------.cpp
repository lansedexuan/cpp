/*
	find			//����
	find_if			//����������
	adjacent_find	//�����ظ�����
	binary_search	//���ֲ���
	count			//ͳ��
	count_if		//������ͳ��
*/

//�ҵ����ص�����	�Ҳ������ؽ���������end()

//	find(iterator beg,iterator end,value);

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


//������������
void test01() {
	vector<int>v;
	for (int i = 0;i < 10;i++) {
		v.push_back(i);
	}

	//����5
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end()) {
		cout << "û���ҵ�" << endl;
	}
	else {
		cout << "�ҵ��ˣ�" << *it << endl;
	}
}

//�Զ�����������
class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	//����== �ײ�find֪����ζԱ�person��������
	bool operator==(const Person& p) {
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
			return true;
		}
		return false;
	}
	string m_Name;
	int m_Age;
};

void test02() {
	vector<Person>v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	Person pp("bbb", 20);

	vector<Person>::iterator it = find(v.begin(), v.end(), pp);
	if (it == v.end()) {
		cout << "û���ҵ�" << endl;
	}
	else {
		cout << "�ҵ��� ������" << (*it).m_Name << " ���䣺" << it->m_Age << endl;
	}
}

int main() {
	test01();
	test02();

	system("pause");
	return 0;
}