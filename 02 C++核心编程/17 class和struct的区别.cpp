#include<iostream>
using namespace std;

//class Ĭ�Ϸ���Ȩ�� ˽��
//struct Ĭ�Ϸ���Ȩ�� ����

class C1 {
	int m_A;//Ĭ��˽��
};

struct C2 {
	int m_A;//Ĭ�Ϲ���
};

int main() {
	C1 c1;
	//c1.m_A = 100;˽��
	C2 c2;
	c2.m_A = 100;//����

	system("pause");
	return 0;
}