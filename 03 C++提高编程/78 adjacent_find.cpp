/*
	adjacent_find(iterator beg,iterator end);
	��������Ԫ�صĵ�һ��λ�õĵ�����
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
		cout << "û���ҵ�����Ԫ��" << endl;
	}
	else {
		cout << "�ҵ��ˣ�" << *pos << endl;
	}
}

int main() {
	test01();

	system("pause");
	return 0;
}