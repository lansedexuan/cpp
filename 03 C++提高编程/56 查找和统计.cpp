/*
	find(key); //存在 返回元素的迭代器 不存在 返回set.end()
	count(key); //统计key元素的个数 set:0或1 multiset:可能会>1 
*/

#include<iostream>
using namespace std;
#include<set>

//查找
void test01() {
	set<int>s1;

	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	set<int>::iterator pos = s1.find(300);
	if (pos != s1.end()) {
		cout << "找到元素：" << *pos << endl;
	}
	else {
		cout << "未找到元素" << endl;
	}


}

//统计
void test02() {
	set<int>s1;

	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	s1.insert(30);
	s1.insert(30);
	s1.insert(30);

	int num1 = s1.count(30);
	cout << "num1 = " << num1 << endl;//对于set 统计结果要么0要么1

	int num2 = s1.count(300);
	cout << "num2 = " << num2 << endl;
}

int main() {
	test02();
	system("pause");
	return 0;
}