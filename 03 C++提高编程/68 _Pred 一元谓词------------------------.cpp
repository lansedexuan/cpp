/*
	����bool���͵ķº�����Ϊν��
	operator()����һ������ һԪν��
	oporator()������������ ��Ԫν��
*/

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>//find_if

//ν�ʣ��º�������ֵ������bool 
class GreaterFive {
public:
	bool operator()(int val) {//һ������ һԪν��
		return val > 5;
	}
};

void test01() {
	vector<int>v;
	for (int i = 0;i < 10;i++) {
		v.push_back(i);
	}

	//���������� ��û�д���5������
	//GreaterFive() ������������ �����ٴ�����
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end()) {
		cout << "û�ҵ�" << endl;
	}
	else {
		cout << "�ҵ��˴���5������Ϊ��" << *it << endl;
	}
}

int main() {
	test01();

	system("pause");
	return 0;
}