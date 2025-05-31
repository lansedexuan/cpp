#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        this->m_s = s;
        this->m_t = t;
        unordered_map<char, int>Count;
        for (int i = 0;i < s.size();i++) {
            Count[s[i]]++;//访问某个键的值应该使用方括号 []
        }
        for (int i = 0;i < t.size();i++) {
            Count[t[i]]--;
        }
        for (unordered_map<char, int>::iterator it = Count.begin();it != Count.end();it++) {
            if (it->second == -1) {//键 ->first
                return it->first;//值 ->second
            }
        }
        return '\0';
    }
private:
    string m_s;
    string m_t;
};

void test01() {
    string s = "abcd";
    string t = "abcde";
    Solution example01;
    char result = example01.findTheDifference(s, t);
    cout << "不同字母：" << result << endl;
}

void test02() {
    string s = "";
    string t = "y";
    Solution example02;
    char result = example02.findTheDifference(s, t);
    cout << "不同字母：" << result << endl;
}

int main() {
	test01();
	test02();
	system("pause");
	return 0;
}