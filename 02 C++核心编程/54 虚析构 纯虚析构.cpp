#include<iostream>
using namespace std;

//虚析构 纯虚析构

class Animal {
public:
	Animal() {
		cout << "Animal构造函数调用" << endl;
	}

	//1 虚析构
	//利用虚析构可以解决 父类指针释放子类对象时不干净的问题
	//virtual ~Animal() {
	//	cout << "Animal析构函数调用" << endl;
	//}
	
	//2 纯虚析构 
	//需要声明 也需要实现
	//有了纯虚析构后 这个类也属于抽象类 无法实例化对象
	virtual ~Animal() = 0;

	//纯虚函数
	virtual void speak() = 0;
};

//纯虚析构 
Animal:: ~Animal() {
	cout << "Animal纯析构函数调用" << endl;
}

class Cat :public Animal {
public:
	Cat(string name) {
		cout << "Cat构造函数调用" << endl;
		m_Name = new string(name);
	}
	virtual void speak() {
		cout << *m_Name << "小猫在说话" << endl;
	}
	~Cat() {
		if (m_Name != NULL) {
			cout << "Cat析构函数调用" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
	string *m_Name;
};

void test01() {
	Animal* animal = new Cat("Tom");
	animal->speak();
	//父类指针在析构时候 不会调用子类析构函数 导致子类有堆区属性 出现内存泄露
	delete animal;
}

//总结
//虚析构 纯虚析构 解决父类指针释放子类对象
//如果子类没有堆区数据 可以不写 虚析构 纯虚析构
//纯虚析构的类 也属于抽象类

int main() {
	test01();

	system("pause");
	return 0;
}