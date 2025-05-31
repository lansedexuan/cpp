#include<iostream>
using namespace std;

/* ¸³Öµ²Ù×÷
	string& operator=(const char* s);//char*ÀàÐÍ×Ö·û´® ¸³Öµ
	string& operator=(const string& s);//×Ö·û´®s ¸³Öµ
	string& operator=(char c);//×Ö·û ¸³Öµ
	string& assign(const char* s);//×Ö·û´®s ¸³Öµ
	string& assign(const char* s,int n);//×Ö·û´®sÇ°n¸ö×Ö¶Î ¸³Öµ
	string& assign(const string& s);//×Ö·û´®s ¸³Öµ
	string& assign(int n,char c);//n¸ö×Ö·ûc ¸³Öµ
*/

void test01() {
	string str1;
	str1 = "hello world";
	cout << "str1 = " << str1 << endl;

	string str2;
	str2 = str1;
	cout << "str2 = " << str2 << endl;

	string str3;
	str3 = 'a';
	cout << "str3 = " << str3 << endl;

	string str4;
	str4.assign("hello C++");
	cout << "str4 = " << str4 << endl;

	string str5;
	str5.assign("hello C++",5);//×Ö·û´®Ç°5¸ö×Ö·û
	cout << "str5 = " << str5 << endl;

	string str6;
	str6.assign(str5);
	cout << "str6 = " << str6 << endl;

	string str7;
	str7.assign(5, 'h');//5¸ö×Ö·û
	cout << "str7 = " << str7 << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}