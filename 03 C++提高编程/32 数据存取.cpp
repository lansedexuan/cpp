#include<iostream>
using namespace std;
#include<vector>

/*
	at(int idx);//��������idx��ָ������
	operator[]��//��������idx��ָ������
	front();	//���������е�һ������Ԫ��
	back();		//�������������һ������Ԫ��
*/


void test01() {
	vector<int>v1;
	for (int i = 0;i < 10;i++) {
		v1.push_back(i);
	}
	for (int i = 0;i < v1.size();i++) {
		cout << v1[i] << " ";//����[]����Ԫ��
	}
	cout << endl;
	for (int i = 0;i < v1.size();i++) {
		cout << v1.at(i) << " ";
	}
	cout << endl;

	cout << "��һ��Ԫ�أ�" << v1.front() << endl;
	cout << "���һ��Ԫ�أ�" << v1.back() << endl;
}

int main() {
	test01();


	system("pause");
	return 0;
}