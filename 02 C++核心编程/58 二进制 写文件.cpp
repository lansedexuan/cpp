#include<iostream>
using namespace std;
#include<fstream>

//二进制文件 写文件
class Person {
public:
	char m_Name[64];
	int m_Age;
};

void test01() {
	//1 头文件

	//2 创建流对象
	ofstream ofs;

	//3 打开文件
	ofs.open("person.txt", ios::out | ios::binary);//写 二进制

	//4 写文件
	Person p = { "张三",18 };
	ofs.write((const char*)&p, sizeof(Person));

	//5 关闭
	ofs.close();
}

int main() {
	test01();

	system("pause");
	return 0;
}