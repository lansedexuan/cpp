#include<iostream>
using namespace std;

//�̳з�ʽ


//�����̳�-------------------------------------------------------------
class Base1 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 :public Base1 {
public:
	void func() {
		m_A = 10;//���๫��Ȩ�� ���๫��Ȩ��
		m_B = 10;//���ౣ��Ȩ�� ���ౣ��Ȩ��
		//m_C = 10;//������ʲ���
	}
};

void test01() {
	Son1 s1;
	s1.m_A = 100;
	//s1.m_B = 100;
}

//�����̳�-------------------------------------------------------------
class Base2 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 :protected Base2 {
public:
	void func() {
		m_A = 100;//���๫��Ȩ�� ���ౣ��Ȩ��
		m_B = 100;//���ౣ��Ȩ�� ���ౣ��Ȩ��
		//m_C = 10;//������ʲ���
	}
};

void test02() {
	Son2 s2;
	//s2.m_A = 100;//����Ȩ�� ���ʲ���
	//s2.m_B = 100;
}

//˽�м̳�-------------------------------------------------------------
class Base3 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3 :private Base3 {
public:
	void func() {
		m_A = 100;//���๫��Ȩ�� ����˽��Ȩ��
		m_B = 100;//���ౣ��Ȩ�� ����˽��Ȩ��
		//m_C = 10;//������ʲ���
	}
};

class GrandSon3 :public Son3 {
public:
	void func() {
		//m_A = 100;//m_A�ѱ�Ϊ˽�� �����޷�����
		//m_B = 100;//m_B�ѱ�Ϊ˽��
	}
};

void test03() {
	Son3 s3;
	//s3.m_A = 100;//˽��Ȩ�� ���ʲ���
	//s3.m_B = 100;
}

//--------------------------------------------------------------

int main() {
	test01();

	system("pause");
	return 0;
}