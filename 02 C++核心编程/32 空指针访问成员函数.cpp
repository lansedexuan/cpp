#include<iostream>
using namespace std;

//空指针调用成员函数

class Person {
public:
	void showClassName() {
		cout << "this is Person class" << endl;
	}
	void showPersonAge() {
		//报错原因 传入指针为空
		if (this == NULL) {
			return;
		}
		cout << "age=" << m_Age << endl;//this->m_Age
		//cout << "age=" << this->m_Age << endl;
	}
	int m_Age;
};

void test01() {
	Person* p = NULL;
	p->showClassName();
	p->showPersonAge();
}

int main() {
	test01();

	system("pause");
	return 0;
}