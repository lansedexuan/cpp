#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>//标准算法头文件

/*
	sort(iterator beg,iterator end)
*/

void printDeque(const deque<int>& d) {
	for (deque<int>::const_iterator it = d.begin();it != d.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	printDeque(d);//300 200 100 10 20 30

	sort(d.begin(),d.end());//#include<algorithm>
	printDeque(d);
}

//对于支持随机访问的迭代器的容器，都可以利用sort算法进行排序
//vector deque 

int main() {
	test01();
	system("pause");
	return 0;
}