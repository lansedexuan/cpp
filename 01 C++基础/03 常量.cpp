#include<iostream>
using namespace std;

//�����Ķ��巽ʽ
//1 define �곣��
//2 const���εı���

#define Days 7//1

int main() {
	cout << "һ�ܹ��У�" << Days << "��" << endl;//1
	const int month = 12;//2
	cout << "һ�깲�У�" << month << "��" << endl;//2
	system("pause");
	return 0;
}