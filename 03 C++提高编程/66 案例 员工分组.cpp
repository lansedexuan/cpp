/*
	10名员工
	员工信息：姓名 工资组成
	部门：策划 美术 研发
	随机给10名员工分配部门和工资
	通过multimmap插入 key(部门编号）value(员工）
	分部门显示员工信息
*/

#define CEHUA 0
#define MEISHU 1
#define YANFA 2

/*
	创建员工 放到vector中
	遍历vector 随机分组
	分组后 将部门作为key 员工作为value 放入multimap
	分部门显示员工信息
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
		worker.m_Name = "员工";
		worker.m_Name += nameSpeed[i];

		worker.m_Salary = rand() % 10000 + 10000;//10000-19999
		v.push_back(worker);
	}
}

void setGroup(vector<Worker>& v, multimap<int, Worker>& m) {
	for (vector<Worker>::iterator it = v.begin();it != v.end();it++) {
		int deptId = rand() % 3;//0-2
		m.insert(make_pair(deptId,*it));//部门 员工
	}
}

void showWorkerByGroup(multimap<int, Worker>& m) {
	cout << "策划部门：" << endl;
	multimap<int, Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA);//统计具体人数
	int index = 0;
	for (;pos != m.end() && index < count;pos++, index++) {
		cout << "姓名:" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
	}

	cout << "----------------------" << endl;
	cout << "美术部门：" << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU);//统计具体人数
	index = 0;
	for (;pos != m.end() && index < count;pos++, index++) {
		cout << "姓名:" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
	}

	cout << "----------------------" << endl;
	cout << "研发部门：" << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA);//统计具体人数
	index = 0;
	for (;pos != m.end() && index < count;pos++, index++) {
		cout << "姓名:" << pos->second.m_Name << " 工资：" << pos->second.m_Salary << endl;
	}
}

int main() {
	srand((unsigned int)time(NULL));
	//1 创建员工
	vector<Worker>vWorker;
	createWorker(vWorker);

	//测试
	for (vector<Worker>::iterator it = vWorker.begin();it != vWorker.end();it++) {
		cout << "姓名：" << (*it).m_Name << " 工资：" << it->m_Salary << endl;
	}

	//2 分组
	multimap<int, Worker>mWorker;
	setGroup(vWorker, mWorker);

	//3 显示员工
	showWorkerByGroup(mWorker);

	system("pause");
	return 0;
}