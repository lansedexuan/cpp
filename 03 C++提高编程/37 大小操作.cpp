#include<iostream>
using namespace std;
#include<deque>

/*
	两端插入操作
	push_back(elem);	//容器尾部添加
	push_front(elem);	//容器头部添加
	pop_back();			//删除容器最后一个
	pop_front();		//删除容器第一个
*/

/*
	指定位置操作
	insert(pos,elem);	//在pos位置插入1个elem元素 返回新数据位置
	insert(pos,n,elem); //在pos位置插入n个elem元素 无返回值
	insert(pos,beg,end);//在pos位置插入[beg,end) 无返回值
	clear():			//清空容器所有数据
	erase(beg,end);		//删除[beg,end) 返回下一个数据位置
	erase(pos);			//删除pos位置数据 返回下一个数据的位置
*/

void printDeque(const deque<int>& d) {
	for (deque<int>::const_iterator it = d.begin();it != d.end();it++){
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	deque<int>d1;
	
	//尾插法
	d1.push_back(10);
	d1.push_back(20);

	//头插法
	d1.push_front(100);
	d1.push_front(200);

	printDeque(d1);//200 100 10 20

	//尾删
	d1.pop_back();
	printDeque(d1);//200 100 10

	//头删
	d1.pop_front();
	printDeque(d1);//100 10
}

void test02() {
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);

	printDeque(d1);

	d1.insert(d1.begin(), 1000);//1000 200 100 10 20
	printDeque(d1);

	d1.insert(d1.begin(), 2, 10000);
	printDeque(d1);//10000 10000 1000 200 100 10 20

	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d1.insert(d1.begin(), d2.begin(), d2.end());
	printDeque(d1);//1 2 3 10000 10000 1000 200 100 10 20
}

void test03() {
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);//200 100 10 20

	//删除
	deque<int>::iterator it = d1.begin();
	it++;
	d1.erase(it);//200 10 20
	printDeque(d1);

	//按照区间方式删除
	d1.erase(d1.begin(), d1.end());
	d1.clear();
	printDeque(d1);
}

int main() {
	test01();
	test02();
	test03();
	system("pause");
	return 0;
}