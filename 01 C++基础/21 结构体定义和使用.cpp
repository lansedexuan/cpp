#include<iostream>
using namespace std;

int main() {
	//�﷨�� struct �������� { ��Ա�б� }

	//1 ����ѧ������
	struct Student {
		//��Ա�б�
		string name;
		int age;
		int score;
	} s3;//2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����

	//2 ͨ��ѧ�����ʹ�������ѧ�� 3�ַ��� struct�ؼ��ֿ���ʡ��
	//2.1 struct Student s1
	struct Student s1;// Student s1Ҳ��
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;
	cout << "������" << s1.name << " ���䣺" << s1.age << " ������" << s1.score << endl;

	//2.2 struct Student s2 = {...}
	struct Student s2 = { "����",19,80 };// Student s2Ҳ��
	cout << "������" << s2.name << " ���䣺" << s2.age << " ������" << s2.score << endl;

	/*2.3 
	struct Student {
		...
	} s3
	*/
	s3.name = "����";
	s3.age = 20;
	s3.score = 90;
	cout << "������" << s3.name << " ���䣺" << s3.age << " ������" << s3.score << endl;

	system("pause");
	return 0;
}

