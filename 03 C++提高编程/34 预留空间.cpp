#include<iostream>
using namespace std;
#include<vector>

/*
	reserve(int len); //����Ԥ��len��Ԫ�س��� Ԥ��λ�ò���ʼ��
*/

//����reserveԤ���ռ�
void test01() {
	vector<int>v;
	v.reserve(100000);//Ԥ���ռ�
	int num = 0;//ͳ�ƿ��ٴ���
	int* p = NULL;
	for (int i = 0;i < 100000;i++) {
		v.push_back(i);
		if (p != &v[0]) {//�׵�ַ�����仯 ˵���ֿ�����һ���ڴ�
			p = &v[0];
			num++;
		}
	}
	cout << "num = " << num << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}