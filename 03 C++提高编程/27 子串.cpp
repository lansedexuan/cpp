#include<iostream>
using namespace std;

//string substr(int pos=0,int n=npos) const;//������pos��ʼ��n���ַ���ɵ��ַ���

void test01() {
	string str = "abcdef";

	string subStr = str.substr(1, 3);

	cout << "subStr = " << subStr << endl;
}

void test02() {
	string email = "zhangsan@sina.com";

	//���ʼ���ȡ�û�����Ϣ
	int pos = email.find("@");
	cout << pos << endl;

	string usrName = email.substr(0, pos );
	cout << usrName << endl;
}

int main() {
	test01();
	test02();

	system("pause");
	return 0;
}