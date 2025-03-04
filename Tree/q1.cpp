// Declare a tree structure and enter the values

#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode (int value) {
        data = value;
        left = right = NULL;
    }
};

int main() {
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    cout << "Root Node: " << root->data<<"\n"<<"Left child: " <<root->left->data<<"\n"<<"Right child: " <<root->right->data<<endl;
    return 0;
}