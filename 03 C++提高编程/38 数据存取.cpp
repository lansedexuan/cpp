#include<iostream>
using namespace std;
#include<deque>

/*
	at(int idx);	//��������idx��ָ����
	operator[];		//��������idx��ָ����
	front();		//���������е�һ��Ԫ��
	back();			//�������������һ��Ԫ��
*/

void test01() {
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	//ͨ��[]����
	for (int i = 0;i < d.size();i++) {
		cout << d[i] << " ";//300 200 100 10 20 30
	}
	cout << endl;

	//ͨ��at����
	for (int i = 0;i < d.size();i++) {
		cout << d.at(i) << " ";//300 200 100 10 20 30
	}
	cout << endl;

	cout << "��һ��Ԫ��Ϊ:" << d.front() << endl;
	cout << "���һ��Ԫ��Ϊ:" << d.back() << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
}