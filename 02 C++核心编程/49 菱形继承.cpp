#include<iostream>
using namespace std;

//���μ̳�

//������
class Animal {
public:
	int m_Age;
};

//������̳� ���Խ�����μ̳е�����
//�̳�֮ǰ ���Ϲؼ��� Virtual ��Ϊ��̳�
// vbptr�������ָ�� ָ�� vbtable��������
// v-virtual
// b-base
// ptr-pointer

//����
class Sheep:virtual public Animal {
public:

};

//����
class Tuo :virtual public Animal{
public:

};

//������
class SheepTuo :public Sheep, public Tuo {

};

void test01() {
	SheepTuo st;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	//���μ̳� ����������ӵ����ͬ������ ��Ҫ������������
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age<< endl;
	cout << "st.m_Age = " << st.m_Age << endl;
	//���μ̳е������������� ��Դ�˷�
}

int main() {
	test01();

	system("pause");
	return 0;
}