//���Ϊ��v1��v2�Ĳ v2��v1�Ĳ

// set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
// set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
// ԭ������������������
// max(v1.size(), v2.size())

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
		v2.push_back(i + 5);
	}

	vector<int>vTarget;
	vTarget.resize(max(v1.size(), v2.size()));

	cout << "v1��v2�ĲΪ��" << endl;
	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, MyPrint);
	cout << endl;

	cout << "v2��v1�ĲΪ��" << endl;
	itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
	for_each(vTarget.begin(), itEnd, MyPrint);
	cout << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}