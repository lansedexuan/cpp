#include<iostream>
using namespace std;

//ռλ����
//����ֵ���� ���������������ͣ�

void func(int a,int = 10) {//ռλ������������Ĭ�ϲ���
	cout << "This is a function" << endl;
}

int main() {
	//func(10,5);
	func(10 );
	
	system("pause");
	return 0;
}