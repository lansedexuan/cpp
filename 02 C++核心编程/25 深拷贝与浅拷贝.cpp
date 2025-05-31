#include<iostream>
using namespace std;

//浅拷贝 堆区的内存重复释放
//浅拷贝问题的解决方法：深拷贝
//深拷贝：再栈区重新申请空间，进行拷贝操作
//如果属性有在堆区开辟的 一定要自己提供拷贝函数，防止浅拷贝带来的问题

class Person {
public:
	Person() {
		cout << "Person的默认构造函数调用" << endl;
	}
	Person(int age, int height) {
		m_Age = age;
		m_Height = new int(height);
		cout << "Person的有参函数调用" << endl;
	}
	Person(const Person &p) {//自己实现拷贝构造函数 解决浅拷贝带来的问题
		cout << "Person 拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
		//m_Height = p.m_Height;//编译器默认实现代码
		//深拷贝
		m_Height = new int(*p.m_Height);
	}
	~Person() {
		//析构 将堆区开辟的数据做释放操作
		if (m_Height != NULL) {
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person的析构函数调用" << endl;
	}
	int m_Age;
	int* m_Height;//开辟到堆区
};

void test01() {
	Person p1(18,160);
	cout << "p1的年龄为：" << p1.m_Age << "身高为：" << *p1.m_Height << endl;

	Person p2(p1);
	cout << "p2的年龄为：" << p2.m_Age << "身高为：" << *p2.m_Height << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}