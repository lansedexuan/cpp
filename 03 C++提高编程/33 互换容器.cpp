#include<iostream>
using namespace std;
#include<vector>

/*
	swap(vec) 将vec与本身互换
*/

void printVector(vector<int>& v) {
	for (vector<int>::iterator it = v.begin();it != v.end();it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01() {
	vector<int>v1;
	for (int i = 0;i < 10;i++) {
		v1.push_back(i);
	}
	printVector(v1);

	vector<int>v2;
	for (int i = 10;i > 0;i--) {
		v2.push_back(i);
	}
	printVector(v2);

	v2.swap(v1);
	printVector(v1);
	printVector(v2);
}

//swap可收缩内存空间
void test02() {
	vector<int>v;
	for (int i = 0;i < 100000;i++) {
		v.push_back(i);
	}
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小：" << v.size() << endl;

	v.resize(3);//重新指定大小
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小：" << v.size() << endl;


	//收缩内存
	vector<int>(v).swap(v);//vector<int>(v)//匿名对象 初始容量和大小都为3 匿名对象系统后续回收
						   //.swap 容器交换
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小：" << v.size() << endl;
}

int main() {
	test01();
	test02();

	system("pause");
	return 0;
}