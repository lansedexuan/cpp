#include<iostream>
using namespace std;

/*
*   ��ʼ�±��0��ʼ
	string& insert(int pos,const char* s);//�����ַ���
	string& insert(int pos,const string& s);	//�����ַ���
	string& insert(int pos,int n,char c);//ָ��λ�ò���n���ַ�c
	string& erase(int pos,int n = npos);//ɾ����pos��ʼ��n���ַ�
*/

void test01() {
	string str = "hello";
	str.insert(1, "111");
	cout << "str = " << str << endl;

	str.erase(1, 3);
	cout << "str = " << str << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}