#include<iostream>
using namespace std;

//1 �����Լ����ƶ�дȨ��
//2 ����д���Լ���������Ч��

class Person {
public:
	//1 ��
	string getName() {
		return m_Name;
	}
	//1 д
	void setName(string name) {
		m_Name = name;
	}

	//2 ��
	int getAge() {
		return m_Age;
	}
	//2 д 0-150
	void setAge(int age) {
		if (age < 0 || age>150) {
			cout << "������������" << endl;
			return;
		}
		m_Age = age;
	}

	//3 
	void setIdol(string Idol) {
		m_Idol = Idol;
	}

private:
	string m_Name;//1 �ɶ���д

	int m_Age = 18;//2 ֻ�� д��0-150

	string m_Idol;//3 ֻд
};

int main() {
	Person p;

	//1
	p.setName("����");
	cout << "������ " << p.getName() << endl;

	//2
	p.setAge(160);
	cout << "���䣺 " << p.getAge() << endl;

	//3
	p.setIdol("С��");
	//cout << "���䣺 " << p.getIdol() << endl; //ֻд �����ʲ���

	system("pause");
	return 0;
}