//int count(iterator beg,iterator end,value);

/*
	统计元素出现次数
*/

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


//内置数据类型
void test01() {
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(40);

	//查找5
	int num = count(v.begin(), v.end(), 40);
	cout << "40元素个数为：" << num << endl;
}

//自定义数据类型
class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	//重载== 底层find知道如何对比person数据类型
	bool operator==(const Person& p) {//不能修改 必须要加const
		int count = 0;
		if (this->m_Age == p.m_Age) {
			return true;
		}
		return false;
	}
	string m_Name;
	int m_Age;
};

void test02() {
	vector<Person>v;
	Person p1("aaa", 35);
	Person p2("bbb", 35);
	Person p3("ccc", 35);
	Person p4("ddd", 30);
	Person p5("eee", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);

	Person p6("bbb", 35);

	int num = count(v.begin(), v.end(), p6);
	cout << "与p6相同岁数的人数为：" << num << endl;
}

int main() {
	test01();
	test02();

	system("pause");
	return 0;
}