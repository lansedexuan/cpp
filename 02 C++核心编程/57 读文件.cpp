#include<iostream>
using namespace std;
#include<fstream>//ͷ�ļ�����
#include<string>

//�ı��ļ� д�ļ�

void test01() {
	//1 ����ͷ�ļ� fstream

	//2 ���������� input file stream
	ifstream ifs;

	//3 ���ļ� �ж��Ƿ�򿪳ɹ�
	ifs.open("56test.txt", ios::in);

	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	//4 ������

	//��һ��
	//char buf[1024] = { 0 };
	//while (ifs>>buf) {
	//	cout << buf << endl;
	//}

	//�ڶ���
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf))) {
	//	cout << buf << endl;
	//}

	//������ �Ƽ�
	//string buf;
	//while (getline(ifs, buf)) {
	//	cout << buf << endl;
	//}

	//������ ��̫�Ƽ� Ч�ʽϵ�
	//char c;
	//while( (c=ifs.get())!=EOF ){//�ļ�β end of file
	//	cout << c;
	//}

	//5 �ر��ļ�
	ifs.close();
}

int main() {
	test01();

	system("pause");
	return 0;
}