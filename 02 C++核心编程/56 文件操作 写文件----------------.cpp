#include<iostream>
using namespace std;
#include<fstream>//ͷ�ļ�����

//�ı��ļ� д�ļ�

void test01() {
	//1 ����ͷ�ļ� fstream

	//2 ���������� output file stream
	ofstream ofs;//ofstream д����

	//3 ָ���򿪷�ʽ
	ofs.open("56test.txt",ios::out);

	//4 д����
	ofs << "����������" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���䣺18" << endl;

	//5 �ر��ļ�
	ofs.close();
}

int main() {
	test01();

	system("pause");
	return 0;
}