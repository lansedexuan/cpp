#include<iostream>
using namespace std;

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��һ��Ԫ��: " << arr[0] << endl;

	int* p = arr;//����������������׵�ַ
	cout << "����ָ�������������һ��Ԫ��: " << *p << endl;
	p++;//������4���ֽ� = *p+1
	cout << "����ָ������������ڶ���Ԫ��: " << *p << endl;

	cout << "����ָ���������" << endl;
	int* p2 = arr;
	for (int i = 0;i < 10;i++) {
		//cout << arr[i] << endl;
		cout << *p2 << endl;
		p2++;
	}

	system("pause");
	return 0;
}