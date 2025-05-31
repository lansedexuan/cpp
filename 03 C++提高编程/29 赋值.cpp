#include<iostream>
using namespace std;
#include<vector>

/*
	vector& operator=(const vector& vec);//重载等号
	assign(beg,end);                     //将前开后闭区间的数据拷贝赋值给本身
	assign(n,elem);						 //将n个elem拷贝赋值给本身
*/

void printVector(vector<int>& v) {
	for (vector<int>::iterator it = v.begin();it != v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	vector<int>v1;
	for (int i = 0;i < 10;i++) {
		v1.push_back(i);
	}
	printVector(v1);

	//赋值

	vector<int>v2;
	v2 = v1;//operator=
	printVector(v2);

	vector<int>v3;
	v3.assign(v1.begin(), v1.end());//assign
	printVector(v3);

	vector<int>v4;
	v4.assign(10, 100);//n个elem
	printVector(v4);
}

int main() {
	test01();


	system("pause");
	return 0;
}