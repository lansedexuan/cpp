//所有元素在插入时自动被排序

//set/multiset属于关联式容器 底层结构为二叉树

//set不允许容器中有重复元素
//multiset允许容器中有重复元素
//include<set>即可

//构造
//	set<T>st;	//默认构造
//	set(const set& st);	//拷贝构造

//赋值
//	set& operator=(const set& st); //重载等号

#include<iostream>
using namespace std;
#include<set>

void printSet(set<int>& s) {
	for (set<int>::iterator it = s.begin();it != s.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	set<int>s1;

	//插入数据只有insert方式
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);

	//所有元素插入时自动排序
	//不允许插入重复数据
	printSet(s1);

	//拷贝构造
	set<int>s2(s1);
	printSet(s2);
	
	set<int>s3;
	s3 = s2;
	printSet(s3);
}

int main() {
	test01();
	system("pause");
	return 0;
}