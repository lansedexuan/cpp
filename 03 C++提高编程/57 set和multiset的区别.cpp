/*
	set�����Բ����ظ����� multiset����
	set�������ݻ᷵�ز����� ��ʾ�Ƿ����ɹ�
	multiset���������� ��˿��Բ����ظ�����
*/

/*
	find(key); //���� ����Ԫ�صĵ����� ������ ����set.end()
	count(key); //ͳ��keyԪ�صĸ��� set:0��1 multiset:���ܻ�>1
*/

#include<iostream>
using namespace std;
#include<set>

void test01() {
	set<int>s1;

	pair<set<int>::iterator, bool>ret=s1.insert(10);
	if (ret.second) {
		cout << "��һ�β���ɹ�" << endl;
	}
	else {
		cout << "��һ�β���ʧ��" << endl;
	}
	
	ret= s1.insert(10);
	if (ret.second) {
		cout << "�ڶ��β���ɹ�" << endl;
	}
	else {
		cout << "�ڶ��β���ʧ��" << endl;
	}

	multiset<int>ms;
	ms.insert(10);
	ms.insert(10);
	ms.insert(10);
	for (multiset<int>::iterator it = ms.begin();it != ms.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {
	test01();
	system("pause");
	return 0;
} 