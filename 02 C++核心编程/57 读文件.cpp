#include<iostream>
using namespace std;
#include<fstream>//头文件包含
#include<string>

//文本文件 写文件

void test01() {
	//1 包含头文件 fstream

	//2 创建流对象 input file stream
	ifstream ifs;

	//3 打开文件 判断是否打开成功
	ifs.open("56test.txt", ios::in);

	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
		return;
	}

	//4 读数据

	//第一种
	//char buf[1024] = { 0 };
	//while (ifs>>buf) {
	//	cout << buf << endl;
	//}

	//第二种
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf))) {
	//	cout << buf << endl;
	//}

	//第三种 推荐
	//string buf;
	//while (getline(ifs, buf)) {
	//	cout << buf << endl;
	//}

	//第四种 不太推荐 效率较低
	//char c;
	//while( (c=ifs.get())!=EOF ){//文件尾 end of file
	//	cout << c;
	//}

	//5 关闭文件
	ifs.close();
}

int main() {
	test01();

	system("pause");
	return 0;
}