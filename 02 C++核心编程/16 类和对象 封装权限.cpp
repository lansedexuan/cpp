#include<iostream>
using namespace std;

//public 公共 成员 类内可以访问 类外可以访问
//protected 保护 成员 类内可以访问 类外不可以访问 子类也可以访问父类中的保护内容
//provate 私有 成员 类内可以访问 类外不可以访问 子类不可以访问父类中的私有内容

class Person {
public://公共权限
	string m_Name;
protected://保护权限
	string m_Car;
private://私有权限
	int m_Password;
public:
	void func() {
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = 123456;
	}
};

int main() {
	//实例化对象
	Person p1;

	p1.m_Name = "李四";
	//p1.m_Car = "奔驰"; 保护内容 类外访问不到
	//p1.m_Password = 123; 私有内容 类外访问不到

	system("pause");
	return 0;
}