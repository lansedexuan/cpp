#include<iostream>
using namespace std;

//类模板中成员函数在调用时才创建
class Person1 {
public:
	void showPerson1() {
		cout << "showPerson1" << endl;
	}
};

class Person2 {
public:
	void showPerson2() {
		cout << "showPerson2" << endl;
	}
};

template<class T>
class Myclass {
public:
	T obj;
	//类模板中的成员函数
	void func1() {
		obj.showPerson1();
	}
	void func2() {
		obj.showPerson2();
	}
};

void test01() {
	Myclass<Person1>m;
	m.func1();
	//m.func2();
}

//类模板中的成员函数并不是一开始就创建的 在调用时才去创建

int main() {
	test01();


	system("pause");
	return 0;
}