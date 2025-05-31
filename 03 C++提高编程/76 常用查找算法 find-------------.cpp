/*
	find			//查找
	find_if			//按条件查找
	adjacent_find	//相邻重复查找
	binary_search	//二分查找
	count			//统计
	count_if		//按条件统计
*/

//找到返回迭代器	找不到返回结束迭代器end()

//	find(iterator beg,iterator end,value);

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


//内置数据类型
void test01() {
	vector<int>v;
	for (int i = 0;i < 10;i++) {
		v.push_back(i);
	}

	//查找5
	vector<int>::iterator it = find(v.begin(), v.end(), 5);
	if (it == v.end()) {
		cout << "没有找到" << endl;
	}
	else {
		cout << "找到了：" << *it << endl;
	}
}

//自定义数据类型
class Person {
public:
	Person(string name, int age) {
		this->m_Name = name;
		this->m_Age = age;
	}
	//重载== 底层find知道如何对比person数据类型
	bool operator==(const Person& p) {
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age) {
			return true;
		}
		return false;
	}
	string m_Name;
	int m_Age;
};

void test02() {
	vector<Person>v;
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	Person pp("bbb", 20);

	vector<Person>::iterator it = find(v.begin(), v.end(), pp);
	if (it == v.end()) {
		cout << "没有找到" << endl;
	}
	else {
		cout << "找到了 姓名：" << (*it).m_Name << " 年龄：" << it->m_Age << endl;
	}
}

int main() {
	test01();
	test02();

	system("pause");
	return 0;
}