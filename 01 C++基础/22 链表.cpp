#include<iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

void test01() {
    //指针类型通过 -> 访问成员	先解引用指针，再访问成员
    //内存：存储在堆（heap）中，通过指针间接访问。
    TreeNode* node1 = new TreeNode(5);
    cout << node1->val << endl;
    node1->left = NULL;
    cout << node1->left << endl;

    //指针类型通过 -> 访问成员	先解引用指针，再访问成员
    //内存：存储在栈（stack）或对象内部，直接访问。
    TreeNode node2(5);
    cout << node2.val << endl;
    node2.left =NULL;
    cout << node2.left << endl;
}

int main() {
    test01();

    system("pause");
    return 0;
}