/*
	����bool���͵ķº�����Ϊν��
	operator()����һ������ һԪν��
	oporator()������������ ��Ԫν��
*/

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>//sort

//ν�ʣ��º�������ֵ������bool 
class MyCompare {
public:
	bool operator()(int v1,int v2){
		return v1 > v2;
	}
};

void test01() {
	vector<int>v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);

	sort(v.begin(), v.end());
	for (vector<int>::iterator it = v.begin();it != v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;

	//���÷º��� �ı��������
	sort(v.begin(), v.end(), MyCompare());//MyCompare() ������������

	cout << "---------------------" << endl;
	for (vector<int>::iterator it = v.begin();it != v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}