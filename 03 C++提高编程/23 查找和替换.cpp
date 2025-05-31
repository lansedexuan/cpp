#include<iostream>
using namespace std;

/*
	int find(const string& str,int pos=0) const;//查找str第一次出现位置 从pos开始查找 返回找到的下标
	int find(cosnt char* s,int pos=0) const;	//查找s第一次出现位置 从pos开始查找 返回找到的下标
	int find(const char* s,int pos,int n) const;//从pos位置查找s的前n个字符第一次位置 返回找到的下标
	int find(const char c,int pos=0) const;		//查找字符c第一次出现位置 返回找到的下标

	int rfind(const string& str,int pos=nops) const; //查找str最后一次出现位置 从pos开始查找
	int rfind(const char* s,int pos=nops) const;	 //查找s最后一次出现位置 从pos开始查找
	int rfind(const char* s,int pos,int n) const;	 //从pos查找s的前n个字符最后一次位置
	int rfind(const char c,int pos=0) const;		 //查找字符c最后一次出现位置

	string& replace(int pos,int n,const string& str);//替换从pos开始n个字符为字符串str
	string& replace(int pos,int n,const char* s);	 //替换从pos开始n个字符为字符串s
*/

//1 查找
void test01() {
	string str1 = "abcdefgde";
	int pos = str1.find("de");
	cout << "pos = " << pos << endl;//pos = 3 //0 1 2 3

	pos = str1.find("df");
	cout << "pos = " << pos << endl;//-1

	pos = str1.rfind("de");
	cout << "pos = " << pos << endl;//7

}

//2 替换
void test02() {
	string str1 = "abcdefg";
	str1.replace(1, 3, "1111");//从1号位置3个字符 替换为字符串1111 
	cout << "str1 =" << str1 << endl;
}

int main() {
	test01();
	test02();

	system("pause");
	return 0;
}