//	bool binary_search(iterator beg,iterator end,value);

/*
	���ֲ���
	����ָ��Ԫ�� ��ture ��false
	������������ �������в�����
*/

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void test01() {
	vector<int>v;
	for (int i = 0;i < 10;i++) {
		v.push_back(i);
	}
	bool ret = binary_search(v.begin(), v.end(), 9);
	if (ret) {
		cout << "�ҵ���" << endl;
	}
	else {
		cout << "û���ҵ�" << endl;
	}
}

int main() {
	test01();

	system("pause");
	return 0;
} 