#include<iostream>
using namespace std;

//1 new�����﷨
int* func() {
	//�ڶ���������������
	//new������ �����͵�ָ��
	int* p = new int(10);
	return p;
}

//2 �ڶ�������new��������
void test() {
	int* arr = new int[10];//10��Ԫ��
	for (int i = 0;i < 10;i++) {
		arr[i] = i + 100;
		cout << arr[i] << endl;
	}
	//�ͷŶ������� Ҫ��[]
	delete[] arr;
}

int main() {
	//1
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//���������ɳ���Ա������ͷ�
	delete p;
	//cout << *p << endl;
	
	//2
	test();

	system("pause");
	return 0;
}