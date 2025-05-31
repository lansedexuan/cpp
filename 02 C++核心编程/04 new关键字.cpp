#include<iostream>
using namespace std;

//1 new基本语法
int* func() {
	//在堆区创建整形数据
	//new返回是 该类型的指针
	int* p = new int(10);
	return p;
}

//2 在堆区利用new开辟数组
void test() {
	int* arr = new int[10];//10个元素
	for (int i = 0;i < 10;i++) {
		arr[i] = i + 100;
		cout << arr[i] << endl;
	}
	//释放堆区数组 要加[]
	delete[] arr;
}

int main() {
	//1
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//堆区数据由程序员管理和释放
	delete p;
	//cout << *p << endl;
	
	//2
	test();

	system("pause");
	return 0;
}