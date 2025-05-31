/*
	set不可以插入重复数据 multiset可以
	set插入数据会返回插入结果 表示是否插入成功
	multiset不会检测数据 因此可以插入重复数据
*/

/*
	find(key); //存在 返回元素的迭代器 不存在 返回set.end()
	count(key); //统计key元素的个数 set:0或1 multiset:可能会>1
*/

#include<iostream>
using namespace std;
#include<set>

void test01() {
	set<int>s1;

	pair<set<int>::iterator, bool>ret=s1.insert(10);
	if (ret.second) {
		cout << "第一次插入成功" << endl;
	}
	else {
		cout << "第一次插入失败" << endl;
	}
	
	ret= s1.insert(10);
	if (ret.second) {
		cout << "第二次插入成功" << endl;
	}
	else {
		cout << "第二次插入失败" << endl;
	}

	multiset<int>ms;
	ms.insert(10);
	ms.insert(10);
	ms.insert(10);
	for (multiset<int>::iterator it = ms.begin();it != ms.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
} 