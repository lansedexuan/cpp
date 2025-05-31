/*
	insert(elem); 
	clear();
	erase(pos);	//	删除pos迭代器所指元素 返回下一元素迭代器
	erase(beg,end); // 删除区间[beg,end)所有元素 返回下一元素迭代器 
	erase(key);
*/


#include<iostream>
#include<map>
using namespace std;

void printMap(map<int, int>& m) {
	for (map<int, int>::iterator it = m.begin();it != m.end();it++) {
		cout << "key = " << (*it).first << " value = " << it->second << endl;
	}
	cout << endl;
}

void test01() {
	map<int, int>m;

	//第一种
	m.insert(pair<int, int>(1, 10));

	//第二种
	m.insert(make_pair(2, 20));

	//第三种
	m.insert(map<int, int>::value_type(3, 30));

	//第四种
	m[4] = 40;//不建议插入 可以利用key访问value 

	cout << m[4] << endl;//m[5] 会导致创建value为5

	printMap(m);

	//删除
	m.erase(m.begin());
	printMap(m);

	m.erase(3);//按照key删除
	printMap(m);

	m.erase(m.begin(), m.end());
	m.clear();
	printMap(m);
}


int main() {
	test01();
	system("pause");
	return 0;
}