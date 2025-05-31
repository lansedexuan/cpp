/*
	sort			//����
	random_shuffle	//ϴ��
	merge			//�ϲ�
	reverse			//��ת
*/

// sort(iterator beg,iterator end,_Pred);
// bool _Pred

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<functional>//greater

void MyPrint(int val) {
	cout << val << " ";
}

void test01() {
	vector<int>v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), MyPrint);
	cout << endl;

	sort(v.begin(), v.end(),greater<int>());//����
	for_each(v.begin(), v.end(), MyPrint);
	cout << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}