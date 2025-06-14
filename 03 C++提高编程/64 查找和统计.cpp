/*
	find(key); //存在 返回迭代器 不存在 返回set.end()
	count(key); //统计key个数 map 0或者1 multimap 可能>1
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
	m.insert(pair<int, int>(3, 40));

	map<int, int>::iterator pos = m.find(3);

	if (pos != m.end()) {
		cout << "查到了元素key = " << (*pos).first << " value = " << pos->second << endl;
	}
	else {
		cout << "未找到元素" << endl;
	}

	int num = m.count(3);
	cout << "num = " << num << endl;//map不允许插入重复key count=0/1
}


int main() {
	test01();
	system("pause");
	return 0;
}