#include<iostream>
using namespace std;

//c��� char*
//c++����ַ��� string ������һ����

//char* ��һ��ָ�� 
//string��һ���� ���ڷ�װ��char* char*�͵�����

/*
	string();					//����һ�����ַ���
	string(const char* s)		//ʹ���ַ���s��ʼ��
	string(const string& str)	//ʹ��һ��string�����ʼ����һ��string����
	string(int n,char c)		//ʹ��n���ַ���c��ʼ��
*/

void test01() {
	string s1;//Ĭ�Ϲ���

	const char* str = "hello world";
	string s2(str);
	cout << "s2 = " << s2 << endl;

	string s3(s2);
	cout << "s3 = " << s3 << endl;

	string s4(10, 'a');
	cout << "s4 = " << s4 << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}