/*
	find(key); //���� ����Ԫ�صĵ����� ������ ����set.end()
	count(key); //ͳ��keyԪ�صĸ��� set:0��1 multiset:���ܻ�>1 
*/

#include<iostream>
using namespace std;
#include<set>

//����
void test01() {
	set<int>s1;

	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	set<int>::iterator pos = s1.find(300);
	if (pos != s1.end()) {
		cout << "�ҵ�Ԫ�أ�" << *pos << endl;
	}
	else {
		cout << "δ�ҵ�Ԫ��" << endl;
	}


}

//ͳ��
void test02() {
	set<int>s1;

	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	s1.insert(30);
	s1.insert(30);
	s1.insert(30);

	int num1 = s1.count(30);
	cout << "num1 = " << num1 << endl;//����set ͳ�ƽ��Ҫô0Ҫô1

	int num2 = s1.count(300);
	cout << "num2 = " << num2 << endl;
}

int main() {
	test02();
	system("pause");
	return 0;
}