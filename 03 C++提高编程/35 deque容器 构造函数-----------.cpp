#include<iostream>
using namespace std;
#include<deque>

//˫������

//deque��vector������
//vector����ͷ���Ĳ���ɾ��Ч�ʵ� ������Խ�� Ч��Խ��
//deque����ͷ���Ĳ���ɾ���ٶȱ�vector��
//vector����Ԫ��ʱ�ٶȱ�deque��

//	deque<T>degT;//Ĭ�Ϲ���
//	deque(beg,end);//���캯��������ҿ������е�Ԫ�ؿ���������
//	deque(n.elem);//���캯����n��elem����������
//	deque(const deque& deq);//�������캯��

void PrintDeque(const deque<int>& d) {//ֻ��
	for (deque<int>::const_iterator it = d.begin();it != d.end();it++) {
		//*it = 100;//�����޸�
		cout << *it << " " ;
	}
	cout << endl;
}

void test01() {
	deque<int>d1;
	for (int i = 0;i < 10;i++) {
		d1.push_back(i);
	}
	PrintDeque(d1);

	deque<int>d2(d1.begin(), d1.end());
	PrintDeque(d2);

	deque<int>d3(10, 100);//10��100
	PrintDeque(d3);

	deque<int>d4(d3);
	PrintDeque(d4);
}

int main() {
	test01();

	system("pause");
	return 0;
}