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
    //ָ������ͨ�� -> ���ʳ�Ա	�Ƚ�����ָ�룬�ٷ��ʳ�Ա
    //�ڴ棺�洢�ڶѣ�heap���У�ͨ��ָ���ӷ��ʡ�
    TreeNode* node1 = new TreeNode(5);
    cout << node1->val << endl;
    node1->left = NULL;
    cout << node1->left << endl;

    //ָ������ͨ�� -> ���ʳ�Ա	�Ƚ�����ָ�룬�ٷ��ʳ�Ա
    //�ڴ棺�洢��ջ��stack��������ڲ���ֱ�ӷ��ʡ�
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