#include<iostream>
using namespace std;

//菱形继承

//动物类
class Animal {
public:
	int m_Age;
};

//利用虚继承 可以解决菱形继承的问题
//继承之前 加上关键字 Virtual 变为虚继承
// vbptr：虚基类指针 指向 vbtable：虚基类表
// v-virtual
// b-base
// ptr-pointer

//羊类
class Sheep:virtual public Animal {
public:

};

//驼类
class Tuo :virtual public Animal{
public:

};

//羊驼类
class SheepTuo :public Sheep, public Tuo {

};

void test01() {
	SheepTuo st;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	//菱形继承 有两个父类拥有相同的数据 需要加作用于区分
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age<< endl;
	cout << "st.m_Age = " << st.m_Age << endl;
	//菱形继承导致数据有两份 资源浪费
}

int main() {
	test01();

	system("pause");
	return 0;
}