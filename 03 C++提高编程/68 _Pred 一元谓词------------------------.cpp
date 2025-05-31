/*
	返回bool类型的仿函数称为谓词
	operator()接受一个参数 一元谓词
	oporator()接受两个参数 二元谓词
*/

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>//find_if

//谓词：仿函数返回值类型是bool 
class GreaterFive {
public:
	bool operator()(int val) {//一个参数 一元谓词
		return val > 5;
	}
};

void test01() {
	vector<int>v;
	for (int i = 0;i < 10;i++) {
		v.push_back(i);
	}

	//查找容器中 有没有大于5的数字
	//GreaterFive() 匿名函数对象 不用再创建类
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
	if (it == v.end()) {
		cout << "没找到" << endl;
	}
	else {
		cout << "找到了大于5的数字为：" << *it << endl;
	}
}

int main() {
	test01();

	system("pause");
	return 0;
}