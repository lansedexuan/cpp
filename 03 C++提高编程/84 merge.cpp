/*
	merge(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest);
	两个容器必须是有序的 融合后也是有序的
	dest 目标容器开始迭代器
*/

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void MyPrint(int val) {
	cout << val << " ";
}

void test01() {
	vector<int>v1;
	vector<int>v2;
	for (int i = 0;i < 10;i++) {
		v1.push_back(i);
		v2.push_back(i+1);
	}

	vector<int>vTarget;
	vTarget.resize(v1.size() + v2.size());//分配空间
	
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(),vTarget.begin());
	for_each(vTarget.begin(), vTarget.end(), MyPrint);
	cout << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}