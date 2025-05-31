//reverse(); //反转链表
//sort();	//排序

#include<iostream>
#include<list>
using namespace std;
#include<algorithm>

void printList(list<int>& l) {
	for (list<int>::iterator it = l.begin();it != l.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

bool myCompare(int v1,int v2) {
	//降序
	//第一个数>第二个数
	return v1 > v2;
}

void test01() {
	list<int>L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);

	cout << "排序前：" << endl;
	printList(L1);

	//所有不支持随机访问迭代器的容器，不可以用标准算法
	//sort(L1.begin(), L1.end());

	//不支持随机访问迭代器的容器 内部会提供对应的算法
	L1.sort();//从小到大 升序

	cout << "排序后：" << endl;
	printList(L1);

	L1.sort(myCompare);//降序
	cout << "降序后：" << endl;
	printList(L1);
}

int main() {
	test01();

	system("pause");
	return 0;
}