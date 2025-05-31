//replace_if(iteator beg, iterator end, _Fred, newValue);

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class greater30 {
public:
	bool operator()(int val) {
		return val > 30;
	}
};

void MyPrint(int val) {
	cout << val << " ";
}

void test01() {
	vector<int>v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(50);
	v.push_back(30);
	v.push_back(40);
	v.push_back(30);
	v.push_back(10);
	v.push_back(20);

	cout << "Ìæ»»Ç°£º" << endl;
	for_each(v.begin(), v.end(), MyPrint);
	cout << endl;

	replace_if(v.begin(), v.end(), greater30(), 3000);

	cout << "Ìæ»»ºó£º" << endl;
	for_each(v.begin(), v.end(), MyPrint);
	cout << endl;
}

int main() {
	test01();

	system("pause");
	return 0;
}