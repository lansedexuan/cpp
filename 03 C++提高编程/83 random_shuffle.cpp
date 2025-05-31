/*
	random_shuffle(iterator beg,iterator end);
	随机调整次序
*/

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<ctime>//srand((unsigned int)time(NULL));

void MyPrint(int val) {
	cout << val << " ";
}

void test01() {
	srand((unsigned int)time(NULL));

	vector<int>v;
	for (int i = 0;i < 10;i++) {
		v.push_back(i);
	}

	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), MyPrint);
	cout << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}