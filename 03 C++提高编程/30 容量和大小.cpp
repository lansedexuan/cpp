#include<iostream>
using namespace std;
#include<vector>

/*
	empty();		//判空
	capacity();		//容量 capacity>=size
	size();			//元素个数
	resize(int num);//重新指定容器长度 变长以默认值0填充新位置 变短超出长度元素被删除
	resize(int num, elem);//重新指定容器长度 变长以elem值填充新位置 变短超出长度元素被删除
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

	if (v1.empty())//判空
	{
		cout << "v1为空" << endl;
	}
	else {
		cout << "v1不为空" << endl;
		cout << "v1容量为：" << v1.capacity() << endl;//13 动态扩展
		cout << "v1大小为：" << v1.size() << endl;
	}

	v1.resize(15);//重新指定大小
	printVector(v1);

	v1.resize(20,100);
	printVector(v1);

	v1.resize(10);
	printVector(v1);
}

int main() {
	test01();


	system("pause");
	return 0;
}