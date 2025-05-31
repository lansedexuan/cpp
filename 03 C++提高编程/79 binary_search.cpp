//	bool binary_search(iterator beg,iterator end,value);

/*
	二分查找
	查找指定元素 是ture 否false
	必须有序序列 无序序列不可用
*/

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void test01() {
	vector<int>v;
	for (int i = 0;i < 10;i++) {
		v.push_back(i);
	}
	bool ret = binary_search(v.begin(), v.end(), 9);
	if (ret) {
		cout << "找到了" << endl;
	}
	else {
		cout << "没有找到" << endl;
	}
}

int main() {
	test01();

	system("pause");
	return 0;
} 