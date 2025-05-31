#include<iostream>
using namespace std; 

class Person {
public:
	Person(int age) {
		//this 指针指向 被调用的成员函数 所属的对象
		this->age = age;//this指向p1
	}
	Person&	PersonAddAge(Person& p) {
		this->age += p.age;
		return *this;//this指向p2的指针 而*this指向的就是p2这个对象的本体
	}
	Person PersonAddAge1(Person& p) {
		this->age += p.age;
		return *this;//this指向p2的指针 而*this指向的就是p2这个对象的本体
	}
	int age;
};

//1 解决名称冲突
void test01() {
	Person p1(18);
	cout << "p1的年龄为：" << p1.age << endl;
}

//2 返回对象本身
void test02() {
	Person p1(10);

	Person p2(10);
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);//链式编程思想
	cout << "p2的年龄为：" << p2.age << endl;
	p2.PersonAddAge1(p1).PersonAddAge1(p1).PersonAddAge1(p1);//p2' p2'' p2'''
	cout << "p2'的年龄为：" << p2.age << endl;
}


int main() {
	//test01();
	test02();

	system("pause");
	return 0;
} 