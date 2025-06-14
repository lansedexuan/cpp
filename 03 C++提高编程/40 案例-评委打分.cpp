#include<iostream>
using namespace std;
#include<vector>
#include<deque>
#include<algorithm>//标准算法头文件
#include<ctime>//随机数种子

/*
	有5名选手 10个评委打分 去除最高分最低分 取平均分
*/

class Person{
public:
	Person(string name, int score) {
		this->m_Name = name;
		this->m_Score = score;
	}
	string m_Name;
	int m_Score;
};



void createPerson(vector<Person>& v) {
	for (int i = 0;i < 5;i++) {
		string nameSpeed = "ABCDE";
		string name = "选手";
		name += nameSpeed[i];

		int score = 0;
		Person p(name, score);
		v.push_back(p);
	}
}

void setScore(vector<Person>& v) {
	for (vector<Person>::iterator it = v.begin();it != v.end();it++) {
		//将分数放入deque容器中
		deque<int>d;
		for (int i = 0;i < 10;i++) {
			int score = rand() % 41 + 60;//0-40 变成 60~100
			d.push_back(score);
		}

		cout << "选手:" << it->m_Name << " 打分：" << endl;
		for (deque<int>::iterator dit = d.begin();dit != d.end();dit++) {
			cout << *dit << " ";
		}
		cout << endl;

		//排序
		sort(d.begin(), d.end());
		//去除最高和最低分
		d.pop_back();
		d.pop_front();
		//取平均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin();dit != d.end();dit++) {
			sum += *dit;
		}
		int avg = sum / d.size();//8
		//将平均分赋值给选手
		it->m_Score = avg;
	}
}

void showScore(vector<Person>& v) {
	for (vector<Person>::iterator it = v.begin();it != v.end();it++) {
		cout << "姓名：" << (*it).m_Name << " 得分：" << (*it).m_Score << endl;
	}
}

int main() {
	//随机数种子
	srand((unsigned int)time(NULL));

	//1 创建5名选手
	vector<Person>v;
	createPerson(v);

	//测试
	//for (vector<Person>::iterator it = v.begin();it != v.end();it++) {
	//	cout << "姓名：" << (*it).m_Name << " 分数：" << (*it).m_Score << endl;
	//}

	//2 给5名选手打分
	setScore(v);

	//3 显示最后得分
	showScore(v);

	system("pause");
	return 0;
}