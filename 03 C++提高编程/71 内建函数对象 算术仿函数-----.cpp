//#incldue<functional>

/*
	template<class T> T plus<T>	//�ӷ�
	template<class T> T minus<T> //����
	template<class T> T multiplies<T> //�˷�
	template<class T> T divides<T> //����
	template<class T> T modulus<T> //ȡģ
	template<class T> T negate<T> //ȡ�� һԪ ���඼�Ƕ�Ԫ
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