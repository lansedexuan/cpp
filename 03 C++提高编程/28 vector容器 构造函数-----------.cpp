#include<iostream>
using namespace std;
#include<vector>

//vector 单端数组
//数组 静态空间
//vector 动态扩展

//动态扩展：不是在原空间续接新空间 而是拷贝到新的更大空间

//vector<T>v;				 //默认构造
//vector(v.begin(),v.end()); //前闭后开
//vector(n,elem);			 //将n个elem拷贝给本身
//vector(const vector& vec); //拷贝构造函数

void printVector(vector<int>&v) {
	for (vector<int>::iterator it = v.begin();it != v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	vector<int>v1;//默认构造 无参构造
	for (int i = 0;i < 10;i++) {
		v1.push_back(i);
	}
	printVector(v1);

	vector<int>v2(v1.begin(), v1.end());//通过区间方式构造
	printVector(v2);

	vector<int>v3(10, 100);//n个elem构造
	printVector(v3);

	vector<int>v4(v3);//拷贝构造
	printVector(v4);
}

int main() {
	test01();


	system("pause");
	return 0;
}