#include<iostream>
using namespace std;

//多态案例2 制作饮品
class AbstractDrinking {
public:
	//煮水
	virtual void Boil() = 0;
	//冲泡
	virtual void Brew() = 0;
	//倒入杯中
	virtual void PourInCup() = 0;
	//加入辅料
	virtual void PutSomething() = 0;
	//制作饮品
	void MakeDrink() {
		Boil();//多态
		Brew();//多态
		PourInCup();//多态
		PutSomething();//多态
	}
};

class Coffee:public AbstractDrinking {
	//煮水哦
	virtual void Boil() {
		cout << "煮农夫山泉" << endl;
	}
	//冲泡
	virtual void Brew() {
		cout << "冲泡咖啡" << endl;
	}
	//倒入杯中
	virtual void PourInCup() {
		cout << "倒入杯中" << endl;
	}
	//加入辅料
	virtual void PutSomething() {
		cout << "加入糖和牛奶" << endl;
	}
};

class Tea :public AbstractDrinking {
	//煮水哦
	virtual void Boil() {
		cout << "煮矿泉水" << endl;
	}
	//冲泡
	virtual void Brew() {
		cout << "冲泡茶叶" << endl;
	}
	//倒入杯中
	virtual void PourInCup() {
		cout << "倒入杯中" << endl;
	}
	//加入辅料
	virtual void PutSomething() {
		cout << "加入柠檬" << endl;
	}
};

//制作函数
void doWork(AbstractDrinking *abs) {//AbstractDrinking *abs = new coffee
	abs->MakeDrink();
	delete abs;//释放
}

void test01() {
	//制作咖啡
	doWork(new Coffee);

	cout << "--------------" << endl;

	//制作咖啡
	doWork(new Tea);
}

int main() {
	test01();

	system("pause");
	return 0;
}