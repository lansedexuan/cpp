#include<iostream>
using namespace std;
#include<deque>

//双端容器

//deque和vector的区别
//vector对于头部的插入删除效率低 数据量越大 效率越低
//deque对于头部的插入删除速度比vector快
//vector访问元素时速度比deque快

//	deque<T>degT;//默认构造
//	deque(beg,end);//构造函数将左闭右开区间中的元素拷贝给本身
//	deque(n.elem);//构造函数将n个elem拷贝给本身
//	deque(const deque& deq);//拷贝构造函数

void PrintDeque(const deque<int>& d) {//只读
	for (deque<int>::const_iterator it = d.begin();it != d.end();it++) {
		//*it = 100;//不可修改
		cout << *it << " " ;
	}
	cout << endl;
}

void test01() {
	deque<int>d1;
	for (int i = 0;i < 10;i++) {
		d1.push_back(i);
	}
	PrintDeque(d1);

	deque<int>d2(d1.begin(), d1.end());
	PrintDeque(d2);

	deque<int>d3(10, 100);//10个100
	PrintDeque(d3);

	deque<int>d4(d3);
	PrintDeque(d4);
}

int main() {
	test01();

	system("pause");
	return 0;
}