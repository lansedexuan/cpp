/*
	adjacent_find(iterator beg,iterator end);
	返回相邻元素的第一个位置的迭代器
*/

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


void test01() {
	vector<int>v;
	v.push_back(0);
	v.push_back(2);
	v.push_back(0);
	v.push_back(3);
	v.push_back(1);
	v.push_back(4);
	v.push_back(3);
	v.push_back(3);

	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
	if (pos == v.end()) {
		cout << "没有找到相邻元素" << endl;
	}
	else {
		cout << "找到了：" << *pos << endl;
	}
}

int main() {
	test01();

	system("pause");
	return 0;
}