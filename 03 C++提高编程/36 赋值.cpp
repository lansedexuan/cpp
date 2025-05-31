#include<iostream>
using namespace std;
#include<deque>

//deque& operator=(const deque& deq); //重载=
//assign(beg,end); //左闭右开
//assign(n.elem); //n个elem

void PrintDeque(const deque<int>& d) {//只读
	for (deque<int>::const_iterator it = d.begin();it != d.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	deque<int>d1;
	for (int i = 0;i < 10;i++) {
		d1.push_back(i);
	}
	PrintDeque(d1);

	deque<int>d2;
	d2 = d1;
	PrintDeque(d2);

	deque<int>d3;
	d3.assign(d1.begin(), d1.end());
	PrintDeque(d3);

	deque<int>d4;
	d4.assign(10, 100);
	PrintDeque(d4);
}

int main() {
	test01();

	system("pause");
	return 0;
}