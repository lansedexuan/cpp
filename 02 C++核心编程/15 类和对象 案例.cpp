#include<iostream>
using namespace std;

//设计学生类
class Student {
public:

	//类中的属性和行为 我们统一称为成员
	//属性： 成员属性 或者 成员变量
	//行为： 成员函数 或者 成员方法

	//属性
	string s_name;//姓名
	int s_id;//学号
	//行为： 显示姓名和学号
	void showStudent() {
		cout << "姓名：" << s_name << " 学号：" << s_id << endl;
	}
	//行为： 给姓名赋值
	void setName(string name) {
		s_name = name;
	}
	//行为： 给姓名赋值
	void setId(int id) {
		s_id = id;
	}
};

int main() {
	//创建一个具体学生 实例化对象
	Student s;
	//s.s_name = "张三";
	s.setName("张三");
	//s.s_id = 1;
	s.setId(1);
	s.showStudent();

	system("pause");
	return 0;
}