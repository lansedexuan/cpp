#include<iostream>
using namespace std;

const double PI = 3.14;
//���һ��԰�࣬��԰���ܳ�
//�ܳ�=2*pi*�뾶

//class�������һ����: class + ����
class Circle {
	//0 ����Ȩ�ޣ� ����Ȩ��
public:
	//1 ���ԣ� �뾶
	int r;
	//2 ��Ϊ�� ��ȡ԰���ܳ�
	double calculate() {
		return 2 * PI * r;
	}
};

int main() {
	//ͨ��԰�ഴ�������԰������
	Circle c;//ʵ������ ͨ��һ���ഴ��һ������Ĺ���
	//��԰���� �����Խ��и�ֵ
	c.r = 10;
	//62.8
	cout << "԰���ܳ�Ϊ��" << c.calculate() << endl;
	system("pause");
	return 0;
}