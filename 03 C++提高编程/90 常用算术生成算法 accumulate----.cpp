// accumulatef(iteator beg, iterator end, value);
// 计算元素累计总和+value

#include<iostream>
using namespace std;
#include<vector>
#include<numeric>//accumulate

void test01() {
	vector<int>v;
	for (int i = 1;i <= 100;i++) {
		v.push_back(i);
	}

	int total = accumulate(v.begin(), v.end(), 0);//+0
	cout << "total = " << total << endl;

	total = accumulate(v.begin(), v.end(), 1000);//+1000
	cout << "total = " << total << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}