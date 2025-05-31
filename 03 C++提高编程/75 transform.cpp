/*
	transform(iterator beg1, iterator end1, iterator beg2, _func);
	beg1 end1
	beg2
	_func �������ߺ�������
*/

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class Transform {
public:
	int operator()(int v) {
		return v + 100;
	}
};

class MyPrint {
public:
	void operator()(int v) {
		cout << v << " ";
	}
};

void test01() {
	vector<int>v;
	for (int i = 0;i < 10;i++) {
		v.push_back(i);
	}

	vector<int>vTarget;//Ŀ������
	vTarget.resize(v.size());//Ŀ��������Ҫ��ǰ���ٿռ�

	transform(v.begin(), v.end(), vTarget.begin(), Transform());

	for_each(vTarget.begin(), vTarget.end(), MyPrint());
}

int main() {
	test01();

	system("pause");
	return 0;
}