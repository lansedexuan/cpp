#include<iostream>
using namespace std;

class Building {
	//goodGayȫ�ֺ�����Building�ĺ����ѣ����Է���Building��˽�еĳ�Ա
	friend void goodGay(Building* building);
public:
	Building() {
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}

	string m_SittingRoom;

private:
	string m_BedRoom;
};

//ȫ�ֺ���
void goodGay(Building *building) {
	cout << "ȫ�ֺ������ڷ��ʣ�" << building->m_SittingRoom << endl;
	cout << "ȫ�ֺ������ڷ��ʣ�" << building->m_BedRoom << endl;
}

void test01() {
	Building building;
	goodGay(&building);
}

int main() {
	test01();

	system("pause");
	return 0;
}