#include<iostream>
using namespace std;

//ʵ��ͨ�� �������������ĺ���
//���� �Ӵ�С
//�㷨 ѡ��
//���� char���� int����

//����ģ��
template<class T>
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

//�����㷨
template<class T>
void mySort(T arr[],int len) {
	for (int i = 0;i < len;i++) {
		int max = i;//�϶����ֵ���±�
		for (int j = i + 1;j < len;j++) {
			if (arr[max] < arr[j]) {
				max = j;//�������ֵ�±�
			}
		}
		if (max != i) {
			//����max��i�±��Ԫ��
			mySwap(arr[max], arr[i]);
		}
	}
}

//��ӡ����ģ��
template<class T>
void printArr(T arr[], int len) {
	for (int i = 0;i < len;i++) {
		cout << arr[i] << " ";
	}
}

void test01() {
	char charArr[] = "badcfe";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArr(charArr, num);
}

void test02() {
	int intArr[] = { 7,5,1,3,9,2,4,6,8 };
	int num = sizeof(intArr) / sizeof(int);
	mySort(intArr, num);
	printArr(intArr, num);
}

int main() {
	test01();
	test02();

	system("pause");
	return 0;
}