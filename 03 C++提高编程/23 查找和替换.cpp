#include<iostream>
using namespace std;

/*
	int find(const string& str,int pos=0) const;//����str��һ�γ���λ�� ��pos��ʼ���� �����ҵ����±�
	int find(cosnt char* s,int pos=0) const;	//����s��һ�γ���λ�� ��pos��ʼ���� �����ҵ����±�
	int find(const char* s,int pos,int n) const;//��posλ�ò���s��ǰn���ַ���һ��λ�� �����ҵ����±�
	int find(const char c,int pos=0) const;		//�����ַ�c��һ�γ���λ�� �����ҵ����±�

	int rfind(const string& str,int pos=nops) const; //����str���һ�γ���λ�� ��pos��ʼ����
	int rfind(const char* s,int pos=nops) const;	 //����s���һ�γ���λ�� ��pos��ʼ����
	int rfind(const char* s,int pos,int n) const;	 //��pos����s��ǰn���ַ����һ��λ��
	int rfind(const char c,int pos=0) const;		 //�����ַ�c���һ�γ���λ��

	string& replace(int pos,int n,const string& str);//�滻��pos��ʼn���ַ�Ϊ�ַ���str
	string& replace(int pos,int n,const char* s);	 //�滻��pos��ʼn���ַ�Ϊ�ַ���s
*/

//1 ����
void test01() {
	string str1 = "abcdefgde";
	int pos = str1.find("de");
	cout << "pos = " << pos << endl;//pos = 3 //0 1 2 3

	pos = str1.find("df");
	cout << "pos = " << pos << endl;//-1

	pos = str1.rfind("de");
	cout << "pos = " << pos << endl;//7

}

//2 �滻
void test02() {
	string str1 = "abcdefg";
	str1.replace(1, 3, "1111");//��1��λ��3���ַ� �滻Ϊ�ַ���1111 
	cout << "str1 =" << str1 << endl;
}

int main() {
	test01();
	test02();

	system("pause");
	return 0;
}