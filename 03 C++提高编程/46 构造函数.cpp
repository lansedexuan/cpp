#include<iostream>
using namespace std;
#include<list>

/*
	list<T>lst;	//默认构造
	list(beg,end);	//[beg,end)拷贝给自身
	list(n,elem);	//将n给elem拷贝给本身
	list(const list& lst);	//拷贝构造
*/

void printList(const list<int>& L) {
	for (list<int>::const_iterator it = L.begin();it != L.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	list<int>L1;//默认构造
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	//遍历容器
	printList(L1);

	//区间方式构造
	list<int>L2(L1.begin(), L1.end());
	printList(L2);

	//拷贝构造
	list<int>L3(L2);
	printList(L3);

	//n个elem
	list<int>L4(10, 1000);//10个1000
	printList(L4);
}

int main() {
	test01();

	system("pause");
	return 0;
}