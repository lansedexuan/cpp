#include<iostream>
using namespace std;

//class 默认访问权限 私有
//struct 默认访问权限 公共

class C1 {
	int m_A;//默认私有
};

struct C2 {
	int m_A;//默认公共
};

int main() {
	C1 c1;
	//c1.m_A = 100;私有
	C2 c2;
	c2.m_A = 100;//公共

	system("pause");
	return 0;
}