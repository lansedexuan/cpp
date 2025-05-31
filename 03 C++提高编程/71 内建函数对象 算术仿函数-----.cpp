//#incldue<functional>

/*
	template<class T> T plus<T>	//加法
	template<class T> T minus<T> //减法
	template<class T> T multiplies<T> //乘法
	template<class T> T divides<T> //除法
	template<class T> T modulus<T> //取模
	template<class T> T negate<T> //取反 一元 其余都是二元
*/

#include<iostream>
using namespace std;
#include<functional>

void test01() {
	negate<int>n;
	cout<<n(50)<<endl;//-50
}

void test02() {
	plus<int>p;
	cout << p(10, 20) << endl;
}

int main() {
	test01();
	test02();

	system("pause");
	return 0;
}