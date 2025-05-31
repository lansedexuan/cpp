#include<iostream>
using namespace std;

//类模板
template<class NameType,class AgeType>
class Person {
public:
	Person(NameType name, AgeType age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson() {
		cout << "name:" << this->m_Name << " age:" << this->m_Age << endl;
	}
	NameType m_Name;
	AgeType m_Age;
};

void test01() {
	Person<string, int> p1("孙悟空", 999);
	p1.showPerson();
}

//类模板与函数模板语法相似

int main() {
	test01();

	system("pause");
	return 0;
}