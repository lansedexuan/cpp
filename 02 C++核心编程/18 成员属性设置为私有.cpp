#include<iostream>
using namespace std;

//1 可以自己控制读写权限
//2 对于写可以检验数据有效性

class Person {
public:
	//1 读
	string getName() {
		return m_Name;
	}
	//1 写
	void setName(string name) {
		m_Name = name;
	}

	//2 读
	int getAge() {
		return m_Age;
	}
	//2 写 0-150
	void setAge(int age) {
		if (age < 0 || age>150) {
			cout << "年龄输入有误" << endl;
			return;
		}
		m_Age = age;
	}

	//3 
	void setIdol(string Idol) {
		m_Idol = Idol;
	}

private:
	string m_Name;//1 可读可写

	int m_Age = 18;//2 只读 写：0-150

	string m_Idol;//3 只写
};

int main() {
	Person p;

	//1
	p.setName("张三");
	cout << "姓名： " << p.getName() << endl;

	//2
	p.setAge(160);
	cout << "年龄： " << p.getAge() << endl;

	//3
	p.setIdol("小明");
	//cout << "年龄： " << p.getIdol() << endl; //只写 外界访问不到

	system("pause");
	return 0;
}