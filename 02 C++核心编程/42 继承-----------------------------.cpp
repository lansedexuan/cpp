#include<iostream>
using namespace std;

//��ͨʵ��ҳ��

//javaҳ��
//class Java {
//public:
//	void header() {
//		cout << "��ҳ ������ ��¼ ע�� ������ͷ����" << endl;
//	}
//	void footer() {
//		cout << "�������� �������� վ�ڵ�ͼ �������ײ���" << endl;
//	}
//	void lefter() {
//		cout << "Java Python C++ �����������б�" << endl;
//	}
//	void content() {
//		cout << "Javaѧ����Ƶ " << endl;
//	}
//};
//
////pythonҳ��
//class Python {
//public:
//	void header() {
//		cout << "��ҳ ������ ��¼ ע�� ������ͷ����" << endl;
//	}
//	void footer() {
//		cout << "�������� �������� վ�ڵ�ͼ �������ײ���" << endl;
//	}
//	void lefter() {
//		cout << "Java Python C++ �����������б�" << endl;
//	}
//	void content() {
//		cout << "Pythonѧ����Ƶ " << endl;
//	}
//};
//
////pythonҳ��
//class CPP {
//public:
//	void header() {
//		cout << "��ҳ ������ ��¼ ע�� ������ͷ����" << endl;
//	}
//	void footer() {
//		cout << "�������� �������� վ�ڵ�ͼ �������ײ���" << endl;
//	}
//	void lefter() {
//		cout << "Java Python C++ �����������б�" << endl;
//	}
//	void content() {
//		cout << "C++ѧ����Ƶ " << endl;
//	}
//};
//


//�̳�ʵ��
//�﷨��
//	class ���ࣺ�̳з�ʽ ����

//���ࣺ������
//���ࣺ����

//����ҳ��
class BasePage {
public:
	void header() {
		cout << "��ҳ ������ ��¼ ע�� ������ͷ����" << endl;
	}
	void footer() {
		cout << "�������� �������� վ�ڵ�ͼ �������ײ���" << endl;
	}
	void lefter() {
		cout << "Java Python C++ �����������б�" << endl;
	}
};

//Javaҳ��
class Java :public BasePage {
public:
	void content() {
		cout << "javaѧ����Ƶ " << endl;
	}
};

//Pythonҳ��
class Python :public BasePage {
public:
	void content() {
		cout << "pythonѧ����Ƶ " << endl;
	}
};

//CPPҳ��
class CPP :public BasePage {
public:
	void content() {
		cout << "cppѧ����Ƶ " << endl;
	}
};

void test01() {
	cout << "Java������Ƶҳ�����£�" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.lefter();
	ja.content();

	cout << "-------------------" << endl;
	cout << "Python������Ƶҳ�����£�" << endl;
	Python py;
	py.header();
	py.footer();
	py.lefter();
	py.content();

	cout << "-------------------" << endl;
	cout << "C++������Ƶҳ�����£�" << endl;
	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.lefter();
	cpp.content();
}

int main() {
	test01();

	system("pause");
	return 0;
}