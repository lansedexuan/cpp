#include<iostream>
using namespace std;

//���ѧ����
class Student {
public:

	//���е����Ժ���Ϊ ����ͳһ��Ϊ��Ա
	//���ԣ� ��Ա���� ���� ��Ա����
	//��Ϊ�� ��Ա���� ���� ��Ա����

	//����
	string s_name;//����
	int s_id;//ѧ��
	//��Ϊ�� ��ʾ������ѧ��
	void showStudent() {
		cout << "������" << s_name << " ѧ�ţ�" << s_id << endl;
	}
	//��Ϊ�� ��������ֵ
	void setName(string name) {
		s_name = name;
	}
	//��Ϊ�� ��������ֵ
	void setId(int id) {
		s_id = id;
	}
};

int main() {
	//����һ������ѧ�� ʵ��������
	Student s;
	//s.s_name = "����";
	s.setName("����");
	//s.s_id = 1;
	s.setId(1);
	s.showStudent();

	system("pause");
	return 0;
}