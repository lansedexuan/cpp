//reverse(); //��ת����
//sort();	//����

#include<iostream>
#include<list>
using namespace std;
#include<algorithm>

void printList(list<int>& l) {
	for (list<int>::iterator it = l.begin();it != l.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

bool myCompare(int v1,int v2) {
	//����
	//��һ����>�ڶ�����
	return v1 > v2;
}

void test01() {
	list<int>L1;
	L1.push_back(20);
	L1.push_back(10);
	L1.push_back(50);
	L1.push_back(40);
	L1.push_back(30);

	cout << "����ǰ��" << endl;
	printList(L1);

	//���в�֧��������ʵ��������������������ñ�׼�㷨
	//sort(L1.begin(), L1.end());

	//��֧��������ʵ����������� �ڲ����ṩ��Ӧ���㷨
	L1.sort();//��С���� ����

	cout << "�����" << endl;
	printList(L1);

	L1.sort(myCompare);//����
	cout << "�����" << endl;
	printList(L1);
}

int main() {
	test01();

	system("pause");
	return 0;
}