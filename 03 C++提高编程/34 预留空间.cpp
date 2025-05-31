#include<iostream>
using namespace std;
#include<vector>

/*
	reserve(int len); //容器预留len个元素长度 预留位置不初始化
*/

//利用reserve预留空间
void test01() {
	vector<int>v;
	v.reserve(100000);//预留空间
	int num = 0;//统计开辟次数
	int* p = NULL;
	for (int i = 0;i < 100000;i++) {
		v.push_back(i);
		if (p != &v[0]) {//首地址发生变化 说明又开辟了一次内存
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