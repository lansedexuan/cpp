#include<iostream>
using namespace std;

/*
	int compare(const string& s) const;//c++
	int compare(const char* s) const;//c
*/

void test01() {
	string str1 = "xello";
	string str2 = "hello";

	if (str1.compare(str2) == 0) {
		cout << "str1 = str2" << endl;
	}
	else if(str1.compare(str2)>0){
		cout << "str1 > str2" << endl;
	}
	else {
		cout << "str1 < str2" << endl;
	}
}

int main() {
	test01();

	system("pause");
	return 0;
}