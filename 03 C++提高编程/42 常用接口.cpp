#include<iostream>
using namespace std;
#include<stack>

//���캯����
//stack<T>stk; //Ĭ�Ϲ���
//stack(const stack& stk); //�������캯��

//��ֵ
//stack& operator=(const stack& stk); //����=

//���ݴ�ȡ
//push(elem); //ջ�����Ԫ��
//pop(); //ջ���Ƴ���һ��Ԫ��
//top(); //����ջ��Ԫ��

//��С����
//empty(); //�п�
//size(); //����ջ�Ĵ�С

void test01() {
	stack<int>s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	//ֻ��ջ��Ϊ�� �鿴ջ�� ���ҳ�ջ
	while (!s.empty()) {
		cout << "ջ��Ԫ�أ�" << s.top() << endl;
		s.pop();
	}
	cout << "ջ�Ĵ�С��" << s.size() << endl;
	
}

int main() {
	test01();

	system("pause");
	return 0;
}