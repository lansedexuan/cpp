#include<iostream>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int temp = 0;
        if (abs((int)s.size() - (int)t.size()) == 1) {
            if (s[0] == t[0]) {
                for (int i = 1;i < (s.size() < t.size() ? s.size() : t.size());i++) {
                    if (s[i] != t[i]) {
                        return false;
                    }
                }
                return true;
            }
            else {
                for (int i = 0;i < (s.size() < t.size() ? s.size() : t.size());i++) {
                    if ((s.size() < t.size() ? s[i] : s[i + 1]) != (s.size() < t.size() ? t[i + 1] : t[i])) {
                        return false;
                    }
                }
                return true;
            }
        }
        else if (s.size() == t.size()) {
            temp = 0;
            for (int i = 0;i < s.size();i++) {
                if (s[i] != t[i]) {
                    temp++;
                }
            }
            if (temp == 1) return true;
            else return false;
        }
        else {
            return false;
        }
    }
};

int main() {
    Solution test;
    bool a = test.isAnagram("anagram", "nagaram");
    cout << a << endl;

    system("pause");
    return 0;
}