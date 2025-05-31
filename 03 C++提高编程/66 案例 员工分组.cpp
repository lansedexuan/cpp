/*
	10��Ա��
	Ա����Ϣ������ �������
	���ţ��߻� ���� �з�
	�����10��Ա�����䲿�ź͹���
	ͨ��multimmap���� key(���ű�ţ�value(Ա����
	�ֲ�����ʾԱ����Ϣ
*/

#define CEHUA 0
#define MEISHU 1
#define YANFA 2

/*
	����Ա�� �ŵ�vector��
	����vector �������
	����� ��������Ϊkey Ա����Ϊvalue ����multimap
	�ֲ�����ʾԱ����Ϣ
*/

#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<ctime>

class Worker {
public:
	string m_Name;
	int m_Salary;
};

void createWorker(vector<Worker>& v) {
	string nameSpeed = "ABCDEFGHIJ";
	for (int i = 0;i < 10;i++) {
		Worker worker;
		worker.m_Name = "Ա��";
		worker.m_Name += nameSpeed[i];

		worker.m_Salary = rand() % 10000 + 10000;//10000-19999
		v.push_back(worker);
	}
}

void setGroup(vector<Worker>& v, multimap<int, Worker>& m) {
	for (vector<Worker>::iterator it = v.begin();it != v.end();it++) {
		int deptId = rand() % 3;//0-2
		m.insert(make_pair(deptId,*it));//���� Ա��
	}
}

void showWorkerByGroup(multimap<int, Worker>& m) {
	cout << "�߻����ţ�" << endl;
	multimap<int, Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA);//ͳ�ƾ�������
	int index = 0;
	for (;pos != m.end() && index < count;pos++, index++) {
		cout << "����:" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
	}

	cout << "----------------------" << endl;
	cout << "�������ţ�" << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU);//ͳ�ƾ�������
	index = 0;
	for (;pos != m.end() && index < count;pos++, index++) {
		cout << "����:" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
	}

	cout << "----------------------" << endl;
	cout << "�з����ţ�" << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA);//ͳ�ƾ�������
	index = 0;
	for (;pos != m.end() && index < count;pos++, index++) {
		cout << "����:" << pos->second.m_Name << " ���ʣ�" << pos->second.m_Salary << endl;
	}
}

int main() {
	srand((unsigned int)time(NULL));
	//1 ����Ա��
	vector<Worker>vWorker;
	createWorker(vWorker);

	//����
	for (vector<Worker>::iterator it = vWorker.begin();it != vWorker.end();it++) {
		cout << "������" << (*it).m_Name << " ���ʣ�" << it->m_Salary << endl;
	}

	//2 ����
	multimap<int, Worker>mWorker;
	setGroup(vWorker, mWorker);

	//3 ��ʾԱ��
	showWorkerByGroup(mWorker);

	system("pause");
	return 0;
}