#include<iostream>
using namespace std;
#include<vector>

/*
	empty();		//�п�
	capacity();		//���� capacity>=size
	size();			//Ԫ�ظ���
	resize(int num);//����ָ���������� �䳤��Ĭ��ֵ0�����λ�� ��̳�������Ԫ�ر�ɾ��
	resize(int num, elem);//����ָ���������� �䳤��elemֵ�����λ�� ��̳�������Ԫ�ر�ɾ��
*/

void printVector(vector<int>& v) {
	for (vector<int>::iterator it = v.begin();it != v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	vector<int>v1;
	for (int i = 0;i < 10;i++) {
		v1.push_back(i);
	}
	printVector(v1);

	if (v1.empty())//�п�
	{
		cout << "v1Ϊ��" << endl;
	}
	else {
		cout << "v1��Ϊ��" << endl;
		cout << "v1����Ϊ��" << v1.capacity() << endl;//13 ��̬��չ
		cout << "v1��СΪ��" << v1.size() << endl;
	}

	v1.resize(15);//����ָ����С
	printVector(v1);

	v1.resize(20,100);
	printVector(v1);

	v1.resize(10);
	printVector(v1);
}

int main() {
	test01();


	system("pause");
	return 0;
}