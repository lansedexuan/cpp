// fill(iteator beg, iterator end, value);
// ���

#include<iostream>
using namespace std;
#include<vector>
#include<numeric>//fill
#include<algorithm>

void MyPrint(int val) {
	cout << val << " ";
}

void test01() {
	vector<int>v;
	v.resize(10);//10��0

	//�������
	fill(v.begin(), v.end(), 100);
	for_each(v.begin(), v.end(), MyPrint);
	cout << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}