/*
	map中所有数据都是pair 成对出现
	pair中第一个元素为key(键值) 第二个元素为value(实值)
	所有元素按照元素的键值自动排序

	map/multimap属于关联式容器 底层结构是二叉树

	区别：
	map不允许容器中有重复key值
	multimap允许容器中有重复key值
*/

/*
	map<T1,T2>mp;//默认构造
	map(const map& mp);//拷贝构造

	map& operator=(const map& mp);//重载等号
*/

#include<iostream>
#include<map>
using namespace std;

void printMap(map<int, int>& m) {
	for (map<int, int>::iterator it = m.begin();it != m.end();it++) {
		cout << "key = " << (*it).first << " value = " << it->second << endl;
	}
	cout << endl;
}

void test01() {
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));

	printMap(m);

	map<int, int>m2(m);
	printMap(m2);

	map<int, int>m3;
	m3 = m2;
	printMap(m3);
}

int main() {
	test01();
	system("pause");
	return 0;
}