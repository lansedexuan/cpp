/*
	template<class T> bool logical_and<T>		//与
	template<class T> bool logical_or<T>		//或
	template<class T> bool logical_not<T>		//非
*/

#include<iostream>
using namespace std;
#include<functional>
#include<vector>
#include<algorithm>



void test01() {
	vector<bool>v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(true);

	for (vector<bool>::iterator it = v.begin();it != v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;

	//利用逻辑非 将v搬运到v2中并取反
	vector<bool>v2;
	v2.resize(v.size());//设定目标容器空间
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());//transform 搬运 需要目标容器的空间
	for (vector<bool>::iterator it = v2.begin();it != v2.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}


int main() {
	test01();

	system("pause");
	return 0;
}