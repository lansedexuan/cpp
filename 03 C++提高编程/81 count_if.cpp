//int count_if(iterator beg,iterator end, _Pred);

/*
	按条件 统计元素出现次数
	_Pred 谓词
*/

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


//内置数据类型
class Greater20 {
public:
	bool operator()(int val) {
		return val > 20;
	}
};

void test01() {
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(20);

	//查找5
	int num = count_if(v.begin(), v.end(), Greater20());
	cout << "大于20元素的个数为：" << num << endl;
}

//自定义数据类型
class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

class AgeGreater20 {
public:
	bool operator()(const Person& p) {
		return p.m_Age > 20;
	}
};

void test02() {
	vector<Person>v;
	Person p1("aaa", 35);
	Person p2("bbb", 35);
	Person p3("ccc", 35);
	Person p4("ddd", 40);
	Person p5("eee", 20);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	int num = count_if(v.begin(), v.end(), AgeGreater20());
	cout << "大于20岁的人数为：" << num << endl;
}

int main() {
	test01();
	test02();

	system("pause");
	return 0;
}