#include<iostream>
using namespace std;

/* ƴ�Ӳ���
	string& operator+=(const char* str);//����+=
	string& operator+=(const char c);//����+=
	string& operator+=(const string& str);//����+=
	string& append(const char* s);//���ַ���s���ӵ���ǰ�ַ�����β
	string& append(const char* s,int n);//���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
	string& append(const string& s);//����+=
	string& append(const string& s,int pos,int n);//���ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β
*/

void test01() {
	string str1="��";
	str1 += "������Ϸ";
	cout << "str1 = " << str1 << endl;

	str1 += ':';
	cout << "str1 = " << str1 << endl;

	string str2="LOL DNF";
	str1 += str2;
	cout << "str1 = " << str1 << endl;

	string str3 = "I";
	str3.append(" love ");
	cout << "str3 = " << str3 << endl;

	str3.append("game: abcde", 5);
	cout << "str3 = " << str3 << endl;

	//str3.append(str2);
	//cout << "str3 = " << str3 << endl;

	str3.append(str2, 4, 3);//�ӵ�4��λ�ý�ȡ3��
	cout << "str3 = " << str3 << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}