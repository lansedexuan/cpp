#include<iostream>
using namespace std;

//�������������

//�Զ�������
class MyInteger {
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger() {
		m_Num = 0;
	}
	//����ǰ��++�����
	MyInteger &operator++() {//�������� Ϊ��һֱ��һ�����ݽ��в���
		//�Ƚ���++����
		m_Num++;
		//�ٷ�������
		return *this;//thisָ������ *this����������� ��������
	}
	//���غ���++�����
	//int ����ռλ���� ������������ǰ�úͺ���
	MyInteger operator++(int) {//����ֵ���������� �ֲ�������ǰ����ִ������ͷ� ����Ϊ�Ƿ�����
		//�� ��¼��ʱ���
		MyInteger temp = *this;
		//�� ����
		m_Num++;
		//��� ����¼���������
		return temp;
	}
private:
	int m_Num;
};

//����ȫ�ֺ����������������
ostream& operator<<(ostream& cout, MyInteger myint) //�� cout<<p
{
	cout << myint.m_Num;//cout���� ostream &
	return cout;//out����cout: ostream &
}

void test01() {
	MyInteger myint;

	cout << ++myint << endl;//�������������
	cout << myint << endl;
}

void test02() {
	MyInteger myint;

	cout << myint++ << endl;
	cout << myint << endl;
}

//ǰ�õ����������� ���õ�������ֵ

int main() {
	//test01();
	test02();

	system("pause");
	return 0;
}