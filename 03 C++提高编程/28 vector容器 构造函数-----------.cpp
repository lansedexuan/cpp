#include<iostream>
using namespace std;
#include<vector>

//vector ��������
//���� ��̬�ռ�
//vector ��̬��չ

//��̬��չ��������ԭ�ռ������¿ռ� ���ǿ������µĸ���ռ�

//vector<T>v;				 //Ĭ�Ϲ���
//vector(v.begin(),v.end()); //ǰ�պ�
//vector(n,elem);			 //��n��elem����������
//vector(const vector& vec); //�������캯��

void printVector(vector<int>&v) {
	for (vector<int>::iterator it = v.begin();it != v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	vector<int>v1;//Ĭ�Ϲ��� �޲ι���
	for (int i = 0;i < 10;i++) {
		v1.push_back(i);
	}
	printVector(v1);

	vector<int>v2(v1.begin(), v1.end());//ͨ�����䷽ʽ����
	printVector(v2);

	vector<int>v3(10, 100);//n��elem����
	printVector(v3);

	vector<int>v4(v3);//��������
	printVector(v4);
}

int main() {
	test01();


	system("pause");
	return 0;
}