#include<iostream>
using namespace std;

//��ģ���г�Ա�����ڵ���ʱ�Ŵ���
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
	//��ģ���еĳ�Ա����
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

//��ģ���еĳ�Ա����������һ��ʼ�ʹ����� �ڵ���ʱ��ȥ����

int main() {
	test01();


	system("pause");
	return 0;
}