#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>//��׼�㷨ͷ�ļ�

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

//����֧��������ʵĵ�����������������������sort�㷨��������
//vector deque 

int main() {
	test01();
	system("pause");
	return 0;
}