/*
	返回bool类型的仿函数称为谓词
	operator()接受一个参数 一元谓词
	oporator()接受两个参数 二元谓词
*/

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>//sort

//谓词：仿函数返回值类型是bool 
class MyCompare {
public:
	bool operator()(int v1,int v2){
		return v1 > v2;
	}
};

void test01() {
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);

	sort(v.begin(), v.end());
	for (vector<int>::iterator it = v.begin();it != v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;

	//利用仿函数 改变排序规则
	sort(v.begin(), v.end(), MyCompare());//MyCompare() 匿名函数对象

	cout << "---------------------" << endl;
	for (vector<int>::iterator it = v.begin();it != v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}