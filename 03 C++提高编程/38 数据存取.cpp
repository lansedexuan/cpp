#include<iostream>
using namespace std;
#include<deque>

/*
	at(int idx);	//返回索引idx所指数据
	operator[];		//返回索引idx所指数据
	front();		//返回容器中第一个元素
	back();			//返回容器中最后一个元素
*/

void test01() {
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	//通过[]访问
	for (int i = 0;i < d.size();i++) {
		cout << d[i] << " ";//300 200 100 10 20 30
	}
	cout << endl;

	//通过at访问
	for (int i = 0;i < d.size();i++) {
		cout << d.at(i) << " ";//300 200 100 10 20 30
	}
	cout << endl;

	cout << "第一个元素为:" << d.front() << endl;
	cout << "最后一个元素为:" << d.back() << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}